import numpy as np
import matplotlib.pyplot as plt
from matplotlib.backends.backend_tkagg import FigureCanvasTkAgg
import tkinter as tk
from tkinter import ttk

def simulate_collision():
    t = np.linspace(0, float(entry_time.get()), 1000)
    v1 = float(entry_velocity1.get())
    v2 = float(entry_velocity2.get())
    p1 = float(entry_position1.get())
    p2 = float(entry_position2.get())

    pos1 = p1 + v1 * t
    pos2 = p2 + v2 * t

    fig, ax = plt.subplots()
    ax.plot(t, pos1, label='Cuerpo 1')
    ax.plot(t, pos2, label='Cuerpo 2')

    # Buscar el punto de colisión
    collision_index = np.where(np.abs(pos1 - pos2) < 1e-5)[0]
    if collision_index.size > 0:
        collision_time = t[collision_index[0]]
        collision_pos = pos1[collision_index[0]]
        ax.plot(collision_time, collision_pos, 'ro', label='Colisión')

    ax.legend()
    ax.set_xlabel('Tiempo (s)')
    ax.set_ylabel('Posición (m)')
    ax.set_title('Simulación de colisión')

    canvas = FigureCanvasTkAgg(fig, master=frame_plot)
    canvas.draw()
    canvas.get_tk_widget().pack(side=tk.TOP, fill=tk.BOTH, expand=1)

def clear_plot():
    for widget in frame_plot.winfo_children():
        widget.destroy()

window = tk.Tk()
window.title("Simulación de Colisión")
window.geometry("800x600")

frame = tk.Frame(window)
frame.pack(side=tk.TOP, fill=tk.X)

tk.Label(frame, text="Tiempo de simulación (s):").grid(row=0, column=0)
entry_time = tk.Entry(frame)
entry_time.grid(row=0, column=1)

tk.Label(frame, text="Velocidad del cuerpo 1 (m/s):").grid(row=1, column=0)
entry_velocity1 = tk.Entry(frame)
entry_velocity1.grid(row=1, column=1)

tk.Label(frame, text="Posición inicial del cuerpo 1 (m):").grid(row=2, column=0)
entry_position1 = tk.Entry(frame)
entry_position1.grid(row=2, column=1)

tk.Label(frame, text="Velocidad del cuerpo 2 (m/s):").grid(row=3, column=0)
entry_velocity2 = tk.Entry(frame)
entry_velocity2.grid(row=3, column=1)

tk.Label(frame, text="Posición inicial del cuerpo 2 (m):").grid(row=4, column=0)
entry_position2 = tk.Entry(frame)
entry_position2.grid(row=4, column=1)

tk.Button(frame, text="Simular", command=lambda: [clear_plot(), simulate_collision()]).grid(row=5, columnspan=2)

frame_plot = tk.Frame(window)
frame_plot.pack(side=tk.BOTTOM, fill=tk.BOTH, expand=1)

scrollbar = ttk.Scrollbar(frame_plot, orient="vertical")
scrollbar.pack(side=tk.RIGHT, fill="y")

canvas_frame = tk.Canvas(frame_plot, yscrollcommand=scrollbar.set)
canvas_frame.pack(side=tk.LEFT, fill="both", expand=1)

scrollbar.config(command=canvas_frame.yview)

window.mainloop()

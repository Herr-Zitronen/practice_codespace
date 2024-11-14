import numpy as np
import matplotlib.pyplot as plt

tiempo = np.linspace(0, 10, 100)
velocidad = 5  # m/s
posicion = velocidad * tiempo

plt.plot(tiempo, posicion, label='MRU')
plt.xlabel('Tiempo (s)')
plt.ylabel('Posición (m)')
plt.title('Movimiento Rectilíneo Uniforme')
plt.legend()
plt.show()

aceleracion = 2  # m/s^2
posicion = 0.5 * aceleracion * tiempo**2

plt.plot(tiempo, posicion, label='MRUA')
plt.xlabel('Tiempo (s)')
plt.ylabel('Posición (m)')
plt.title('Movimiento Rectilíneo Uniformemente Acelerado')
plt.legend()
plt.show()

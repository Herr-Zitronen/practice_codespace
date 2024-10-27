import numpy as np
import matplotlib.pyplot as plt
from mpl_toolkits.mplot3d import Axes3D
from matplotlib.animation import FuncAnimation

A = np.array([0, 0, 0])
B = np.array([4, 5, 6])
C = np.array([-2, -8, 9])

AB = B-A
AC = C-A


fig = plt.figure()
ax = fig.add_subplot(111 , projection='3d')

def update(num):
    ax.clear()
    ax.quiver(A[0], A[1], A[2], AB[0], AB[1], AB[2], color='r', label=('AB ', AB))
    ax.quiver(A[0], A[1], A[2], AC[0], AC[1], AC[2], color='b', label=('AC ',AC))


    ax.set_xlim([0, 10])
    ax.set_ylim([0, 10])
    ax.set_zlim([0, 10])

    ax.set_xlabel('X')
    ax.set_ylabel('Y')
    ax.set_zlabel('Z')
    ax.legend()

ani = FuncAnimation(fig, update, frames=100, interval=100)

plt.show()

# Program Tabung (Volume, Luas, Keliling)
import math

try:
    r = float(input())
    t = float(input())
except ValueError:
    data = input().split()
    r = float(data[0])
    t = float(data[1])

# Rumus
phi = 22.0 / 7.0
volume = phi * (r ** 2) * t
luas = 2 * phi * r * (r + t)
keliling = 2 * phi * r

print(f"Volume = {volume:.2f}")
print(f"Luas = {luas:.2f}")
print(f"Keliling = {keliling:.2f}")
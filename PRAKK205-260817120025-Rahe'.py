# Program Segitiga Pythagoras
import math

data = input().split()
A = int(data[0])
B = int(data[1])

# Sisi miring (C) adalah nilai terbesar, sisi tegak (Tinggi) adalah A, Alas dicari dengan Pythagoras
tinggi = A
sisi_miring = B
alas = int(math.sqrt((sisi_miring ** 2) - (tinggi ** 2)))
keliling = alas + tinggi + sisi_miring
luas = int(0.5 * alas * tinggi)

print(f"Alas = {alas} cm")
print(f"Tinggi = {tinggi} cm")
print(f"Keliling = {keliling} cm")
print(f"Luas = {luas} cm^2")
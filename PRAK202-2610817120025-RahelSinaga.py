val1_str = input("Masukkan Nilai Pertama : ")
val2_str = input("Masukkan Nilai Kedua   : ")

val1 = float(val1_str)
val2 = float(val2_str)
hasil = val1 + val2

print(f'Hasil dari penjumlahan nilai pertama "{val1_str}" dan nilai kedua "{val2_str}" adalah "{hasil:.2f}"')
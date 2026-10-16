diagonal = input().split()

if len(diagonal):
    a, b, i, j, x, y = map(float, diagonal)

    hasil = ((a - b) * (i / j) - (x + y))
    print(f"{hasil:.3f}\n")

a, b = map(float, input().split())
i, j = map(float, input().split())
x, y = map(float, input().split())

hasil = (a - b) * (i / j) - (x + y)
print(f"{hasil:.3f}")

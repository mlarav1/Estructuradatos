matriz = [
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9]
]

print("\nMatriz 3x3:")

for fila in matriz:
    print(fila)

print("\nMatriz en forma de tabla:")

for fila in matriz:
    for elemento in fila:
        print(elemento, end=" ")
    print()
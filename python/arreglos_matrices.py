import random

numeros = [random.randint(1, 100) for _ in range(10)]

print("Arreglo inicial:")
print(numeros)

print("Recorrido con for:")

for i in range(len(numeros)):
    print("Posición", i, ":", numeros[i])


print("Recorrido con for-each:")

for numero in numeros:
    print(numero)

print("Arreglo después de cambiar los impares por cero:")

for i in range(len(numeros)):
    if numeros[i] % 2 != 0:
        numeros[i] = 0

print(numeros)


resultado_indice = numeros.copy()

for i in range(len(resultado_indice)):
    resultado_indice[i] = resultado_indice[i] * i

print("Arreglo después de multiplicar cada valor por su índice:")
print(resultado_indice)


valor_buscado = int(input("Ingrese el valor que desea buscar: "))

posicion = -1

for i in range(len(numeros)):
    if numeros[i] == valor_buscado:
        posicion = i
        break

if posicion != -1:
    print("El valor", valor_buscado, "se encuentra en la posición", posicion)
else:
    print("El valor", valor_buscado, "no se encuentra en el arreglo.")
    
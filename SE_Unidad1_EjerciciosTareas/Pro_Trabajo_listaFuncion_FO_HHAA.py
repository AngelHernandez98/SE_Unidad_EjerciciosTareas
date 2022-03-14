'''Programa (Trabajo)

n = ?           Donde n >= 2

1.- Generar un arreglo de tamaño n
2.- Cada posición del arreglo la van a rellenar con un 0 o un 1 aleatoriamente
3.- Generar un Método de nombre 'FO' que permitirá obtener el conteo de todos los 1s en el arreglo
4.- Aplicar el método al arreglo generado para él valor de n ingresador por el usuario
5.- Desplegar el resultado obtenido por el método FO

                    Hecho por: Hernández Hernández Angel Anastasio
'''

from random import randint

tamanioArreglo = int(input("Ingrese el tamaño del arreglo: "))
arreglo = []
total = 0

for x in range (0, tamanioArreglo):
    numeroBinario = randint(0, 1)
    arreglo.append(numeroBinario)

def fo(total):
    for x in range(0, tamanioArreglo):
        if arreglo[x] == 1:
            total = total + 1
    return total

print(arreglo[:])
print(fo(total))
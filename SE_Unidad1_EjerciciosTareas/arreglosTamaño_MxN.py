'''Algoritmo: Crear m arreglos de tamaño n cada uno, el arreglo será llenado aleatoriamente con ceros y unos'''
import random as random

cantidadM = int(input("Ingrese la cantidad de arreglos que desea crea: "))
tamanioN = int(input("Ingrese el tamaño de los arreglos: "))
print("")

arreglo = []
listaAux = []
numeroBinario = 0

for x in range(cantidadM):
    print("Arreglo #{}".format(x + 1))
    for y in range(tamanioN):
        listaAux.append(random.randint(0, 1))
    arreglo.append(listaAux[:])
    print(arreglo[:])
    listaAux.clear()
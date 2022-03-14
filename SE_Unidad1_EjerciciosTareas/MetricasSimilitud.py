import cmath as m

'''Métrica de Similitud: Manhattan
    Hecho por: Hernández Hernández Angel Anastasio 8°G'''
Rx = []
Ry = []
def ms_Manhattan(X1, X2, Y1, Y2):
    for x in range(len(X1)):
        Rx.append(abs(X1[x] - X2[x]))
        Ry.append(abs(Y1[x] - Y2[x]))
    return "Resultado de X: {} ".format(Rx) + "\nResultado de Y: {}".format(Ry)

'''Métrica de Similitud: Euclidiana
    Hecho por: Hernández Hernández Noel 8°I'''
def ms_Euclidiana(X, Y):
    Resultados = []

    for X in range(X):
        Contador = 0
        for Y in range(len(Y[0])):
            Contador = Contador + (X[Y] - Y[X][Y])^2
        Resultados.append(m.sqrt(Contador))

'''Métrica de Similitud: Euclidiana Promedio
    Hecho por: Hernández Licea Luis Armando 8°I'''
def ms_EuclidianaPromedio(valY,valX):
    indice = 0
    longitud = len(valY)

    suma = 0
    while indice < longitud:
        resultado = valX[indice] - valY[indice]  # (Xi - Yi)
        resultado = resultado * resultado  # (Xi - Yi)^2
        suma = suma + resultado  # ∑(Xi - Yi)^2
        indice = indice + 1

    resultado = suma / longitud  # (∑(Xi - Yi)^2)/n
    resultado = m.sqrt(resultado)  # ((∑(Xi - Yi)^2)/n)^(1/2)

    return resultado

'''Métrica de Similitud: Diferencia de Carácter Promedio
    Hecho por: Gamez Hernández Carlos Eduardo 8°G'''
def ms_DiferenciaCaracterPromedio(X, Y):
    d = 0
    for i in range(len(X)):
        d = d + abs(X[i] - Y[i])
    d = d/len(X)
    return d

'''Métrica de Similitud: Canberra
    Hecho por: Torres Orozco David Jonatan 8°G'''
def ms_Canberra(X, Y):
    d = 0
    for i in range(len(X)):
        d = abs(X[i] - Y[i])/(abs(X[i]) + abs(Y[i])) + d
    return d
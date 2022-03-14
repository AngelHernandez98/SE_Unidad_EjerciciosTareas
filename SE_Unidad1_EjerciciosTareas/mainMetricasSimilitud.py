import MetricasSimilitud

valorX = [3, 7, 4, 3, 2]
valorY = [4, 5, 6, 3, 2]
X1 = [2, 10, 7]
X2 = [10, 3, 21]
Y1 = [2, 5, -3]
Y2 = [5, 21, 3]

print("Métricas de Similitud\n")
print("1.- Manhattan")
print(MetricasSimilitud.ms_Manhattan(X1, X2, Y1, Y2).__str__())
print("3.- Euclidiana Promedio")
print("El resultado es: " + MetricasSimilitud.ms_EuclidianaPromedio(valorY, valorX).__str__())
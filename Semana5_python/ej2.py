mi_lista = [1,2,3,4,5]

otra_lista = [10,20,30,40,50]

import random

lista_aleatoria = []
for i in range(0, 10):
  lista_aleatoria.append(random.randint(0,100))
print(lista_aleatoria)

lista_de_datos = ['palabra', 10, 'otra palabra']

matriz = [[1,2,3], [4,5,6]]

for i in range(0, len(matriz)):
  for j in range(0, len(matriz[0])):
    print(matriz[i][j])

import random

def numeros_pares(x):
    for i in x:
        if i %2 ==0:
            yield i

x = [1,2,3,4]
numeros_pares(x)

otra_lista = [1,2,3,4]
numeros_pares(otra_lista)

lista = [10,20,30,1,2,5,8,100,"hola"]

print("Aplicando Filter")

lista_filtrada = filter(lambda x: x == "hola", lista)

print(len(list(lista_filtrada)))

palabra = "AAAABBBBCCCCC"
print(palabra)
palabra = palabra[::-1]

print(palabra)

en_numeros = palabra.replace("A", "1")
print(en_numeros)

matriz = [ [1,2,3,5,6] , [4,5] , [7,8,9] ]

#res = map(lambda x: sum(x), matriz)
#[17, 9, 24]

res = map(lambda x: sum(filter(lambda x: x%2 == 0, x)), matriz)

res = map(lambda x: sum(filter(lambda y: y%2 == 0, x)), matriz)
print(list(res))
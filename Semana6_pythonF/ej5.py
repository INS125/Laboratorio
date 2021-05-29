
import random

lista_ran = [random.randint(0,100) for i in range(0,10)]
nueva_lista = []
print(lista_ran)

for elm in lista_ran:
    if elm %2 == 0:
        nueva_lista.append(elm*2)

print(nueva_lista)

print("Aplicando Filter")

numero_mult = map(lambda x: x*2, filter(lambda x: x%2 == 0, lista_ran))
print(list(numero_mult))
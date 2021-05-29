def multiplicarpor2(num):
  return num*2

def multiplicarpor3(num):
  return num*3

mi_numero = 7
print(multiplicarpor2(mi_numero))
print(multiplicarpor2)
print(multiplicarpor3)

multpor2_lamba = lambda x : x*2
multpor3_lamba = lambda x : x*3

print(multpor2_lamba)
print(multpor3_lamba)
print(multpor2_lamba(mi_numero))


lista = [20,30,40]

print(multpor2_lamba(lista))

mul_lista_por2_lamba = lambda lista_ : [ el*2 for el in lista_ ] 

print(mul_lista_por2_lamba(lista))

nueva_lista = [el*3 for el in lista]
print(nueva_lista)
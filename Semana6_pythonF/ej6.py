from functools import reduce

lista = [10, 20, 30, 40 , 50, 60]

reduccion = reduce(lambda x,y: x+y, filter(lambda x: x!= 10, lista))
print(reduccion)

red_mult = reduce(lambda x,y: x*y, lista)
print(red_mult)

lista_de_listas = [ [1,2], [3,4], [5,6], [7,8,9]  ]
#[ [1,2], [3,4], [5,6], [7,8,9]  ]
#[ [1,2,3,4], [5,6], [7,8,9]  ]
#[ [1,2,3,4,5,6], [7,8,9]  ]
#[ [1,2,3,4,5,6,7,8,9]  ]
#[1,2,3,4,5,6,7,8,9]
nueva_lista = reduce(lambda x,y: x + y, lista_de_listas)
print(nueva_lista)

lista_de_listas = [ [1,2], [3,4], [5,6], [7,8,9]  ]

otra_lista = map(lambda x_: [i*2 for i in x_], lista_de_listas)
print(list(otra_lista))


otra_lista_map = map(lambda lista_: map(lambda x: x*2, lista_), lista_de_listas)
#map(lambda x: print(list(x)) , otra_lista_map)
for i in otra_lista_map:
  print(list(i))



otra_lista_map_2 = map(lambda lista_: map(lambda x: x*2, lista_), lista_de_listas)
print(list(map(lambda x: list(x) , otra_lista_map_2)))
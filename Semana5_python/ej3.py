def funcion(parametro1, parametro2):
  var = parametro1 ** 2
  return var * parametro2

def funcion_sin_retorno(nombre):
  print("Hola", nombre)

def factorial(n):
  acum = 1
  for i in range(1, n+1):
    acum *= i
  return acum

def factoria_hasta(m):
  for i in range(0, m+1):
    res = factorial(i)
    print(res)

#No cambia el valor del número
def cambio_valor(x):
  x = x*2
  print(x)

#Cambia el valor de la lista
def borrar_numero(lista, n):
  lista.remove(n)
  
num = 10
cambio_valor(num)
print(num)

lista = [1,2,3]
cambio_valor(lista)
print(lista)
borrar_numero(lista, 2)
print(lista)
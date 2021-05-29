lista_num1 = [10, 20, 30, 40, 50]
lista_num2 = [1, 2, 3]

mapeo_int = map(lambda x, y: x + y, lista_num1, lista_num2)
print(list(mapeo_int))
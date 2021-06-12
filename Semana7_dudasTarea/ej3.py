mi_lista = [[ [1,2,3,5,6] , [4,5] , [7,8,9] ]]

iter_lista = iter(mi_lista)
print(next(iter_lista))
resultado = map(lambda x: sum(x), next(iter_lista))
print(list(resultado))
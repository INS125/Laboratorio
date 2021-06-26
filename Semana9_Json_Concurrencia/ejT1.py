import time
from concurrent.futures import ThreadPoolExecutor
from concurrent.futures import ProcessPoolExecutor
#Measure-Command { python .\ejT1.py }
def contar_hasta(n):
	start = time.time()
	i = 0
	while i<n:
		i+=1

	tiempo = time.time()-start
	print("En contar hasta",n,"me demore",tiempo)
	return tiempo

valores = [
14724292,
98582115,
46434954,
53716608,
73600540,
24820679,
55962544,
11746328]

    
if __name__ == '__main__':
	print("HOLA, ESTOY EN LA PRIMERA LINEA DE EJECUCIÓN")

	# #11,4350141
	# lista_tiempos = []
	# for valor in valores:
	# 	lista_tiempos.append(contar_hasta(valor))

	#3,91
	executor = ProcessPoolExecutor(max_workers=5)
	resultado = executor.map(contar_hasta, valores)

	print("HASTA LUEGO AMIGOS, ESTOY EN LA ULTIMA LINEA")
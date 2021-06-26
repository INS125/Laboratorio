import time
from concurrent.futures import ThreadPoolExecutor
from concurrent.futures import ProcessPoolExecutor

valores = [
14724292,
98582115,
46434954,
53716608,
73600540,
24820679,
55962544,
11746328]

contador_tiempo = []

def contar_hasta(n):
	start = time.time()
	i = 0
	while i<n:
		i+=1

	tiempo = time.time()-start
	print("En contar hasta",n,"me demore",tiempo)
	contador_tiempo.append(tiempo)
	print(contador_tiempo)
	return n, tiempo

if __name__ == '__main__':
	print("HOLA, ESTOY EN LA PRIMERA LINEA DE EJECUCIÓN")
	
	#executor = ProcessPoolExecutor(max_workers=8)
	executor = ThreadPoolExecutor(max_workers=5)
	resultado = executor.map(contar_hasta, valores)

	for num,timer in resultado:
		print("OK", num,timer)

	print("HASTA LUEGO AMIGOS, ESTOY EN LA ULTIMA LINEA")
	print("Los tiempos fueron:",contador_tiempo)
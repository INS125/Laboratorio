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

contador = []

def contar_hasta(n):
	start = time.time()
	i = 0
	while i<n:
		i+=1

	tiempo = time.time()-start
	print("En contar hasta",n,"me demore",tiempo)
	contador.append(tiempo)
	return tiempo

def dormir_hasta(n):
	start = time.time()

	time.sleep(n)
	
	tomo = time.time()-start
	print("Esto se demoro",tomo)
	return n

if __name__ == '__main__':
	
	#ex = ProcessPoolExecutor(max_workers=8)
	ex = ThreadPoolExecutor(max_workers=8)
	
	print("Hola estoy comenzando la ejecucion")
	dormir = [i for i in range(1,9)]
	resultado = list(ex.map(dormir_hasta, dormir))
	#resultado = ex.map(dormir_hasta, dormir)

	print("Chao me voy a almorzar")
	print(resultado)
	
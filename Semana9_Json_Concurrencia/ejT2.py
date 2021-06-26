import time
from concurrent.futures import ThreadPoolExecutor
from concurrent.futures import ProcessPoolExecutor

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
#valores = [98582115]
    
if __name__ == '__main__':
	print("HOLA, ESTOY EN LA PRIMERA LINEA DE EJECUCIÓN")

	#11,55 
	executor = ThreadPoolExecutor(max_workers=8)
	resultado = executor.map(contar_hasta, valores)

	print("HASTA LUEGO AMIGOS, ESTOY EN LA ULTIMA LINEA")
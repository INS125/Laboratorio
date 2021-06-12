lista_uno = [1,2,3,4,5]

lista_dos = [10,20,30,40,50]

#suma = map(lambda x, y: x+y, lista_uno,lista_dos)

#print(list(suma))


# with open("examenes.tsv", "r") as file:
#     data = file.readlines()
    
#     calculo = map(lambda x: x.replace("\n", "").split("\t"), data)
#     print(list(calculo))
    
#open("salida.tsv", "w").write("Holiwis\n")
#file_salida.write("Holiwis\n")
#file_salida.close()

# file_salida = open("salida.tsv", "w")

# map(lambda x: file_salida.write(f"{x}\n"), range(0,100))

from lectura import generadorArchivo

if __name__ == "__main__":

    examenes = generadorArchivo('examenes.tsv')

    #file_salida = open("salida.tsv", "w")
    #print(next(examenes))

    #file_salida.write("\t".join(next(examenes))) # asi puede mostrar una linea

    #list(map(file_salida.write("\t".join(next(examenes))))) # asi puede mostrar una linea

    print(list(map(lambda x: next(x), examenes))) # asi puede mostrar una linea


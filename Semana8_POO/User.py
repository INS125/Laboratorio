class Horario():
    def __init__(self, dato, dato2):
        self.dato = dato
        self.dato2 = dato2

class Usuario():
    def __init__(self, identificador, nombre):
        self.identificador = identificador
        self.nombre = nombre
        self.marcas = list()
        self.planificaciones = list()
        
    def Marcar(self, marca):
        #Agregar su marca
        pass

    def Informe(self):
        with open (f"{self.identificador}.txt","w") as file_out:
            file_out.write(f"{self.nombre}\n")
        


def crearInforme():
    pass

h = Horario("hola","hola2")
u_1 = Usuario("111-1", "nico")
u_1.Informe()

u_2 = Usuario("222-2", "Ignacio")
u_2.Informe()
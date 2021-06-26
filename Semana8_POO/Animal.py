class Animal():

    con_hambre = True
    def __init__(self, nombre, color, sexo):
        self.nombre = nombre
        self.color = color
        self.sexo = sexo
    
    def getNombre(self):
        return self.nombre

    def getColor(self):
        return self.color

    def getSexo(self):
        return self.sexo
    
    def alimentar(self):
        self.con_hambre = False
    
class Gato(Animal):
    def __init__(self, nombre, color, sexo, raza):
        super().__init__(nombre, color, sexo)
        self.raza = raza
        self.horario_comidas = list()

    def Descripcion(self):
        return self.getNombre(), self.getColor(), self.getSexo(), self.raza
    
    def Agregar_horario_comida(self, comida):
        self.horario_comidas.append(comida)

class Comida():
    def __init__(self, hora, cantidad):
        self.hora = hora
        self.cantidad = cantidad

comida_uno = Comida("15:30", 45)

mi_gato_uno = Gato("Ryu", "cafe", "Macho", "cualquiera")
mi_gato_dos = Gato("Bito", "Black", "Macho", "cualquiera")
mi_gato_tres = Gato("Julieta", "Negro", "Hembra", "cualquiera")

#gatos = [mi_gato_uno, mi_gato_dos, mi_gato_tres]
gatos = []
gatos.append(mi_gato_uno)
gatos.append(mi_gato_dos)
gatos.append(mi_gato_tres)
#Agregar comida solo a Ryu
for gato in gatos:
    if gato.nombre == "Ryu":
        gato.Agregar_horario_comida(comida_uno)


with open("Marcas.txt", 'r') as file_in:
    for line in file_in:
        print(line)
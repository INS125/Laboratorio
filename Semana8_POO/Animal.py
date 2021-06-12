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

    def Descripcion(self):
        return self.getNombre(), self.getColor(), self.getSexo(), self.raza
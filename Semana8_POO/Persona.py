
class Persona():

    def __init__(self, nombre, sexo, edad, rut):
        self.nombre = nombre
        self.sexo = sexo
        self.edad = edad
        self.rut = rut
    
    def presentarse(self):
        return f"Hola soy {self.nombre}"

    def __str__(self):
        return f"{self.nombre} {self.edad}"    

p_juanito = Persona("Juanito","nn", 30, "111-1")

print(p_juanito.presentarse())

p_maria = Persona("Maria","Femenino", 40, "999-9")

print(p_maria.presentarse())
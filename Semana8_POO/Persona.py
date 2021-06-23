class Corazon():
    def __init__(self, frecuencia, tamanno):
        self.frecuencia = frecuencia
        self.tamanno = tamanno

class Persona():

    def __init__(self, nombre, sexo, edad, rut, corazon):
        self.nombre = nombre
        self.sexo = sexo
        self.edad = edad
        self.rut = rut
        self.corazon = corazon
    
    def presentarse(self):
        return f"Hola soy {self.nombre}"

    def __str__(self):
        return f"{self.nombre} {self.edad}"    


corazon = Corazon(70, "Mediano")
p_juanito = Persona("Juanito","nn", 30, "111-1", corazon)

print(p_juanito.presentarse())

corazon_m = Corazon(65, "Grande")
p_maria = Persona("Maria","Femenino", 40, "999-9", corazon_m)

print(p_maria.presentarse())
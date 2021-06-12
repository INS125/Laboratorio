class Gato:
    def __init__(self, nombre, edad):
        self.nombre = nombre
        self.edad = edad

    def info(self):
        print(f"Yo soy un gato. Mi nombre es {self.nombre} y tengo {self.edad} años.")        

    def hacer_sonido(self):
        print("Miau")


class Perro:
    def __init__(self, nombre, edad):
        self.nombre = nombre
        self.edad = edad

    def info(self):        
        print(f"Yo soy un perro. Mi nombre es {self.nombre} y tengo {self.edad} años.")  

    def hacer_sonido(self):
        print("Guau")


gato = Gato("KittyCat", 2.5)
perro = Perro("Fluffy", 4)

for animal in (gato, perro):
    animal.hacer_sonido()

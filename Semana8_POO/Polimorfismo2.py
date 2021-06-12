from math import pi

class Forma:
    def __init__(self, nombre):
        self.nombre = nombre

    def area(self):
        pass

    def hecho(self):
        return "Soy una forma de dos dimensiones."

    def __str__(self):
        return self.nombre


class Cuadrado(Forma):
    def __init__(self, largo):
        super().__init__("Cuadrado")
        self.largo = largo

    def area(self):
        return self.largo**2

    def hecho(self):
        return "Los Cuadrados tienen angulos de 90 grados."


class Circulo(Forma):
    def __init__(self, radio):
        super().__init__("Circulo")
        self.radio = radio

    def area(self):
        return pi*self.radio**2


a = Cuadrado(4)
print(a.hecho())


b = Circulo(7)
print(b)
print(b.hecho())
print(b.area())

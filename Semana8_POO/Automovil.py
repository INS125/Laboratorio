class Automovil():
    def __init__(self, marca, precio):
        self.marca = marca
        self.precio = precio
        self.estado_motor = False
    
    def PrenderAuto(self):
        self.estado_motor = True

    def ApagarAuto(self):
        self.estado_motor = False
    
    def EstadoMotor(self):
        print(f"El estado del motor es: ", end ='')
        if self.estado_motor:
            print("Encendido")
        else:
            print("Apagado")

    def __gt__(self, otro_auto):
        return self.precio > otro_auto.precio

    def __add__(self, otro_auto):
        return self.precio + otro_auto.precio

auto_toyota = Automovil("Toyota", 5000000)
auto_fiat = Automovil("Fiat", 3000000)
print(f"El precion del auto es ${auto_toyota.precio}")

auto_toyota.EstadoMotor()
auto_toyota.PrenderAuto()

auto_toyota.EstadoMotor()

print(f"Precio del auto {auto_fiat.marca} es {auto_fiat.precio}")
auto_fiat.EstadoMotor()

print(auto_toyota > auto_fiat)

print(auto_toyota + auto_fiat)
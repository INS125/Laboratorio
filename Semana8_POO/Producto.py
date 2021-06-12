class Producto():
    def __init__(self, nombre_producto, precio):
        self.nombre = nombre_producto
        self.precio = precio
    
    def elemtos(self):
        print(f"Nombre producto {self.nombre}")
        print(f"Precio producto {self.precio}")
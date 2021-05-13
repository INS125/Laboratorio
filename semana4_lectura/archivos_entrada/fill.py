archivo = "entrada_4.in"

import random

with open(archivo, "w") as file_:
  for i in range(0,10):
    largo = random.randint(3,10)
    lista = []
    for i in range(0,largo):
      num = random.randint(0,100)
      lista.append(str(num))
    file_.write(";".join(lista))
    file_.write("\n")

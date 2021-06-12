class Horario():
    def __init__(self, dato, dato2):
        self.dato = dato
        self.dato2 = dato2

class User(object):
    def __init__(self, name, username, horario):
        self.name = name
        self.username = username
        self.horario = horario

import json
#j = json.loads('{"name":"Joaquin","username":"Joako" }')
#u = User(**j)


h = Horario("hola","hola2")
u = User("nico", "luster", h)
print(json.dumps(u.__dict__))
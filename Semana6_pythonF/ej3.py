def ultima_letra(x):
    return x[-1]

upper_letter = lambda x: x.upper()

palabras = ['algun', 'texto', 'en', 'minusculas']

mapeo_palabras = map(upper_letter, palabras)
print(list(mapeo_palabras))


mapeo_primera_letra = map(lambda x: x[0] , palabras)
print(list(mapeo_primera_letra))

mapeo_ultima_letra = map(ultima_letra , palabras)
print(list(mapeo_ultima_letra))
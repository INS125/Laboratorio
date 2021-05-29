upper_letter = lambda x: x.upper()
letter = 'x'
print(upper_letter(letter))


strings = ['a', 'b', 'c', 'd']

for letra in strings:
    print(upper_letter(letra))

upper_letter_arr = lambda lista_letras : [ upper_letter(x) for x in lista_letras]
print(upper_letter_arr(strings))
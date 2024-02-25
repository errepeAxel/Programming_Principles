# OBJETIVO: almacenar los nombres y edades de una colección de personas y regresar el nombre de la persona más joven
# y más grande de la colección

# INPUT DE DE NUMERO DE REGISTROS

num_personas = int(input("Ingrese el numero de personas que serán registradas: "))  # 'num_personas' guarda el número
# de personas de los que se solicitara los datos


# DECLARACIÓN DEL DICCIONARIO

Agenda = {}  # 'Agenda' comienza siendo un diccionario vacío
i = 0  # Inicializamos la variable contadora 'i' en 0
while i < num_personas:  # Mientras 'i' sea menor que 'num_personas'
    nombre = input(f"Nombre de persona {i+1}: ")  # 'nombre' es variable temporal que almacena iterativamente los
    # nombres de las personas
    edad = int(input(f"Edad: "))  # 'edad' es una variable temporal que almacena iterativamente los valores de las
    # edades de las personas
    Agenda[nombre] = edad  # almacenamos el nombre y la edad de la persona en el diccionario 'Agenda'
    i = i+1


# PROCESO PARA CALCULAR LA EDAD Y EL NOMBRE DE LA PERSONA MAS VIEJA

edadMayor = 0  # inicializamos edadMayor en 0
# Necesitamos inicializarla en 0 para que durante la siguiente parte del algoritmo pueda entrar al condicional if

for nombre in Agenda.keys():  # Para cada nombre de cada persona registrada en 'Agenda'
    eM = Agenda[nombre]  # 'eM' toma temporalmente los valores de la edad de la persona
    if eM > edadMayor:  # si la edad de la persona a la que se está evaluando es menor que 'edadMayor'
        edadMayor = eM  # la edad de la persona más vieja será la de la persona evaluada
        nombreMayor = nombre  # el nombre de la persona más vieja será la de la persona evaluada

# PROCESO PARA CALCULAR LA EDAD Y EL NOMBRE DE LA PERSONA MAS JOVEN
edadMenor = 300  # inicializamos edadMenor en 300
# Necesitamos inicializarla en 300 para que durante la siguiente parte del algoritmo pueda entrar al condicional if

for nombre in Agenda.keys():  # Para cada nombre de cada persona registrada en 'Agenda'
    em = Agenda[nombre]  # 'em' toma temporalmente los valores de la edad de la persona
    if em < edadMenor:  # si la edad de la persona a la que se está evaluando es menor que 'edadMenor'
        edadMenor = em  # la edad de la persona más joven será la de la persona evaluada
        nombreMenor = nombre  # el nombre de la persona más vieja será la de la persona evaluada


# OUTPUT
print(f"La persona mas joven es {nombreMenor} con {edadMenor} años.")
print(f"La persona mas vieja es {nombreMayor} con {edadMayor} años.")

print(Agenda.keys())
print(Agenda)


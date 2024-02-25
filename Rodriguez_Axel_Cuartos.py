
# OBJETIVO: buscar habitaciones disponibles en un hotel con r cuartos y n habitaciones ocupadas

# INPUT DE HABITACIONES

r = int(input("Cuantas habitaciones tiene el hotel? "))  # 'r' almacena el número total de habitaciones en el hotel

# CREACION DEL VECTOR HABITACIONES

habitaciones = []  # vector habitaciones contendrá el status de todas las habitaciones. Comienza como una lista vacía
for i in range(0, r):  # 'habitaciones' tendrá un tamaño de r-1 indices, por eso es que r se pone en el tope del rango
    habitaciones.append(
        i + 1)  # Al vector 'habitaciones' se le agrega el numero de la habitación (i+1) reiterativamente

# INPUT DE HABITACIONES OCUPADAS

n = int(input("\nCuantas de estas estan ocupadas? "))  # 'n' almacena el número de habitaciones ocupadas en el hotel
if n >= r:  # Si el numero de habitaciones ocupadas es igual o mayor al número de habitaciones totales del hotel
    print("\nNo hay habitaciones disponibles.")  # Imprimir advertencia

# Input del numero de cada habitación ocupada
else:
    habitaciones_oc = []  # Solo si el número de habitaciones es menor, declaramos el vector 'habitaciones', el cual
    # contendrá el número de todas las habitaciones ocupadas. Comienza siendo una lista vacía
    for i in range(0,
                   n):  # Para cada i en el rango de 0 hasta n-1 (desde la primera hasta la última habitacion ocupada)
        hab_oc = int(
            input("\nIntroduzca el numero de la habitación ocupada: "))  # Input de variable 'hab_oc' almacena los
        # numeros de las habitaciones ocupadas
        habitaciones_oc.append(
            hab_oc)  # Al vector 'habitaciones_oc' se le agrega el numero de la habitación ocupada (hab_oc)


    # COMPARACIÓN ENTRE habitaciones Y habitaciones_oc

    # Se compara cada uno de los valores del vector 'habitaciones'con todos los valores de 'habtaciones_oc'
    print("\nLas habitaciones disponibles son: ")
    for j in range(0, r):  # Para cada j-esimo valor del vector 'habitaciones' (cada una de las habitaciones totales)
        # desde 0 hasta r-1
        ocupado = 0  # Bandera comienza desactivada. Es decir, asumimos que la habitación está desocupada
        for i in range(0, n):  # Para cada i-esimo valor del vector 'habitaciones_oc' (cada una de las habitaciones
            # ocupadas) desde 0 hasta n-1
            if habitaciones_oc[i] == habitaciones[j]:  # Si los valores coinciden quiere deccir que esa habitacion
                # está ocupada
                ocupado = 1  # por ende, la bandera se desactiva

        # OUTPUT

        if ocupado == 0:  # Solo si la bandera está desactivada
            print(habitaciones[j])  # Imprime el j-ésimo valor del vector habitaciones

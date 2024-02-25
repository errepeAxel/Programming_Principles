# OBJETIVO: identificar a los 7 enanos legítimos de Blanca Nieves cuya suma de los números de sus respectivos
# sombreros es 100.

acum = 0  # Valor de la suma de todos los números de los 9 enanos. Se inicializa en 0
enanos = []

# INPUT DEL NUMERO DE CADA ENANO

for i in range(0, 9):  # i va a tomar valores en el rango 0 a 9-1, que serán para introducir los números de los 9 enanos
    num_enano = int(input(f"Ingrese el numero del enano {i+1}: "))  # se almacena el número de cada enano en particular
    acum = acum + num_enano  # Valor de 'num_enano' se acumula en 'acum'
    enanos.append(num_enano)  # Vector 'enanos' almacena cada uno de los números de los nueve enanos a verificar

dif = acum - 100  # diferencia entre el acumulado de la suma de los 9 números de los enanos y 100
# Necesitamos la diferencia entre 'acum' y 100 debido a que esta representa un sobrante. El valor de este respectivo
# sobrante lo utilizaremos para verificar cuales enanos son ilegítimos, pues solo hay una combinación en la que la suma
# de los números de dos enanos es igual a 'dif'


# PROCESO PARA VERIFICAR LA SUMA DE CUALES ENANOS ES IGUAL A 'dif'

# //Vamos a verificar la suma del e-ésimo enano con cada uno de los enanos restantes (con cada i-esimo enano)
for e in range(0, 9):  # Para el e-ésimo enano (que toma los índices del 0 al 9-1 del vector 'enanos')
    for i in range(0, 9):  # Para el i-esimo enano (al que se le compara con el e-esimo enano y que igual toma los
        # del 0 al 9-1 del vector 'enanos')
        if i != e:  # Verificamos que i sea diferente de e, para evitar que se compare a un enano con sí mismo
            suma = enanos[i] + enanos[e]  # 'suma' adquiere el valor del i-esimo enano mas la del e-esimo
            if suma == dif:  # Si la suma es igual al valor de 'dif', quiere decir que encontramos a nuestros enanos
                # impostores, por lo que salimos del primer ciclo for
                break
    if suma == dif:  # Nos aseguramos de también salir del segundo ciclo for
        break


# OUTPUT

# Tras salir de ambos ciclos dor, sabemos que los valores de enanos[i] y enanos[e] son de aquellos ilegítimos
print("\nLos enanos legítimos son aquellos con los números ")
for z in range(0, 9):
    if enanos[z] != enanos[i] and enanos[z] != enanos[e]:  # Solo imprimimos aquellos numeros de los enanos que sean
        # legítimos, es decir, aquellos que no sean enanos[i] ni enanos[e]
        print(enanos[z])

# OBJETIVO: Leer un número desde teclado e imprmirlo sólo si es primo

cont = 2  # Variable contadora que recorrerá los valores desde 2 hasta 'numero'-1
primo = 1  # Bandera para identificar si un número es primo (toma valor de 1) o no (toma el valor de 0)

# INPUT DEL NUMERO A EVALUAR

numero = int(input("Por favor introduzca un numero entero mayor a 1: "))
# Se solicita el número del que se desea evaluar la condición de si es primo y se le guarda en la variable
# 'numero'. Un número primo por definición es aquel número natural (es decir, que solo es positivo y entero) con
# dos divisores integrales. Tiene que ser mayor a 1, debido a que 1 tiene un solo divisor (el mismo 1) y por
# ende, no es primo

modulo = numero % cont  # Variable que guarda el residuo de la division entre  numero y un contador

# PROCESO

if modulo == 0 and numero != 2:  # Si 'modulo' es igual a 0 y 'numero' es distinto de 2 (este es un numero primo
    # especial)
    primo = 0  # Se desactiva la bandera 'primo'
else:
    if numero == 1:  # Verificamos si el numero ingresado fue 1
        primo = 0  # Si es asi, desactivamos la bandera
    while modulo != 0 and cont != numero - 1:  # mientras 'modulo' sea distinto de 0 y cont sea un numero de entre
        # 2 (valor inicial de cont) y 'numero'-1, se entra en el ciclo
        cont = cont + 1  # Se le suma 1 a 'cont'.
        modulo = numero % cont  # Cada que aumente 'cont' se volvera a verificar si  el residuo de 'numero'/'cont'
        # es distinto de 0
        if modulo == 0:
            primo = 0  # Si modulo es igual a 0 cuando la variable cont toma valores en el intervalo [2, 3,..., a-1],
            # significa que no es primo.
            break  # Cuando se decte que un numero no es primo, se sale del ciclo

# IMPRESIÓN A PANTALLA

if primo == 1:  # Si la bandera sigue activada
    print(f"El numero {numero} es primo.")
else:  # Si esta descativada
    print(f"El numero {numero} no es primo.")


# OBJETIVO: Calcular cuántos megabytes le quedan disponibles a un usuario después de N meses
# haber gastado Pi megabytes cada i-ésimo mes.

# INPUT

X = int(input("Introduzca cuantos megabytes por mes le ofrece su plan: "))  # 'X' almacena el numero de megabytes por
# mes que ofrece el plan
N = int(input("\nIntroduzca cuantos meses lo ha utilizado hasta la fecha: "))  # 'N' almacena el numero de meses
# que ha usado el plan


# PROCESO

disponibles = 0  # Var. acumuladora que guarda número de megabytes disponibles en el i-ésimo mes
for i in range(1, N+1):  # Para cada 'i' en el rango de 1 hasta N (desde el mes 1 hasta el último mes)
    Pi = int(input(f"\nCuántos megabytes gasto en el mes {i}? "))  # Número de megabytes gastados en cada uno de los N
    # meses
    sobrantes = X-Pi  # numero de megabytes sobrantes en el i-ésimo mes
    disponibles = disponibles + sobrantes  # acumulado de megabytes disponibles  para el mes i
    print(f"Al final del mes {i} te quedaban disponibles {disponibles} megabytes.")


# OUTPUT

print(f"\nPara el mes {N+1} te quedan {X+disponibles} megabytes.")  # Se le suma 'X' porque son los megabytes
# disponibles tras el último mes (N) más los del mes siguiente (el mes N+1)

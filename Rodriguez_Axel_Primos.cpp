// Programa que lee un numero desde teclado y lo imprime solo si es primo.

#include<iostream>  /* libreria (archivo de cabecera) iostream contiene codigo que permite a un programa C++ mostrar 
la salida en la pantalla y leer la entrada del teclado */

using namespace std;  // Utilizamos el espacio de trabajo estandar 

int main(){  // Funcion principal con la que empieza el programa 
	
	// DECLARACION DE VARIABLES
	int numero;  // Variable que almacena el numero del que se evalua la condicion de si es primo o no
	int modulo;  // Variable que guarda el residuo de la division entre 'numero' y un contador 
	int cont;  // Variable contadora que recorre los valores desde 2 hasta 'numero' - 1
	int primo;  // Bandera para identificar si un numero es primo (toma valor de 1) o no (toma el valor de 0)
	cont = 2;  // Variable contadora comienza desde 2
	primo = 1;  // Bandera comienza encendida
	
	// INPUT DEL NUMERO A EVALUAR
	cout<<"Por favor introduzca un numero entero mayor a 1: "; cin>>numero;  /* Se solicita el numero del que se desea evaluar 
	la condicion de si es primo y se le guarda en la variable 'numero'. Un numero primo por definicion es aquel numero natural 
	(es decir, que solo es positivo y entero) con dos divisores integrales. Tiene que ser mayor a 1, debido a que como 1 tiene un solo divisor
	(el mismo 1), por ende no es primo */															
	modulo = numero % cont; // inicializamos 'modulo'
	
	// PROCESO
	if(modulo == 0 && numero != 2){  // Si 'modulo' es igual a 0 y 'numero' es distinto de 2 (este es un numero primo especial)
		primo = 0;  // Se desactiva la bandera 'primo'
	}
	else{
		if (numero == 1){  // Verificamos si el numero ingresado fue 1
			primo = 0;  // Si es asi, desactivamos la bandera
		}
		while(modulo != 0 && cont != numero-1){  /* mientras 'modulo' sea distinto de 0 y 'cont' 
		sea un numero de entre 2 (valor inicial de cont) y ''numero' -1, se entra en el ciclo*/
			cont = cont + 1;  // Se le suma 1 a 'cont' 
			modulo = numero % cont;  // Cada que aumente 'cont' se volvera a verificar si el residuo de 'numero'/'cont' es distinto de 0
			if(modulo == 0){
				primo = 0;  /* Si modulo es igual a 0 cuando la variable 'cont' toma 
				valores en el intervalo [2, 3,..., a-1], significa que no es primo */
				break;  // Cuando se decte que un numero no es primo, se sale del ciclo
			}
		}
	}
	
	// IMPRESION A PANTALLA
	if(primo == 1){  // Si la bandera sigue activada
		cout<<"El numero " <<numero<<" es un numero primo.";
	}
	else{  // Si esta descativada 
		cout<<"El numero " <<numero<<" no es un numero primo.";
	}
	
	return 0;
}

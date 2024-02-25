// Programa que busca habitaciones disponibles en un hotel con r cuartos y n habitaciones ocupadas

#include<iostream>  /* libreria (archivo de cabecera) iostream contiene código que permite a un programa C++ mostrar 
la salida en la pantalla y leer la entrada del teclado */

using namespace std;  //Utilizamos el espacio de trabajo estandar 

int main(){ //Funcion principal con la que empieza el programa 
	
	//DECLARACION DE VARIABLES 
	int r; //Numero total de habitaciones en el hotel 
	int n; //Numero de habitaciones ocupadas en el hotel 
	int i; //variable contadora
	int hab_oc; //variable que almacena los numeros de las habitaciones ocupadas 
	int j; //variable contadora 
	int ocupado; //Bandera que indica si una habitacion esta ocupada (valor en 1) o no (valor en 0)
	
	//INPUT DE HABITACIONES 
	cout<<"Cuantas habitaciones tiene el hotel? "; cin>>r; //Input de r 
	
	//CREACION DEL VECTOR HABITACIONES
	int habitaciones[r]; //vector habitaciones, de tamaño r, el cual contendra el status de todas las habitaciones 
	for(i=0; i<r; i++){ /*Para i=0 (la primera habitacion) hasta el ultimo valor de i en el que i<r sea verdadero (la ultima habitacion del hotel),
	sumarle 1 y guardar ese valor*/
		habitaciones[i] = i+1; //vector habitaciones ira almacenando el numero de cada habitacion (i+1) en su indice correspondinte (i)
	}
	
	//INPUT DE HABITACIONES OCUPADAS
	cout<<"\nCuantas de estas estan ocupadas? "; cin>>n; //Input de n
	if(n >= r){ //Si el numero de habitaciones ocupadas es igual o mayor al numero de habitaciones totales del hotel
		cout<<"\nNo hay habitaciones disponibles. "; //Imprimir advertencia 
	}
	else{
		//Input del numero de cada habitacion ocupada
		int habitaciones_oc[n]; /*Solo si el numero de habitaciones es menor, declaramos el vector 'habitaciones', el cual contendra el numero de todas las 
		habitaciones ocupadas*/
		for(i=0; i<n; i++){ /*Para i=0 (el primer indice del vector habitaciones_oc) hasta el ultimo valor de i en el que i<n sea verdadero (el 
		ultimo vector de habitaciones_oc), sumarle 1 y guardar ese valor*/
			cout<<"\nIntroduzca el numero de la habitacion ocupada: "; cin>>hab_oc; //Input de habitaciones_oc
			habitaciones_oc[i] = hab_oc; //Se guarda el numero de la i-esima habitacion ocupada en el vector habitaciones_oc 
		}
		
		//COMPARACION ENTRE habitaciones Y habitaciones_oc
		//Se compara cada uno de los valores del vector habitaciones con todos los valores de habtaciones_oc
		cout<<"\nLas habitaciones disponibles son: "<<endl;
		for(j=0; j<r;j++){ //Para cada j-esimo valor del vector habitaciones (cada una de las habitaciones totales)
			ocupado = 0; //Bandera comienza desactivada. Es decir, asumimos que la habitacion esta desocupada
			for(i=0; i<n; i++){ //Para cada i-esimo valor del vector habitaciones_oc (cada una de las habitaciones ocupadas) 
				if(habitaciones_oc[i] == habitaciones[j]){ //Si los valores coinciden quiere deccir que esa habitacion esta ocupada
					ocupado = 1; // la bandera se desactiva
				}
			}
			//OUTPUT
			if(ocupado == 0){ //Solo si la bandera esta desactivada 
				cout<<habitaciones[j]<<endl; //Imprime el j-essimo valor del vector habitaciones
			}
		}
	}	
	return 0;
}


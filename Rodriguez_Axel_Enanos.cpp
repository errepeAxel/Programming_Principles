// Programa que identifica a los 7 enanos legitimos de Blanca Nieves cuya suma de los numeros de sus respectivos sombreros es 100

#include<iostream> /*libreria (archivo de cabecera) iostream contiene código que permite a un programa C++ mostrar 
la salida en la pantalla y leer la entrada del teclado.*/

using namespace std; //Utilizamos el espacio de trabajo estandar 

int main(){  // Funcion principal con la que empieza el programa 

	// DECLARACION DE VARIBALES 
	int enanos[9];  // Vector 'enanos' almacena los numeros de los 9 enanos
	int num_enano;  // Almacena el numero de cada enano en particular
	int acum=0;  // 'acum' almacena el valor de la suma de todos los numeros de los 9 enanos. Se inicializa en 0
	int suma;  // 'suma' es una variable temporal de la suma de valors especificos del vector 'enanos'
	int dif;  // diferencia entre el acumulado de la suma de los 9 numeros de los enanos y 100
	int i, e, z;  // Todas son variables contadoras
	
	// INPUT DEL NUMERO DE CADA ENANO
	for(i=0; i<9;i++){  // i va a tomar valores en el rango 0 a 9-1, que seran para introducir los numeros de los 9 enanos en el vector 'enanos'
		cout<<"Ingrese el numero del enano "<<i+1<<": "; cin>>num_enano;  // Input de 'num_enano'
		acum = acum + num_enano;  // valor de num_enano se acumula en 'acum'
		enanos[i] = num_enano;  // Vector 'enanos' almacena cada uno de los numeros de los nueve enanos a verificar
	}
	
	dif = acum - 100;
	/*Necesitamos la diferencia entre 'acum' y 100 debido a que esta representa un sobrante. El valor de respectivo este sobrante 
	lo utilizamos para verificar cuales enanos son ilegitimos, pues solo hay una combinacion en la que la suma de los numeros de dos enanos 
	es igual a 'dif'*/
	
	// PROCESO PARA VERIFICAR LA SUMA DE CUALES ENANOS ES IGUAL A 'dif'
	// Vamos a verificar la suma del e-esimo enano con cada uno de los enanos restantes (con cada i-esimo enano)
	for(e=0; e<9; e++){  /* Para e=0 (el e-esimo enano) hasta el ultimo valor de e en el que e<9 sea verdadero (el ultimo enano con el que 
	se le compara), sumarle 1 y guardar ese valor */
		for(i=0; i<9; i++){  /* Para i=0 (el i-esimo enano, el enano a comparar con el e-simo enano) hasta el ultimo valor de i en el que 
		i<9 sea verdadero (el ultimo enano con el que se le va a comparar al e-esimo enano), sumarle 1 y guardar ese valor */
			if(i != e){  // Verificamos que i sea diferente de e, para evitar que se compare a un enano con si mismo
				suma = enanos[i] + enanos[e];  // 'suma' adquiere el valor del i-esimo enano mas la del e-esimo
				if(suma == dif){  /* Si la suma es igual a el valor de 'dif', quiere decir que encontramos a nuestros enanos impostores, 
				por lo que salimos del primer ciclo for */
					break;
				}
			}
		}
		if(suma == dif){  // Nos aseguramos de tambien salir del segundo ciclo for
			break;
		}
	}
	
	// OUTPUT
	// Tras salir de ambos ciclos dor, sabemos que los valores de enanos[i] y enanos[e] son de aquellos ilegitimos
	cout<<"\nLos enanos legitimos son aquellos con los numeros "<<endl;
	for(z=0; z<9; z++){
		if(enanos[z] != enanos[i] && enanos[z] != enanos[e]){ /* Solo imprimimos aquellos numeros de los enanos que sean legitimos, es decir, 
		aquellos que no sean enanos[i] ni enanos[e] */
			cout<<enanos[z]<<endl;
		}
	}
	
	return 0;
}

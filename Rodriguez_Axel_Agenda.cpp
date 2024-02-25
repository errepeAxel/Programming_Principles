// Programa que almacena los nombres y edades de una colección de personas y regresa el nombre de la persona más joven y más grande de la colección

#include<iostream>  /* libreria (archivo de cabecera) iostream contiene código que permite a un programa C++ mostrar 
la salida en la pantalla y leer la entrada del teclado */
#include<map>  // Libreria necesaria para utilizar mapas
#include<string>  // Libreria necesaria para utilizar strings

using namespace std;  //Utilizamos el espacio de trabajo estandar 


int main(){  //Funcion principal con la que empieza el programa 
	
	//DECLARACION DE VARIBLES
	int num_personas;  //Numero de personas de los que se solicitara los datos 
	int i=0;  // 'i' es una variable contadora. La inicializamos en 0
	string nombre;  // variable temporal que almacena iterativamente los nombres de las personas
	int edad;  // variable temporal que almacena iterativamente los valores de las edades de las personas
	int eM, em;  // variables que almacenan temporalmente el valor de las edades de cada una de las personas
	int edadMayor, edadMenor;  // almacenan la edad de la persona mas vieja y mas joven, respectivamente
	string nombreMayor, nombreMenor;  // variables que contienen el nombre de la persona mas vieja y mas joven, respectivamente
	
	// DECLARACION DEL MAPA 'Agenda'
	map<string,int> Agenda;
	
	// INPUT DE DATOS
	cout<<"Ingrese el numero de personas que seran registradas: ";cin>>num_personas;  // Input de cuantas personas registraremos
	while(i<num_personas){  // mientras i sea menor que num_personas
		cout<<"Nombre de persona "<<i+1<< ": "; cin>>nombre;  // almacenamos temporalmente el nombre de la persona 'i'
		cout<<"Edad: "; cin>>edad;  // almacenamos temporalmente la edad de la persona 'i'
		Agenda.insert(pair<string, int>(nombre, edad));  // almacenamos el nombre y la edad de la persona en el mapa 'Agenda'
		i++;
	}
	
	// PROCESO PARA CALCULAR LA EDAD Y NOMBRE DE LA PERSONA MAS VIEJA
	edadMayor = 0;  // inicializamos edadMayor en 0
	// Necesitamos inicializarla en 0 para que durante la siguiente parte del algoritmo pueda entrar al condicional if
	
	for(auto pair: Agenda){  // Para cada par clave-valor en el mapa "Agenda"
	// Nota: 'auto' se utiliza debido a que el iterador de este ciclo for no es un nuero entero, sino otro tipo de dato
		eM = pair.second;  // 'eM' toma temporalmente los valores de la edad de cada persona en el mapa 'Agenda'
		if(eM > edadMayor){  // si la edad de la persona a la que se esta evaluando es menor que 'edadMayor'
			edadMayor = eM;  // la edad de la persona mas vieja sera la de la persona evaluada 
			nombreMayor = pair.first;  // el nombre de la persona mas vieja sera la de la persona evaluada
		}
	}
	
	// PROCESO PARA CALCULAR LA EDAD Y NOMBRE DE LA PERSONA MAS JOVEN
	edadMenor = 300; // inicializamos edadMenor en 300 
	// Necesitamos inicializarla en 300 para que durante la siguiente parte del algoritmo pueda entrar al condicional if
	
	for(auto pair: Agenda){  // Para cada par clave-valor en el mapa "Agenda"
	// Nota: 'auto' se utiliza debido a que el iterador de este ciclo for no es un nuero entero, sino otro tipo de dato
		em = pair.second;  // 'em' toma temporalmente los valores de la edad de cada persona en el mapa 'Agenda'
		if(em < edadMenor){  // si la edad de la persona a la que se esta evaluando es menor que 'edadMenor'
			edadMenor = em;  // la edad de la persona mas joven sera la de la persona evaluada 
			nombreMenor = pair.first;  // el nombre de la persona mas joven sera la de la persona evaluada
		}
	}
	
	// OUTPUT
	cout<<"\nLa persona mas joven es "<<nombreMenor<<" con "<<edadMenor<<" anios."<<endl;
	cout<<"La persona mas vieja es "<<nombreMayor<<" con "<<edadMayor<<" anios."<<endl;
	
	return 0;
}

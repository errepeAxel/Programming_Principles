// Programa que calcula cuantos megabytes te quedan disponibles despues de N meses 

#include<iostream>  /* libreria (archivo de cabecera) iostream contiene código que permite a un programa C++ mostrar 
la salida en la pantalla y leer la entrada del teclado */

using namespace std;  // Utilizamos el espacio de trabajo estandar 

int main(){  // Funcion principal con la que empieza el programa 
	
	// DECLARACION
	int X;  // Numero de megabytes por mes que ofrece el plan
	int N;  // Numero de meses que lo ha usado
	int Pi;  // Numero de megabytes gastados en cada uno de los N meses 
	int i;  // contador para cada uno de los meses desde 1 hasta N+1
	int sobrantes;  // numero de megabytes sobrantes en el i-esimo mes 
	int disponibles = 0;  // var. acumuladora que guarda numero de megabytes disponibles en el i-esimo mes 
	
	// INPUT
	cout<<"Introduzca cuantos megabytes por mes le ofrece su plan: "; cin>>X;  // Input de variable 'X'
	cout<<"\nIntroduzca cuantos meses lo ha utilizado hasta la fecha: "; cin>>N;  // Input de variable 'N'
	
	// PROCESO
	for(i=1; i<N+1; i=i+1){  /* Para i=1 (desde el mes 1) hasta el ultimo valor de i en el que i<N+1 sea verdadero (el ultimo mes),
	sumarle 1 y guardar ese valor */
		cout<<"\nCuantos megabytes gasto en el mes "<<i<<"? "; cin>>Pi;  // Input de gasto de megabytes en el mes i
		sobrantes = X - Pi;  // numero de megabytes sobrantes en el iesimo mes 
		disponibles = disponibles + sobrantes;  // acumulado de megabytes disponibles para el mes i
		cout<<"Al final del mes "<<i<<" te quedaban disponibles "<<disponibles<<" megabytes.\n";
	}
	
	// OUTPUT
	cout<<"\nPara el mes " <<i<<" te quedan "<<X+disponibles<<" megabytes disponibles.";  /*Se le suma 'X' porque son los
	megabytes disponibles tras el ultimo mes mas los del mes siguiente (el mes i) */
	return 0;
}

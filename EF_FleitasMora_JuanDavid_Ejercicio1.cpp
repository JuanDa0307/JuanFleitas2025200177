#include <iostream>
using namespace std;
int main ()
{
	int dias; //Declaracion de variable
	cout<<"Ingrese un numero del 1 al 7: "<<endl;//Imprimir 
	cin>>dias;//Lee el dato ingresado
	
	switch (dias)
	{
		case 1: //Si elige la opcion 1 imprime que el dia es lunes 
			cout<<"El dia de la semana es Lunes";
		break;
		case 2://Si elige la opcion 1 imprime que el dia es Martes
			cout<<"El dia de la semana es Martes";
		break;
		case 3://Si elige la opcion 1 imprime que el dia es Mercoles
			cout<<"El dia de la semana es Miercoles";
		break;
		case 4://Si elige la opcion 1 imprime que el dia es Jueves
			cout<<"El dia de la semana es Jueves";
		break;
		case 5://Si elige la opcion 1 imprime que el dia es Viernes
			cout<<"El dia de la semana es Viernes";
		break;
		case 6://Si elige la opcion 1 imprime que el dia es Sabado
			cout<<"El dia de la semana es Sabado";
		break;
		case 7://Si elige la opcion 1 imprime que el dia es Domingo
			cout<<"El dia de la semana es Domingo";
		break;
		default://Mensaje de error si el usuario ingresa un numero fuera del rango (1-7)
			cout<<"ERROR!! Debe ingresar un numero del 1 al 7.";
	}
	return 0;
}

#include <iostream>
using namespace std;
int main ()
{
	int opcion = 0; //Declaracion de variables.
	float numero1 = 0, numero2 = 0, resultado = 0;	//Declaracion de variables.
	
	cout<<"MENU DE OPERACIONES"<<endl;
	cout<<"1- Suma"<<endl;
	cout<<"2- Resta"<<endl;				//Menu de las operaciones Matematicas.
	cout<<"3- Multiplicacion"<<endl;
	cout<<"4- Division"<<endl;
	
	cout<<"Por favor elija una opcion (1-4): "<<endl;
	cin>>opcion;
	
	if (opcion >= 1 && opcion <= 4)
	{
		cout<<"Ingrese el primer numero (0-100): "<<endl; //Ingresar el primer numero. 
		cin>>numero1;
		if (numero1 < 0 || numero1 > 100)  //Validacion de que sea mayor a cero y menor a cien.
		{
			cout<<"ERROR!! Debe ingresar un numero entre 0 y 100.";   
		}
		else
		{
			cout<<"ingrese el segundo numero (0-100): "<<endl;
			cin>>numero2;
			if (numero2 < 0 || numero2 > 100)  //Validacion de que sea mayor a cero y menor a cien. 
			{
				cout<<"ERROR!! Debe ingresar un numero entre 0 y 100.";
			}
			else
			{
				switch (opcion)
				{
					case 1:		//Si elige la opcion 1 realiza la operacion de suma.
						resultado = numero1 + numero2;
						cout<<"El resultado de la suma es: "<<resultado<<endl;
					break;
					case 2:		//Si elige la opcion 2 realiza la operacion de resta.
						resultado = numero1 - numero2;
						cout<<"El resultado de la resta es: "<<resultado<<endl;
					break;
					case 3:		//Si elige la opcion 3 realiza la operacion de multiplicacion.
						resultado = numero1 * numero2;
						cout<<"El resultado de la multiplicacion es: "<<resultado<<endl;
					break;
					case 4:
						if (numero2 !=0)	//Validacion de que el segundo numero ingresado no sea cero.
						{
							resultado = numero1 / numero2; //Si elige la opcion 4 realiza la operacion de division. 
							cout<<"El resultado de la division es: "<<resultado<<endl;	
						}
						else 
						{
							cout<<"ERROR!! No se puede dividir con cero. ";	
						}
					break;
				}
			}
		}
	}
	else 
	{
		cout<<"ERROR!! Debe ingresar un numero entre 1 y 4."<<endl;	
	}
	return 0;
}	
	




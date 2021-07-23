#include <iostream>
#include <stdlib.h>

#include <malloc.h>
#include <fstream>

using namespace std;
#include "Fcolaboradores.h" // EN ESTE ARCHIVO VAN LAS FUNCIONES

//FUCION PRINCIPAL
int main()
{

	string nombres;
	
	Persona lisa;


	int op, flag;

	do
	{

		system("cls");
		cout << "BIENVENIDA/O A ESTE PROGRAMA " << endl
			 << endl;
		cout << "1.- Ingresar y mostrar los datos personales \n";
		cout << "2.- Mostrar la edad de la persona \n";
		cout << "3.- Mostrar el indice corporal \n";
		cout << "4.- Guardar los datos en un archivo .txt \n";
		cout << "5.- Recuperar los datos desde el archivo .txt y mostrarlos por pantalla \n";
		cout << "0.- Salir del menu \n";
		cout << " Ingrese una opciÃ³n : ";
		cin >> op;
		switch (op)
		{
		case 1:
			cout << "ESTA FUNCION PERMITE INGRESAR LOS DATOS PERSONALES \n";
			lisa.ingresar_datos();

			break;
		case 2:
			cout << "ESTA FUNCION PERMITE MOSTRAR LA EDAD DE LA PERSONA \n";

			int dia, mes, ano;
			cout << "\n\nIngrese la dia actual: ";
			cin >> dia;
			cout << "\n\nIngrese el mes actual: ";
			cin >> mes;
			cout << "\nIngrese el año actual: ";
			cin >> ano;

			lisa.calcular_edad(dia, mes, ano);

			break;
		case 3:
			cout << "ESTA FUNCION PERMITE MOSTRAR EL INDICE CORPORAL DE LA PERSONA \n";
			lisa.indice_corporal();

			break;
		case 4:
			cout << "ESTA FUNCION PERMITE GUARDAR LOS DATOS EN UN ARCHIVO .TXT \n";
			lisa.guardar();
			break;
		case 5:
			cout << "ESTA FUNCION PERMITE RECUPERAR LOS DATOS DEL ARCHIVO .TXT Y MOSTRARLOS POR PANTALLA\n";
			lisa.recuperados();
			break;
		}
		if (op != 0)
		{
			cout << "Opcion no permitida !\n"
				 << "Press Enter to continue\n";
			// pause the program until user input
			flag = cin.ignore().get();
		}
		if (op == 0)
		{
			cout << "Salimos del Sistema: " << endl;
		}
	} while (op != 0);
	system("pause");
	return (0);
}

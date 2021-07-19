#include<string.h>
class Persona
{
private:
	string nombre;
	string cedula;
	float peso;
	float estatura;
	//Fecha de nacimiento
	int dia; //dia
	int mes; //mes
	int ano; //Año

public:
	int resultado_dia, resultado_mes, resultado_edad;
	Persona()
	{
	}


	Persona(string _cedula, string _nombre, float _peso, float _estatura, int _dia, int _mes, int _ano)
	{
	 	//Mina Preciado Jenniffer 
		cedula = _cedula;
		nombre = _nombre;
		peso = _peso;
		estatura = _estatura;
		dia = _dia;
		mes = _mes;
		ano = _ano;
		
	}


	void ingresar_datos()
	{
		//Posso Becerra Rosa Antonella
                //Ingreso de los datos personales


		cout << "\n\nIngrese la nombre: ";
	        cin>>nombre;
	
		cout << "\n\nIngrese la cedula de identidad: ";
		cin >> cedula;
		cout << "\nIngrese el peso en kg: ";
		cin >> peso;
		cout << "\nIngrese la estatura en m: ";
		cin >> estatura;

		cout << "\nIngresa la fecha de nacimiento";
		cout << "\n dia : ";
		cin >> dia;
		cout << "\n mes : ";
		cin >> mes;
		cout << "\n año : ";
		cin >> ano;
                //Se presenta por pantalla los datos ingresados

		cout << "\n\nLos datos personales de la persona son: \n\n";
		cout << "Nombre: " << nombre << endl;
		cout << "Cedula de identidad: " << cedula << endl;
		cout << "Fecha de nacimiento: "
			 << " " << dia << "-" << mes << "-" << ano << endl;
		cout << "Peso(kg): " << peso << endl;
		cout << "Estatura(m): " << estatura << endl;
	
	}


	void calcular_edad(int dia_actual, int mes_actual, int ano_actual)
	{
	        //Posso Becerra Rosa Antonella

		if (dia_actual < dia)
		{
			dia_actual = dia_actual + 30;
			mes_actual = mes_actual - 1;
			resultado_dia = dia_actual - dia;
		}
		else  {
			resultado_dia = dia_actual-dia;
		}
		if (mes_actual < mes)
		{
			mes_actual = mes_actual + 12;
			ano_actual = ano_actual - 1;
			resultado_mes = mes_actual - mes;
		}
		else {
			resultado_mes = mes_actual-mes;
		}
		resultado_edad = ano_actual - ano;

		cout << "\nUsted tiene:";

		cout << resultado_edad<<"  años ,  ";
		cout << resultado_dia<<"  dias  y ";
		cout << resultado_mes<<" meses .";
		cout << "\n";
	
	}

	void indice_corporal()
	{

		//Zambrano Zambrano 
		//Arely 
		float i = peso / (estatura * estatura);

		cout << "\nTu indice de mas corporal es:" << i << endl;

		if (i < 20)
		{

			cout << endl
				 << nombre<< " tienes un Indice de Masa Corporal por debajo de lo normal (bajo peso). Te recomiendo que te alimentes mejor, tomes mas vitaminas e ingieras  comidas mas saludables y llenas de proteina.\n";
		}

		if (i <= 20 && i >= 25)
		{

			cout << "\nFelicidades " << nombre << " usted tiene un Indice de Masa Corporal adecuado para su  peso y estatura.\n";
		}

		if (i <= 25 && i >= 30)
		{

			cout << endl
				 << nombre << " tienes un Indice de Masa Corporal por encima de lo normal (sobrepeso). Te recomiendo que comas una dieta mas saludable, ingieras menos azucares, tomes mas agua y hagas una actividad fisica frecuente (30 min al dia).\n";
		}

		if (i > 35)
		{

			cout << endl
				 << nombre << " tienes obesidad morbida,te recomiendo que tengas una dieta mas saludable, ingieras menos azucares, tomes mas agua y hagas una actividad fisica frecuente (30 min al dia).\n";
		}
	
	
	}
	void guardar()
	{
			//Palacios Andrea
			 
	}
	//jenniffer Katherine Mina 
	//..................
	void recuperados()
	{
	        ifstream archivo;
 	        string texto;
 	        archivo.open("persona.txt",ios::in);
 	        if(archivo.fail()){
 		cout<<"No se abre";
 		exit(1);
 		
	 }
	 while(!archivo.eof()){
	 	getline(archivo,texto);
	 	cout<<texto<<endl;
	 	
	 }
	 archivo.close();
	}
};

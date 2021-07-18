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
		//Posso becerra Rosa 
	}

	void calcular_edad(int dia_actual, int mes_actual, int ano_actual)
	{
		//Posso becerra Rosa 
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

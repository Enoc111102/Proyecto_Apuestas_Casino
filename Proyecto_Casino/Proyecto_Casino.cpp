#include <string>
#include <iostream>
#include <cstdlib>
#include <time.h>
#define RED "\x1b[31m"
#define GREEN "\x1b[32m"
#define BLUE "\x1b[34m"
using namespace std;

int main()
{
	//Ingresamos las variables necesarias
	string nombre;
	//Usamos una variable de saldo inicial y otra de saldo modificable para mantener el saldo inicial fijo en caso de ser necesario
	float saldoInicial, saldoAct;
	int seguirApost, cantApost, aleatorio;
	srand(time(NULL));

	cout << BLUE << "Casino del Bachi 8 ;)" << endl;
	cout << "Por favor introduce tu nombre: ";
	cin >> nombre;
	cout << endl;
	cout << GREEN << "Bienvenido " << nombre << " al casino del Bachi 8 ;)" << endl;
	cout << "Por favor introduce tu saldo " << nombre << ": ";
	cin >> saldoInicial;
	cout << endl;
	saldoAct = saldoInicial;

	do
	{
		cout << GREEN << "Cuanto deseas apostar " << nombre << " ? ";
		cin >> cantApost;
		if (saldoAct > cantApost)
		{
			aleatorio = 1 + rand() % (3 - 1);
			if (aleatorio > 1)
			{//gano
				saldoAct = saldoAct + cantApost;
				cout << GREEN << "Felicidades " << nombre << " has ganado " << cantApost << " tu saldo actual es de " << saldoAct << endl;
				cout << BLUE << "Deseas seguir apostando:(1=si/2=no)";
				cin >> seguirApost;
				cout << endl << endl;
			}
			else
			{//perdio
				saldoAct = saldoAct - cantApost;
				cout << RED << "Lo siento " << nombre << " has perdido tu apuesta :( tu saldo actual es de " << saldoAct << endl;
				cout << BLUE << "Deseas seguir apostando:(1=si/2=no)";
				cin >> seguirApost;
				cout << endl << endl;
			}
			//Apuesta
		}
		else
		{
			cout << RED << "Saldo insuficiente" << endl ;
			cout << "Gracias por participar en el casino :)" << endl << endl;
			seguirApost = 1;
			break;
			
		}


	} while (seguirApost == 1);
	{

	}
	return 0;
}


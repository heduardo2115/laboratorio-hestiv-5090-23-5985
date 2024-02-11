#include <iostream>
#include <cmath>
using namespace std;

	double matematica(double n1, double n2, int s)
	{
	switch(s)
	{
		case 1:
			return n1+n2;
			
		case 2:
			return n1-n2;
			
		case 3:
			return n1*n2;
	
		case 4:
			if (n2 != 0)
			{
				return n1/n2;
			}
			else 
			{
				cout << "error! division por cero \n"<< endl;
				return 0;
			}
		case 5:
			if (n2 != 0)
			{
				return fmod(n1, n2);
			}
			else 
			{
				cout << "error! division por cero \n"<< endl;
				return 0;
			}
			
		case 6:
			if (s>5)
			{
			cout << "la opcion seleccionada no existe :( \n";	
			}			
	}
	}
	
	void impresultado(double resultado)
	{
		cout << " el resultado es: " << resultado << endl;
	}
	
	int main()
	{
		int cop;
		cout << "opciones:  \n";
		cout << "1.suma  \n";
		cout << "2.resta  \n";
		cout << "3.multiplicacion  \n";
		cout << "4.division  \n";
		cout << "5.resto de una division  \n";
		cout << "por favor, ingrese la cantidad de operaciones a realizar: \n";
		cin >> cop;
		for (int i = 0; i < cop; i++)
		{
			double n1, n2;
			int s;
			cout << "ingrese el primer numero:  \n";
			cin >> n1;
			
			cout<< "ingrese el segundo numero: \n";
			cin >> n2;
			
			cout << "ingrese la opcion: \n";
			cin >> s;
			
			
			double resultado = matematica(n1, n2, s);
			impresultado(resultado);
		}
		return 0;
	}
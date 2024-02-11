#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;
int main ()
{
	int n;
	cout << " |----------------lista de opciones------------|\n";
	cout << " |1. suma, resta, multiplicacion y division    |\n";
	cout << " |2. verificar si un numero es primo           |\n";   
	cout << " |3. verificar si un año es bisiesto           |\n"; 
	cout << " |4. potencia                                  |\n";
	cout << " |---------------------------------------------|\n";
	cout << " seleccione: \n";
	cin  >> n;

switch (n)
{
	
case 1:
float s, r, m, d, uno, dos;

cout <<"ingrese el primero numero: \n";
cin >> uno;

cout << "ingrese el segundo numero: \n";
cin >> dos;

s = uno + dos;
r = uno - dos;
m = uno * dos;
d = uno / dos;

cout << "el resultado de los numeros sumados es: \n" << "\n" << s << endl;
cout << "el resultado de los numeros restados es: \n" << "\n" << r << endl;
cout << "el resultado de los numeros mutiplicados es: \n" << "\n" << m << endl;
cout << "el resultado de los numeros divididos es: \n" << "\n" << d << endl;

return main ();
break;



case 2:	
int num;
cout << " ingrese su numero a verificar si es primo: \n ";
cin >> num;
if (num % 2 == 0)
{
	cout << " el numero es primo: 1  \n";              
}
else
{
	cout << " el numero no es primo: 0 \n";
}
return main();
break;


case 3: //programa que verifica si un año es bisiesto
int a,b;
cout << " ingrese su año a verificar si es bisiesto: \n";
cin >> a;
if (a % 400 == 0)
{
	b = 1;
}
else
{
	if (a % 100 == 0)
	{
		b = 0;
	}
	else 
	{
		if(a % 4 == 0)
		{
			b = 1;
		}
		else
		{
			b = 0;
		}
	}
	if (b == 1)
	{
		cout << " el año es bisiesto \n";
	}
	else
	{ 
	    cout << " el año no es bisiesto \n";
	}
}
return main();
break;


	
case 4:
double calcularPotencia, base, resultado;
int exponente;
// Solicitar al usuario ingresar la base y el exponente
    cout << "Ingrese la base: ";
    cin >> base;

    cout << "Ingrese el exponente: ";
    cin >> exponente;

    // Manejar caso cuando el exponente es cero
    if (exponente == 0) 
	{
        return 1.0;
    }
    // Manejar caso cuando el exponente es negativo
    else if (exponente < 0) 
	{
        return 1.0 / pow(base, -exponente);
    }
    // Caso general
    else 
	{
        return pow(base, exponente);
    }
    // Calcular la potencia y mostrar el resultado
    resultado = calcularPotencia*base*exponente;
    cout << "el resultado es : " << resultado;
    return main();
break;	
}
}
	



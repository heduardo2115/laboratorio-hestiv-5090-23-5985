#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;
int main ()
{
	int n;
	bool y;
	cout << " |----------------lista de opciones------------|\n";
	cout << " |1. verificar si un numero es primo           |\n";         
	cout << " |2. verificar si un año es bisiesto           |\n";
	cout << " |3. verificar si 2 numeros son iguales        |\n";
	cout << " |4. verificar si es mayor de edad             |\n";
	cout << " |5. verificar si el examen es aprobado        |\n";
	cout << " |6. suma, resta, multiplicacion y division    |\n";
	cout << " |7. potencia                                  |\n";
	cout << " |---------------------------------------------|\n";
	cout << " seleccione: \n";
	cin  >> n;
switch(n) //bucle switch, manejado por la variable "n"
{
	
case 1:	//programa que verifica si un numero es primo
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
return main();	// esta funcion sirve como un bucle para cuando el programa termine se vuelva a desplegar el menu, para que el usuario pueda seleccionar otra opcion
break;
//se ingresa el numero el cual es almacenado por la variable "num", luego "num" pasa a ser divida el cual su resto si es 0 se determina que es par si no lo es, es impar


case 2: //programa que verifica si un año es bisiesto
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
// mismo proceso que el programa anterior, se divide el valor introducido y se divide y su resto es el que determina si es bisiesto o no


case 3:	//programa que verifica si 2 numeros son iguales
float n1,n2;
cout << " ingrese el primer numero:  \n";
cin >> n1;
cout << "ingrese el segundo numero:  \n";
cin >> n2;
if (n1 == n2)
{
	cout << "los numeros son iguales:  \n";
	
}
else
{
	cout << " los numeros no son iguales:  \n";
}
return main();
break;
// se ingresan dos numeros almacenados por las variables "n1" y "n2", luego se verifica si n1 es identico a n2, si, si lo es son iguales si no, no son iguales


case 4:	//programa que verifica si se es mayor de edad 
int m;
cout << "ingrese su edad :";
cin >> m;
if (m >= 18 )
{
	cout << "usted es mayor de edad \n";
}
else
{
	cout << "usted no es mayor de edad \n";
}
return main();
break;
//se introduce un valor almacenado por la variable "m" la cual es analizada si es mayor o igual que el valor 18, si, si lo es, es mayor de edad si no, no es mayor de edad


case 5: //programa que verifica si el examen es aprobado segun la calificacion introducida
float c;
cout << " ingrese su calificacion \n";
cin >> c;
if (c >= 60)
{
	cout << " felicitaciones, aprobo el examen \n";
}
else
{
	cout << "usted reprobo el examen :(  \n";
}
return main();
break;
//mismo proceso que el programa anterior, se analiza la variable introducida si es mayor o igual que 60, si lo es aprobo el examen, si no, lo perdio





case 6:
float s, r, M, d, uno, dos;

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
// se ingresan dos numeros los cuales son enviados a 4 distintas variables que hacen operaciones de suma, resta, multiplicacion y division, luego se imprime el resultado


case 7: //programa que calcula potencias
double calcularPotencia, base, resultado;
int exponente;
// Solicitar al usuario ingresar la base y el exponente
    cout << "Ingrese la base: ";
    cin >> base;

    cout << "Ingrese el exponente: ";
    cin >> exponente;

    // Manejar caso cuando el exponente es cero
    if (exponente == 0) {
        return 1.0;
    }
    // Manejar caso cuando el exponente es negativo
    else if (exponente < 0) {
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
// se ingresa la base y el exponente, luego estos valores pasan a ser elevados por pow y se imprime el resultado
}


return 0;
}
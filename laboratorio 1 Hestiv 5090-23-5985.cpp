#include <iostream>
using namespace std;

int main() 
{
	int op;
	cout << "elija su operacion: 1 suma, 2 resta, 3 multiplicacion, 4 division:";
	cin >> op;
	switch(op)
	{
	case 1:
    float num1, num2, suma;
    cout << "Ingresa el primer numero: ";
    cin >> num1;
    cout << "Ingresa el segundo numero: ";
    cin >> num2;
    suma = num1 + num2;
    cout << "La suma de " << num1 << " y " << num2 << " es " << suma << endl;
    break;
    
	case 2:
	float nu1, nu2, resta;
	cout  << "ingresa el primer numero:";
	cin >> nu1;
	cout << "ingresa el segundo numero:";
	cin >> nu2;
	resta = nu1 - nu2;
	cout << "la resta de " << nu1 << " y " << nu2 << " es:" << resta << endl ;
	break;
	
	case 3:
	float n1, n2, multiplicacion;
	cout << "ingresa el primer numero:";
	cin >> n1;
	cout << "ingresa el segundo numero:";
	cin >> n2;
	multiplicacion = n1 * n2;
	cout << "la multiplicacion de " << n1 << " y " << n2 << " es:" << multiplicacion << endl;
    break;
    
	case 4:
	float m1, m2, division;
	cout << "ingresa el primer numero:";
	cin >> m1;
	cout << "ingresa el segundo numero:";
	cin >> m2;
	division = m1 / m2 ;
	cout << "la divion de " << m1 << " y " << m2<< " es:" << division << endl;
	break;
}
    return 0;
}

	
 


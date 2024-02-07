#include <iostream>
#include <math.h>
using namespace std;
int main ()
{

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

return (0);
}
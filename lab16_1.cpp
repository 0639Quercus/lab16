#include <iostream>
using namespace std;

int main(){

	int a = 5;
	char b = 'A';
	char &c = b;

	int *x = &a;
	char *y = &b;
	int **z = &x;

	cout << a << ' ' << b << ' ' << c << ' ';
	cout << x << ' ' << (void*)y << ' ' << z << '\n';
	cout << &a << ' ' <<  (void*)&b << ' ' <<  (void*)&c << ' ';
	cout << &x << ' ' << &y << ' ' << &z << '\n';

	c = 'F';
	cout << a << ' ' << b << ' ' << c << ' ';
	cout << x << ' ' << (void*)y << ' ' << z << '\n';

	*y = 'W';
	cout << a << ' ' << b << ' ' << c << ' ';
	cout << x << ' ' << (void*)y << ' ' << z << '\n';

	*x = 6;
	cout << a << ' ' << b << ' ' << c << ' ';
	cout << x << ' ' << (void*)y << ' ' << z << '\n';

	**z = 7;
	cout << a << ' ' << b << ' ' << c << ' ';
	cout << x << ' ' << (void*)y << ' ' << z << '\n';
	
	return 0;
}

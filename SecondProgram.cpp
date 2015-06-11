#include <iostream>

using namespace std;

int main()
{
	int a,b,c,d,total;
	const char newline = '\n';
	
	a = 10;
	b = 20;
	c = 0;
	d = 0;
	total = 0;
	
	a = a+b;
	c = a;
	d = (100 % c);
	total = d + c;
	
	cout << "The answer for a + b:";
	cout << a;
	cout << newline;
	cout << "The value of C:";
	cout << c;
	cout << newline;
	cout << "The letter D:";
	cout << d;
	cout << newline;
	cout << "Total:";
	cout << total;

	
return 0;

}

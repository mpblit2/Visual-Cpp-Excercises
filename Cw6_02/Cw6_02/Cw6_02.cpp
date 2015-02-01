#include <iostream>

using std::cout;
using std::endl;

//Prototypy funkcji
double squared(double);
double cubed(double);
double sumarray(double [], int, double (*)(double));

int main(void)
{
	double array[] = {1.5, 2.5, 3.5, 4.5, 5.5, 6.5, 7.5};
	int len = sizeof array/sizeof array[0];
	
	cout<<endl
		<<"Suma liczb podniesiona do kwadratu wynosi = "
		<< sumarray(array, len, squared);

	cout<<endl
		<<"Suma liczb podniesiona do potegi trzeciej wynosi = "
		<< sumarray(array, len, cubed);

	getchar();

	
	return 0;
}

double squared(double x)
{
	return x*x;
}

double cubed(double x)
{
	return x*x*x;
}

double sumarray(double array[], int len, double (*pfun)(double))
{
	double total = 0.0;
	
	for(int i = 0; i < len; i++)
	{
		total += pfun(array[i]);
	}

	return total;
}

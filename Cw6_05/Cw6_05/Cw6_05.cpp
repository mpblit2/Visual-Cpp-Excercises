#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(void)
{
	int height = 0;
	const double inchesToMeters = 0.0254;
	char ch = 't';
	
	try
	{
		while(ch == 't' || ch == 'T')
		{
			cout << "Wprowadz wysokosc w calach: ";
			cin >> height;

			try
			{
				if(height > 100)
					throw "Podano zbyt duza liczbe";
				if(height < 9)
					throw height;

				cout << static_cast<double>(height)*inchesToMeters
					 << " metrow"
					 << endl;
			}
			catch(const char aMessage[])
			{
				cout << aMessage << endl;
			}
			catch(int badHeight)
			{
				cout << badHeight << " cali jest ponizej wymaganego minimum." <<endl;
			}

			cout << "Czy chcesz kontynuowac (t lub n)?";
			cin >> ch;
		}
	}
	catch(int badHeight)
	{
		cout << badHeight << " cali jest ponizej minimum." << endl;
	}

	getchar();
	return 0;
}
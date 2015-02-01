#include <iostream>

using std::cout;
using std::endl;

void testThrow();

int main(void)
{
	int coutns[] = {23, 43, 0, 12, 0, 10, 0};
	int time = 60; //minut

	for(int i = 0; i < sizeof coutns/sizeof coutns[0]; i++)
	{
		cout << "Godzina " << i+1 << ". ";

		try
		{
			if(coutns[i] == 0)
			{
				testThrow();
				//throw "Wartosc zerowa - nie mozna wykonac obliczen!";
			}

			cout << static_cast<double>(time)/coutns[i]<<" "
				 << "minut na jededen element."
				 << endl;
		}
		catch(const char aMessage[])
		{
			cout << aMessage
				 << endl;
		}
	}

	
	getchar();
	return 0;
}

void testThrow()
{
	throw "Wartosc zerowa - nie mozna wykonac obliczen!";
}
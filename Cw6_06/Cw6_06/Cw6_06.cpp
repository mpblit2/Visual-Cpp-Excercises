#include <iostream>

using std::cout;
using std::bad_alloc;
using std::endl;

int main(void)
{
	char* pdata = 0;
	size_t count = ~static_cast<size_t>(0)/2;
	
	try
	{
		pdata = new char[count];
		cout << "Pamiec zostala przydzielona." << endl;
	}
	catch(bad_alloc &ex)
	{
		cout << "Operacja przydzielania pamieci zakonczyla sie niepowodzeniem." << endl
			 << "Informacja od obiektu wyjatku jest nastepujaca: "
			 << ex.what() << endl;
	}
	
	delete[] pdata;

	getchar();

	return 0;
}
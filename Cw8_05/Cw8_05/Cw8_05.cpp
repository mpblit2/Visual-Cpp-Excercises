#include<iostream>

using std::cout;
using std::endl;

class CMessage
{
private:
	char *pmessage;
public:

	void ShowIt() const
	{
		cout << endl << pmessage << ". Adres: " << reinterpret_cast<int>(pmessage);
	}

	void Reset()
	{
		char* temp = pmessage;
		while(*temp)
			*(temp++) = '*';
	}
	
	CMessage& operator = (const CMessage& aMess)
	{
		if(this == &aMess)
			return *this;

		delete[] pmessage;
		pmessage = new char[strlen(aMess.pmessage)+1];

		strcpy(pmessage, aMess.pmessage);

		return *this;
	}
	
	//Definicja konstruktora
	CMessage(const char* text = "Komunikat domyslny")
	{
		pmessage = new char[strlen(text)+1];
		strcpy(pmessage, text);
	}

	//Definicka destruktora
	~CMessage()
	{
		cout << "Destruktor zostal wywolany."
			 << endl;
		delete[] pmessage;
		getchar();
	}
};

int main(void)
{
	CMessage motto1("Glupiemu szczescie sprzyja");
	CMessage motto2;

	cout << "motto1 zawiera - ";
	motto1.ShowIt();
	cout << endl;

	motto1 = motto1;

	cout << "motto2 zawiera - ";
	motto2.ShowIt();
	cout << endl;

	motto1.Reset();
	
	cout << "motto1 zawiera teraz - ";
	motto1.ShowIt();
	cout << endl;

	cout << "motto2 nadal zawiera - ";
	motto2.ShowIt();
	cout << endl;
		
	getchar();
	return 0;
}
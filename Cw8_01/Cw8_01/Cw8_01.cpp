#include<iostream>

using std::cout;
using std::endl;

class CMessage
{
private:
	//WskaŸnik do obiektu zawieraj¹cego ³añcuch tekstowy.
	char* pmessage;

public:

	//Funkcja wyœwietlaj¹ca komunikat
	void ShowIt() const
	{
		cout << endl << pmessage <<" Adres: " << reinterpret_cast<unsigned int>(pmessage);
	}

	//Definicja konstruktora
	CMessage(const char* text = "Komunikat domyslny")
	{
		//Przydzielenie pamiêci do tekstu
		pmessage = new char[strlen(text)+1];
		strcpy(pmessage, text);
	}

	//Definicja konstruktora kopiujacego
	CMessage(const CMessage& initM)
	{
		cout << "Uruchomiono konstruktor kopiujacy"<< endl;
		pmessage = new char[strlen(initM.pmessage)+1];
		strcpy(pmessage, initM.pmessage);
	}

	//Definicja destruktora
	~CMessage();

	void SetMessage(const char* newmessage)
	{
		pmessage = new char[strlen(newmessage)+1];
		strcpy(pmessage, newmessage);
	}
};

CMessage::~CMessage()
{
	cout << "Destruktor zostal wywolany." << endl;
	delete[] pmessage;
	getchar();
}

int main(void)
{
	//Deklaracja obiektu
	CMessage motto1("Lepiej pozno niz wcale.");
	CMessage motto2(motto1);

	cout << endl << "motto1";
	motto1.ShowIt();
	
	cout << endl << "motto2";
	motto2.ShowIt();

	motto2.SetMessage("Nowy tekst.");
	cout << endl << "motto1";

	motto1.ShowIt();
	cout << endl << "motto2";

	motto2.ShowIt();
	getchar();
	return 0;
}
#pragma once
#include <iostream>

using std::cout;
using std::endl;

class CContainer
{
public:
	
	// Funkcja oblicza pojemno�� - brak tre�ci
	// Jest to funkcja czysto wirtualna co oznacza '=0' 
	virtual double Volume() const = 0;

	virtual void ShowVolume() const
	{
		cout << endl
			 << "Pojemno�� wynosi " << Volume();
	}
};

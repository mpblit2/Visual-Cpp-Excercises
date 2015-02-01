#pragma once
#include <iostream>
#include "Container.h"

using std::cout;
using std::endl;

class CBox : public CContainer
{
public:

	CBox(double lv, double wv, double hv)
		: m_Lenght(lv)
		, m_Width(wv)
		, m_Height(hv)
	{
	}

protected:
	double m_Lenght;
	double m_Width;
	double m_Height;
public:

	// Funkcja pokazuj¹ca pojemnoœæ obiektu.
	void ShowVolume() const
	{
		cout << endl
			 << "Pojemnosc uzytkowa klasy CBox wynosi " << Volume();
	}

	// Funkcja obliczaj¹ca pojemnoœæ obiektu klasy CBox
	virtual double Volume() const
	{
		return m_Lenght*m_Width*m_Height;
	}
};

#pragma once
#include<iostream>

using std::cout;
using std::endl;

class CBox
{
public:
	CBox(double lv = 1.0, double wv = 1.0, double hv = 1.0):
					m_Length(lv), m_Width(wv), m_Height(hv)
	  {
		  cout << endl << "Konstruktor klasy CBox zostal wywolany.";
	  }

	~CBox()
	{

	}

private:
	double m_Length;
	double m_Width;
	double m_Height;

public:

	// Funkcja obliczaj¹ca pojemnoœæ obiektu klasy CBox
	double Volume(void)
	{
		return m_Length*m_Width*m_Height;
	}
};
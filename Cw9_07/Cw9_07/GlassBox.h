#pragma once
#include "box.h"

class CGlassBox :
	public CBox
{
public:

	CGlassBox(double lv, double wv, double hv) : CBox(lv, wv, hv){}

	// Funkcja obliczaj¹ca pojemnoœæ obiektu klasy CGlassBox
	virtual double Volume() const
	{
		return 0.85*m_Lenght*m_Width*m_Height;
	}
};

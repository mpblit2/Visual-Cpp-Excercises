#pragma once
#include "container.h"
extern const double PI;

class CCan :
	public CContainer
{
public:

	//Funkcja obliczająca pojemność puszki
	virtual double Volume() const
	{
		return 0.25*PI*m_Diameter*m_Diameter*m_Height;
	}
	
	CCan(double hv = 4.0, double dv = 2.0): m_Height(hv), m_Diameter(dv)
	{}

private:
	double m_Height;
	double m_Diameter;

};

#pragma once

class CBox
{
private:
	
	// D³ugoœæ pude³ka w centymetrach
	double m_Length;
	// Szerokoœæ pude³ka w centymetrach
	double m_Width;
	// Wysokoœæ pude³ka w centymetrach
	double m_Height;

public:
	CBox(double lv = 1.0, double wv = 1.0, double hv = 1.0): m_Length(lv), m_Width(wv),		m_Height(hv)
	{}

	double Volume() const
	{ return m_Length*m_Width*m_Height; }
};

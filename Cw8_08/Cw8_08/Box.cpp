#include "Box.h"

CBox::CBox(double lv, double wv, double hv)
{
	lv = lv <= 0.0 ? 1.0 : lv;
	wv = wv <= 0.0 ? 1.0 : wv;
	hv = hv <= 0.0 ? 1.0 : hv;

	m_Length = lv > wv ? lv : wv;
	m_Width = wv < lv ? wv : lv;
	m_Height = hv;
}

CBox::~CBox(void)
{
}

// Prze�adowany operator dodawania
CBox CBox::operator+(const CBox& aBox) const
{
	//Nowy obiekt jest d�u�szy i szerszy od tych dw�ch
	//oraz sumy ich wysoko�ci
	return CBox(m_Length > aBox.m_Length ? m_Length : aBox.m_Length,
		m_Width > aBox.m_Width ? m_Width : aBox.m_Width,
		m_Height + aBox.m_Height);
}

// Mno�enie obiektu klasy CBox przez liczb� ca�kowit�
CBox CBox::operator*(int n) const
{
	if(n%2)
		return CBox(m_Length, m_Width, n*m_Height);				//Mno�nik n jest nieparzysty
	else
		return CBox(m_Length, 2.0*m_Width, (n/2)*m_Height);		//Mno�nik n jest parzysty
}

// Dzielenie jednego obiektu przez drugi
int CBox::operator/(const CBox& aBox) const
{
	//Tymczasowa zmienna przechowuj�ca liczbe w p�aszczyznie poziomej w jeden spos�b.
	int tc1 = 0;
	//Tymczasowa zmienna przechowuj�ca liczbe w p�aszczy�nie w inny spos�b
	int tc2 = 0;

	tc1 = static_cast<int>((m_Length/aBox.m_Length))*
		static_cast<int>((m_Width/aBox.m_Width));				//Dopasowanie w jeden spos�b

	tc2 = static_cast<int>((m_Length/aBox.m_Width))*
		static_cast<int>((m_Width/aBox.m_Length));				//i w drugi spos�b

	return static_cast<int>((m_Height/aBox.m_Height))*(tc1 > tc2 ? tc1 : tc2);
}

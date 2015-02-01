#pragma once

class CBox
{
public:
	CBox(double lv = 1.0, double wv = 1.0, double hv = 1.0);
	~CBox(void);

private:
	// D�ugo�� pude�ka w centymetrach
	double m_Length;
	// Szeroko�� pude�ka w centymetrach
	double m_Width;
	// Wysoko�� pude�ka w centymetrach
	double m_Height;
public:

	double GetHeight(void) const
	{
		return m_Height;
	}

	double GetLength(void) const
	{
		return m_Length;
	}

	double GetWidth(void) const
	{
		return m_Width;
	}

	// Obliczanie pojemno�ci pude�ka
	double Volume(void) const
	{
		return m_Length * m_Width * m_Height;
	}
	// Prze�adowany operator dodawania
	CBox operator+(const CBox& aBox) const;
	// Mno�enie obiektu klasy CBox przez liczb� ca�kowit�
	CBox operator*(int n) const;
	// Dzielenie jednego obiektu przez drugi
	int operator/(const CBox& aBox) const;
};

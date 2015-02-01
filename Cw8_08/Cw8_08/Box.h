#pragma once

class CBox
{
public:
	CBox(double lv = 1.0, double wv = 1.0, double hv = 1.0);
	~CBox(void);

private:
	// D³ugoœæ pude³ka w centymetrach
	double m_Length;
	// Szerokoœæ pude³ka w centymetrach
	double m_Width;
	// Wysokoœæ pude³ka w centymetrach
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

	// Obliczanie pojemnoœci pude³ka
	double Volume(void) const
	{
		return m_Length * m_Width * m_Height;
	}
	// Prze³adowany operator dodawania
	CBox operator+(const CBox& aBox) const;
	// Mno¿enie obiektu klasy CBox przez liczbê ca³kowit¹
	CBox operator*(int n) const;
	// Dzielenie jednego obiektu przez drugi
	int operator/(const CBox& aBox) const;
};

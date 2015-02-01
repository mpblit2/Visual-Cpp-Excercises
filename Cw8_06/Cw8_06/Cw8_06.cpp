#include <iostream>
using std::cout;
using std::endl;

class CBox
{

public:

	CBox(double lv=1.0, double wv=1.0, double hv=1.0): m_Height(hv)
	{
		m_Length = lv > wv ? lv : wv;
		m_Width = wv < lv ? wv : lv;
	}

	double Volume() const
	{
		return m_Length * m_Width * m_Height;
	}

	int CBox::operator > (const CBox& aBox) const
	{
		return this->Volume() > aBox.Volume();
	}

	CBox operator + (const CBox& aBox) const
	{
		return CBox(m_Length > aBox.m_Length ? m_Length : aBox.m_Length,
			m_Width  > aBox.m_Width ? m_Width : aBox.m_Width,
			m_Height + aBox.m_Height);
	}

	//Funkcja pokazujaca wymiary pudelka
	void ShowBox() const
	{
		cout << m_Length << " "
			<< m_Width << " "
			<< m_Height << endl;
	}

	CBox& operator ++ (int)
	{
		this->m_Height++;
		this->m_Length++;
		this->m_Width++;

		return *this;
	}

	CBox& operator ++ ()
	{
		++this->m_Height;
		++this->m_Length;
		++this->m_Width;

		return *this;
	}

private:
	double m_Length;
	double m_Width;
	double m_Height;
};

//Prototyp funkcji
int operator > (const double& value, const CBox& aBox);

int main(void)
{
	CBox smallBox(4.0, 2.0, 1.0);
	CBox mediumBox(10.0, 4.0, 2.0);
	CBox aBox;
	CBox bBox;

	aBox = smallBox + mediumBox;
	cout << "Wymiary obiektu aBox: ";
	aBox.ShowBox();

	bBox = aBox + smallBox + mediumBox;
	cout << "Wymiary obiektu bBox: ";
	bBox.ShowBox();
	
	cout << "Wymiary obiektu bBox: ";
	bBox.ShowBox();

	getchar();
	return 0;
}

int operator > (const double& value, const CBox& aBox)
{
	return value > aBox.Volume();
}
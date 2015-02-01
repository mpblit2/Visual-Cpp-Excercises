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


template<class T, int Size> class CSamples
{
public:
	CSamples(const T values[], int count);
	CSamples(const T& value);
	CSamples(){m_Free = 0;}

	bool Add(const T& value);	//Wstawianie jakiejs wartoœci
	T Max() const;

private:
	T m_Values[Size];		//Tablica przechowuj¹ca próbki
	int m_Free;			//Indeks wolnej lokalizacji w tablicy m_Values;
};

//Definicja szablonu konstruktora przyjmuj¹cego tablicê próbek
template<class T, int Size> CSamples<T, int Size>::CSamples(const T values[], int count)
{
	m_Free = count < Size ? count : Size;		//Nie przekaraczaj rozmiaru tablicy;
	
	for(int i=0; i<m_Free; i++)				
		m_Values[i] = values[i];				//Przechowuje liczbe probek.
}

template<class T, int Size> CSamples<T, int Size>::CSamples(const T& value)
{
	m_value[0] = value;						//Zapisuje próbkê
	m_Free = 1;								//Nastêpna jest wolna
}

template<class T, int Size> bool CSamples<T, int Size>::Add(const T& value)
{
	bool OK = m_Free < 100;					//Wskazuje ze jest wolne miejsce
	
	if(OK)
		m_Values[m_Free++] = value;			//Prawda, wiec zapisz wartosc
	
	return OK;
}

template<class T, int Size> T CSamples<T, int Size>::Max() const
{
	T theMax = m_Free ? m_Values[0] : 0;	//Ustaw pierwsza próbkê lub 0 jako maksimum

	for(int i=0; i < m_Free; i++)
		if(m_Values[i] > theMax)
			theMax = m_Values[i];

	return theMax;
}

int main(void)
{
	/*
	CBox boxes[] = {
						CBox(8.0, 5.0, 2.0),
						CBox(5.0, 4.0, 6.0),
						CBox(4.0, 3.0, 3.0)
	};
	
	*/


	double boxes[] = {8.5, 1.0, 4.5, 2.3, 2.2, 1.8, 97};

	CSamples<double, sizeof boxes/sizeof boxes[0]> myIntigers(boxes, sizeof boxes / sizeof boxes[0]);

	double maxInt = myIntigers.Max();
	cout << endl
		 << "Najwieksze pudelko ma pojemnosc "
		 << maxInt
		 << endl;
	
	getchar();
	return 0;
}
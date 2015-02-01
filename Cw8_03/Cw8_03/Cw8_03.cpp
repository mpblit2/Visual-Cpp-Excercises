#include<iostream>

using std::cout;
using std::endl;


class CBox
{
public:
	static int classCount;
	
	CBox(double lv, double wv, double hv): m_lenght(lv), m_width(wv), m_height(hv)
	{
		cout<<endl<<"Wywolano konstruktor. Powstal "<<classCount<<" obiekt klasy.";
		classCount++;
	}

	CBox():m_lenght(1), m_width(1), m_height(1)
	{
		classCount++;
		cout<<endl<<"Wywolano konstruktor domyslny. Powstal "<<classCount<<" obiekt klasy.";

	}

	double Value() const
	{
		return m_lenght*m_width*m_height;
	}

	double operator>(const CBox& abox) const;
	
private:
	double m_lenght;
	double m_width;
	double m_height;
};

int CBox::classCount = 1;
double CBox::operator >(const CBox& aBox) const
{
	return this->Value() > aBox.Value();
}

int main(void)
{
	CBox smallBox(4.0, 2.0, 1.0);
	CBox mediumBox(10.0, 4.0, 2.0);
	CBox bigBox(30.0, 20.0, 40.0);

	if(mediumBox > smallBox)
	{
		cout << endl
			<< "Pudelko mediumBox jest wieksze niz smallbox.";
	}
	else
	{
		cout << endl
			<< "Pudelko mediumBox jest mniejsze niz smallbox.";
	}

	if(mediumBox > bigBox)
	{
		cout << endl
			<< "Pudelko mediumBox jest wieksze niz bigbox.";
	}

	else
	{
		cout << endl
			<< "Pudelko mediumBox jest mniejsze niz bigbox.";
	}

	getchar();
	return 0;
}
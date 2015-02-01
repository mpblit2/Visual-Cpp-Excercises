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
	}

	CBox():m_lenght(1), m_width(1), m_height(1)
	{
		classCount++;
		cout<<endl<<"Wywolano konstruktor domyslny. Powstal "<<classCount<<" obiekt klasy.";

	}

	double Value()
	{
		return m_lenght*m_width*m_height;
	}
	
private:
	double m_lenght;
	double m_width;
	double m_height;

};

int CBox::classCount;

int main(void)
{
	CBox boxes[5];

	cout<<endl<<"Powstalo "<<CBox::classCount<<" obiektow klasy CBox"<<endl;

	getchar();
	return 0;
}
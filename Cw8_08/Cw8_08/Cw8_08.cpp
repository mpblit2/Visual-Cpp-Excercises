#include <iostream>
#include "Box.h"
#include "BoxOperators.h"

using std::cout;
using std::endl;

int main(void)
{
	CBox candy(1.5, 1.0, 1.0);
	CBox candyBox(7.0, 4.5, 2.0);
	CBox carton(30.0, 18.0, 18.0);

	//Obliczanie liczby cukierków na pude³ko.
	int numCandies = candyBox/candy;

	//Obliczanie liczby pude³ek z cukierkami na karton.
	int numCboxes = carton/candyBox;

	//Obliczanie marnowanego miejsca w kartonie.
	double space = carton%candyBox;

	cout << endl
		 << "W pudelku zmieszcza sie " << numCandies
		 << " cukierki."
		 << endl
		 << "W kartonie zmiesci sie " << numCboxes
		 << " standardowych pudelek cukierkow, " << endl << "przy zmarnowaniu "
		 << space << " centymetrow szesciennych.";

	cout << endl << endl << "ANALIZA PUDELKA NA CUKIERKI ROBIONEGO NA ZAMOWIENIE (nic sie nie marnuje)";

	//Wypróbowanie ca³ego zestawu pude³ek robionych na zamówienie.
	for(double length = 3.0; length <= 7.5; length += 0.5)
		for(double width = 3.0; width <= 5.0; width += 0.5)
			for(double height = 1.0; height <= 2.5; height += 0.5)
			{
				//W ka¿dym cyklu utórz nowe pude³ko.
				CBox tryBox(length, width, height);
				if(carton%tryBox < tryBox.Volume() && tryBox % candy == 0.0 && tryBox/candy >= 30)
					cout << endl << endl
						 << "Pudelko probne L = " << tryBox.GetLength()
						 << "W = " << tryBox.GetWidth()
						 << "H = " << tryBox.GetHeight()
						 << endl
						 << "Pudelko probne pomiesci " << tryBox/candy << " cukierkow."
						 << " a do kartonu wejdzie " << carton / tryBox
						 << " takich pudelek.";
			}
	cout << endl;

	getchar();
	return 0;
}
#include <iostream>
#include "GlassBox.h"
#include "Can.h"

using std::cout;
using std::endl;

const double PI = 3.14159265;


int main(void)
{
	CContainer* pC1 = new CBox(2.0, 3.0, 4.0);
	CCan myCan(6.5, 3.0);
	CGlassBox myGlassBox(2.0, 3.0, 4.0);

	pC1->ShowVolume();
	delete pC1;
	pC1 = &myCan;
	pC1->ShowVolume();
	
	pC1 = &myGlassBox;
	pC1->ShowVolume();

	pC1 = 0;
	delete pC1;

	getchar();
	return 0;
}
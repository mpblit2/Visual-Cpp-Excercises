#include <iostream>
#include <cstring>
#include "CandyBox.h"

//using std::cout;
//using std::endl;

int main(void)
{
	CBox myBox(4.0, 3.0, 2.0);
	CCandyBox myCandyBox;
	CCandyBox myMintBox(1.0, 2.0, 3.0, "Mietowki cienkie jak listek.");

	cout << endl
		 << "Obiekt myBox zajmuje " << sizeof myBox
		 << " bajty" << endl
		 << "Obiekt myCandyBox zajmuje " << sizeof myCandyBox
		 << " bajty" << endl
		 << "Obiekt myMintBox zajmuje " << sizeof myMintBox
		 << " bajty";
	cout << endl
		<< "Pojemnosc obiektu myMintBox wynosi "
		<< myMintBox.Volume();
	cout << endl;

	getchar();
	return 0;
}
#pragma once
#include<iostream>
#include "Box.h"

using std::cout;
using std::endl;

class CCandyBox : public CBox
{

public:
	char* m_Contents;
	
	CCandyBox(double lv, double wv, double hv, char* str = "Cukierek"):CBox(lv, wv, hv)
	{
		cout << endl << "Konstruktor klasy CCandyBox zosta³ wywolany.";
		m_Contents = new char[strlen(str)+1];
		strcpy_s(m_Contents, strlen(m_Contents), str);
	}

	CCandyBox(char* str = "Cukierek")
	{
		cout << endl << "Konstruktor klasy CCandyBox zostal wywolany.";
		m_Contents = new char[strlen(str)+1];
		strcpy_s(m_Contents, strlen(m_Contents), str);
	}

	~CCandyBox()
	{ 
		cout << "Destruktor." << endl;
		//delete[] m_Contents; }
};
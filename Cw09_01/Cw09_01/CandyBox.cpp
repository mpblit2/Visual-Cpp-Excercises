#include <iostream>
#include "CandyBox.h"

CCandyBox::CCandyBox(char* str)
{
		m_Contents = new char[strlen(str)+1];
		strcpy_s(m_Contents, strlen(str)+1, str);
}
CCandyBox::~CCandyBox()
{
		delete[] m_Contents;
}

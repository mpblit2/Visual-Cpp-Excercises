#pragma once
#include "Box.h"

class CCandyBox : public CBox
{
public:
	char* m_Contents;
	
	CCandyBox(char* str = "Cukierek");
	~CCandyBox();
	
};

#pragma once
#include "IShape.h"
class Rectangle:public IShape
{

	void Size()override;

	void Draw()override;

private:
	//�Ίp��
	int diagonal = 0;

};


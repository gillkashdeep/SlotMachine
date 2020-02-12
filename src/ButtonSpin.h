#pragma once
#pragma once
#ifndef __ButtonSpin__
#define __ButtonSpin__
#include "GameObject.h"

class ButtonSpin : public GameObject
{
	
public:
	ButtonSpin();
	~ButtonSpin();
	
	void draw() override;
	void update() override;
	void clean() override;
	
private:
	double m_currentDirection;
};

#endif

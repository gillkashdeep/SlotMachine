#pragma once
#ifndef __Button__
#define __Button__
#include "GameObject.h"
#include <SDL_hints.h>
#include <iostream>


class ButtonReset : public GameObject
{
public:
	ButtonReset();
	~ButtonReset();


	void draw() override;
	void update() override;
	void clean() override;

	void setMousePosition(glm::vec2 mousePosition);
	void setMouseButtonClicked(bool clicked);

	virtual bool ButtonClick() = 0;
	
private:
	double m_currentDirection;


	Uint8 m_alpha;
	std::string m_name;
	bool m_isCentered;
	glm::vec2 m_mousePosition;


protected:
	// getters
	bool m_mouseButtonClicked;
	bool m_mouseOver();
};

class derived : public ButtonReset
{
public:
	bool ButtonClick()
	{
		std::cout << "button clicked";
		return 0;
	}
};


#endif

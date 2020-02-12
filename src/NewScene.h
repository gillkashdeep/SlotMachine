#pragma once
#ifndef  __NEW_SCENE__
#define  __NEW_SCENE__

#include "Scene.h"
#include "Jackpot.h"
#include "apple.h"
#include "ButtonReset.h"
#include "ButtonSpin.h"

class NewScene : public Scene
{
	public:
	NewScene();
	~NewScene();
	
	void draw() override;
	void update() override;
	void clean() override;
	void handleEvents() override;
	void start() override;


	glm::vec2 getMousePosition();

private:

	glm::vec2 m_mousePosition;

	Jackpot* m_pShip;
	apple* m_pApple;
	ButtonReset* m_pResetbtn;
	ButtonSpin* m_pSpinbtn;
};


#endif

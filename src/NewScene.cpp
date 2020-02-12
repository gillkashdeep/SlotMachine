#include "NewScene.h"
#include "apple.h"

NewScene::NewScene()
{
	 start();
}

NewScene::~NewScene()
{
}

void NewScene::draw()
{
	m_pShip->draw();
	m_pApple->draw();
	m_pResetbtn->draw();
	m_pSpinbtn->draw();
	

	m_pShip->setPosition(glm::vec2(400.0f, 270.0f));
	m_pApple->setPosition(glm::vec2(250.0f, 270.0f));
	m_pResetbtn->setPosition(glm::vec2(180.0f, 470.0f));
	m_pSpinbtn->setPosition(glm::vec2(575.0f, 468.0f));

	
}

void NewScene::update()
{
	m_pResetbtn->setMousePosition(m_mousePosition);
	m_pResetbtn->ButtonClick();
}

void NewScene::clean()
{
}

void NewScene::handleEvents()
{
}

void NewScene::start()
{
	m_pShip = new Jackpot();
	m_pApple = new apple();
	m_pResetbtn = new derived();
	m_pSpinbtn = new ButtonSpin();
}

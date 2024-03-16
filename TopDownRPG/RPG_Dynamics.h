#ifndef RPG_DYNAMICS_H
#define RPG_DYNAMICS_H


#include "olcPixelGameEngine.h"

class cDynamic
{
public:
	cDynamic(std::string n);
	~cDynamic();

public:
	float px, py;
	float vx, vy;
	bool bSolidVsMap;
	bool bSolidVsDyn;
	bool bFriendly;
	std::string sName;

public:
	virtual void DrawSelf(olc::PixelGameEngine* gfx, float ox, float oy) {}
	virtual void Update(float fElapsedTime) {}

};


class cDynamic_Creature : public cDynamic
{
public:
	cDynamic_Creature(std::string n, olc::Sprite* sprite);
protected:
	olc::Sprite* m_pSprite;

	enum { SOUTH = 0, WEST = 1, NORTH = 2, EAST = 3 } m_nFacingDirection;
	enum { STANDING, WALKING, CELEBRATING, DEAD } m_nGraphicState;
public:
	int nHealth;
	int nHealthMax;
	float m_fTimer;
	int m_nGraphicCounter = 0;
public:
	void DrawSelf(olc::PixelGameEngine* gfx, float ox, float oy) override;
	void Update(float fElapsedTime) override;
};

#endif // !RPG_DYNAMICS_H


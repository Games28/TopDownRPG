#ifndef RPG_MAPS_H
#define RPG_MAPS_H

#include "olcPixelGameEngine.h"
#include "RPG_Assets.h"


class cMap
{
public:
	cMap();
	~cMap();

public:
	int nWidth;
	int nHeight;
	std::string sName;
	olc::Sprite* pSprite;
	int GetIndex(int x, int y);
	bool GetSolid(int x, int y);
	bool Create(std::string fileData, olc::Sprite* sprite, std::string name);

private:
	int* m_indices = nullptr;
	bool* m_solids = nullptr;

};


class cMap_Village1 : public cMap
{
public:
	cMap_Village1();
};


class cMap_village2 : public cMap
{
public:
	cMap_village2();
};

#endif // !RPG_MAPS_H


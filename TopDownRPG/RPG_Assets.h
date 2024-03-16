#ifndef RPG_ASSETS_H
#define RPG_ASSETS_H

#include "olcPixelGameEngine.h"

class RPG_Assets
{
public:
	static RPG_Assets& get()
	{
		static RPG_Assets me;
		return me;
	}

	RPG_Assets(RPG_Assets const&) = delete;
	void operator=(RPG_Assets const&) = delete;

	olc::Sprite* GetSprite(std::string name)
	{
		return m_mapSprites[name];
	}

	void LoadSprites();

private:
	RPG_Assets();
	~RPG_Assets();

	std::map<std::string, olc::Sprite* > m_mapSprites;
};


#endif // !RPG_ASSETS_H


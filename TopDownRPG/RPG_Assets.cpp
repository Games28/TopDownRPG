#include "RPG_Assets.h"


RPG_Assets::RPG_Assets()
{

}

RPG_Assets::~RPG_Assets()
{

}


void RPG_Assets::LoadSprites()
{
	auto load = [&](std::string sName, std::string sFileName)
	{
		olc::Sprite* s = new olc::Sprite(sFileName);
		m_mapSprites[sName] = s;
	};

	load("village", "rpgdata/gfx/toml_spritesheetdark.png");

	load("skelly", "rpgdata/gfx/toml_Char001.png");
	load("player", "rpgdata/gfx/toml_CharacterSprites.png");
	load("font", "rpgdata/gfx/javidx9_nesfont8x8.png");
	load("worldmap", "rpgdata/gfx/worldmap1.png");
	load("skymap", "rpgdata/gfx/sky1.png");
	load("title", "rpgdata/gfx/title3.png");
	load("balloon", "rpgdata/gfx/balloon1.png");
	load("sword", "rpgdata/gfx/Sword.png");
	load("hitech", "rpgdata/gfx/toml_modernish.png");

	load("purple", "rpgdata/gfx/toml_purple.png");

	load("health", "rpgdata/gfx/item_health.png");
	load("healthboost", "rpgdata/gfx/item_healthboost.png");

	load("Basic Sword", "rpgdata/gfx/weapon_basic_sword.png");
}

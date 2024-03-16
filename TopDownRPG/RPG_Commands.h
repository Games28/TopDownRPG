#ifndef RPG_COMMANDS_H
#define RPG_COMMANDS_H

#include <list>
#include "RPG_Dynamics.h"
#include <vector>
class RPG_Main;

class cCommand
{
public:
	cCommand() {}
	virtual ~cCommand() {}

	bool bStarted = false;
	bool bCompleted = false;

	virtual void Start() {}
	virtual void Update(float fElapsedTime) {}

	static RPG_Main* g_engine;
};


class cScriptProcessor
{
public:
	cScriptProcessor();

	void AddCommand(cCommand* cmd);
	void ProcessCommands(float fElapsedTime);
	void CompleteCommand();

public:
	bool bUserControlEnabled;
private:
	std::list<cCommand*> m_listCommands;
};


class cCommand_MoveTo : public cCommand
{
public:
	cCommand_MoveTo(cDynamic* object, float x, float y, float duration = 0.0f);
	void Start() override;
	void Update(float fElapsedTime) override;

private:
	cDynamic* m_pObject;
	float m_fStartPosX;
	float m_fStartPosY;
	float m_fTargetPosX;
	float m_fTargetPosY;
	float m_fDuration;
	float m_fTimeSoFar;
};


class cCommand_ShowDailog : public cCommand
{
public:
	cCommand_ShowDailog(std::vector<std::string> line);
	void Start() override;


private:
	std::vector<std::string> vecLines;
};

#endif // !RPG_COMMANDS_H


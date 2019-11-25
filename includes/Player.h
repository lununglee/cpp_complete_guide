#ifndef _PLAYER_H_
#define _PLAYER_H_

#include "Header.h"

class Player
{
private:
	string	Name;
	int		Health;
	int		XP;

public:
	// Constructors
	Player(string NameToSet, int HealthToSet, int XPToSet);
	Player();
	Player(string NameToSet);

	// Setters
	void	SetName(string NameToSet);
	void	SetHealth(int HealthToSet);
	void	SetXP(int XPToSet);

	// Getters
	string	GetName();
	int		GetHealth();
	int		GetXP();
};

#endif

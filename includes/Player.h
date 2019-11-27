#ifndef _PLAYER_H_
#define _PLAYER_H_

#include "Header.h"

class	Player
{
private:
	static int	PlayerCount;
	string		Name;
	int			Health;
	int			XP;

public:
	// Constructors
	Player();
	Player(string NameToSet);
	Player(string NameToSet, int HealthToSet, int XPToSet);
	// Copier
	Player(const Player &Source);

	// Destructor
	~Player();


	// Setters
	void		SetName(string NameToSet);
	void		SetHealth(int HealthToSet);
	void		SetXP(int XPToSet);

	// Getters
	string		GetName() const;
	int			GetHealth() const;
	int			GetXP() const;
	static int	GetPlayerCount();
};

#endif

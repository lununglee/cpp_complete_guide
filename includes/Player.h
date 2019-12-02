#ifndef _PLAYER_H_
#define _PLAYER_H_

#include <string>

class	Player
{
private:
	static int	PlayerCount;
	std::string		Name;
	int			Health;
	int			XP;

public:
	// Constructors
	Player();
	Player(std::string NameToSet);
	Player(std::string NameToSet, int HealthToSet, int XPToSet);
	// Copier
	Player(const Player &Source);

	// Destructor
	~Player();


	// Setters
	void		SetName(std::string NameToSet);
	void		SetHealth(int HealthToSet);
	void		SetXP(int XPToSet);

	// Getters
	std::string		GetName() const;
	int			GetHealth() const;
	int			GetXP() const;
	static int	GetPlayerCount();
};

#endif

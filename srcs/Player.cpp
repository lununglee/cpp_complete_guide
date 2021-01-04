#include "../Includes/Player.h"

int 	Player::PlayerCount {0};

/*********************************
*          Constructors          *
*********************************/

Player::Player()
: Player {"None", 100, 0}
{ }

Player::Player(std::string NameToSet)
: Player {NameToSet, 100, 0}
{ }

Player::Player(std::string NameToSet, int HealthToSet, int XPToSet)
:	Name {NameToSet},
	Health {HealthToSet},
	XP {XPToSet}
{ PlayerCount++; }

/*********************************
*            Copier              *
*********************************/

Player::Player(const Player &Source)
// :	Name {Source.Name},
// 	Health {Source.Health},
// 	XP {Source.XP}
:	Player {Source.Name, Source.Health, Source.XP}
{ }

/*********************************
*           Destructors          *
*********************************/

Player::~Player()
{ PlayerCount--; }

/*********************************
*            Setters             *
*********************************/
void	Player::SetName(std::string NameToSet)
{
	Name = NameToSet;
}
void	Player::SetHealth(int HealthToSet)
{
	Health = HealthToSet;
}
void	Player::SetXP(int XPToSet)
{
	XP = XPToSet;
}

/*********************************
*            Getters             *
*********************************/
std::string	Player::GetName() const
{
	return Name;
}
int		Player::GetHealth() const
{
	return Health;
}
int		Player::GetXP() const
{
	return XP;
}

int		Player::GetPlayerCount()
{
	return PlayerCount;
}

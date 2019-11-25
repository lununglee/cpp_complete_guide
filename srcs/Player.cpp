#include "../Includes/Player.h"

/*********************************
*          Constructors          *
*********************************/
Player::Player(string NameToSet, int HealthToSet, int XPToSet)
: Name {NameToSet}, Health {HealthToSet}, XP {XPToSet}
{ }

Player::Player()
: Player {"None", 100, 0}
{ }

Player::Player(string NameToSet)
: Player {NameToSet, 100, 0}
{ }

/*********************************
*            Setters             *
*********************************/
void	Player::SetName(string NameToSet)
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
string	Player::GetName()
{
	return Name;
}
int		Player::GetHealth()
{
	return Health;
}
int		Player::GetXP()
{
	return XP;
}

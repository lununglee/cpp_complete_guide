#include "../Includes/Player.h"

// Constructor
Player::Player()
: Name {"User"}, Health {100}, XP {0}
{ }

Player::Player(string NameToSet)
: Name {NameToSet}, Health {100}, XP {0}
{ }

Player::Player(string NameToSet, int HealthToSet, int XPToSet)
: Name {NameToSet}, Health {HealthToSet}, XP {XPToSet}
{ }

// Setter
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

// Getter
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

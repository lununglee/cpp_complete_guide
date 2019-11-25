#include "../Includes/Player.h"

/*********************************
*          Constructors          *
*********************************/

Player::Player()
: Player {"None", 100, 0}
{ }

Player::Player(string NameToSet)
: Player {NameToSet, 100, 0}
{ }

Player::Player(string NameToSet, int HealthToSet, int XPToSet)
:	Name {NameToSet},
	Health {HealthToSet},
	XP {XPToSet}
{ }

/*********************************
*            Copier              *
*********************************/

Player::Player(const Player &Source)
// :	Name {Source.Name},
// 	Health {Source.Health},
// 	XP {Source.XP}
:	Player {Source.Name, Source.Health, Source.XP}
{ cout << "copy of " << Source.Name << " has been made" << endl; }

/*********************************
*           Destructors          *
*********************************/

Player::~Player()
{ cout << "Destructor in action..." << endl; }

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

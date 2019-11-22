#include "../Includes/Header.h"

class Player
{
	public:
	string	Name {"Player"};
	int		Health {100};
	int		XP {0};

	void	Talk(string);
	bool	bIsDead();
};

class Account
{
	public:
	string	Name {"DefaultUser"};
	double	Balance {0.0};

	bool	Deposit(double);
	bool	Withdraw(double);
};

int		main(void)
{
	// // Stack
	// Player Player01;
	// Player Player02;

	// // Heap
	// Player *AI = new Player;
	// delete AI;

	// // Array
	// Player Players[] {Player01, Player02};

	// // Vectors
	// vector<Player> PlayerVec {Player01};
	// PlayerVec.push_back(Player02);

	// // Stack
	// Account	FrankAccount;
	// Account	JimAccount;

	// Player01.Name = "Frank";
	// cout << Player01.Name << endl;
	// AI->Name = "Comp";
	// cout << AI->Name;
	VectorChallenge();
	return (0);
}

#include "../Includes/Header.h"

class	PlayerPublic
{
	public:
	string	Name {"PlayerPublic"};
	int		Health {100};
	int		XP {0};

	void	Talk(string);
	bool	bIsDead();
};

class	PlayerPrivate
{
	private:
	string	Name {"PlayerPrivate"};
	int		Health {100};
	int		XP {0};

	public:
	void	Talk(string);
	bool	bIsDead();
};

class	AccountPublic
{
	public:
	string	Name {"DefaultUser"};
	double	Balance {0.0};

	bool	Deposit(double);
	bool	Withdraw(double);
};

class	AccountPrivate
{
	public:
	string	Name {"DefaultUser"};
	double	Balance {0.0};

	bool	Deposit(double);
	bool	Withdraw(double);
};

void	ClassDeclaration()
{
	// Stack
	PlayerPublic Player01;
	PlayerPublic Player02;

	// Heap
	PlayerPublic *AI = new PlayerPublic;
	delete AI;

	// Array
	PlayerPublic Players[] {Player01, Player02};

	// Vectors
	vector<PlayerPublic> PlayerVec {Player01};
	PlayerVec.push_back(Player02);

	// Stack
	AccountPublic	FrankAccount;
	AccountPublic	JimAccount;

	Player01.Name = "Frank";
	cout << Player01.Name << endl;
	AI->Name = "Comp\n";
	cout << AI->Name;
}

void	MethodImplementation1()
{
	Account FrankAccount;
	FrankAccount.SetName("Frank Sinatra");
	FrankAccount.SetBalance(1000.0);

	if (FrankAccount.Deposit(200))
		cout << "Deposit successful" << endl;
	else
		cout << "Deposit failed" << endl;

	if (FrankAccount.Withdraw(500))
		cout << "Withdrawal successful" << endl;
	else
		cout << "Withdrawal failed - insufficient funds" << endl;

	if (FrankAccount.Withdraw(1500))
		cout << "Withdrawal successful" << endl;
	else
		cout << "Withdrawal failed - insufficient funds" << endl;
}

void	ConsDestructor()
{
	Player Slayer("Slayer");
	cout << Slayer.GetName();
}

void	ConstructorInitializationLists()
{
	Player	Empty;
	Player	Frank {"Frank"};
	Player	Villain {"Villain", 100, 55};
	cout << Empty.GetHealth() << endl;
	cout << Empty.GetName() << endl;

	cout << Frank.GetName() << endl;
}

void	CopyConstructor()
{
	Player	Empty;
	Player	Frank {"Frank"};
	Player	Villain {"Villain", 100, 55};
	DisplayPlayer(Empty);
}

void	DisplayPlayer(Player Source)
{
	cout << "Name: " << Source.GetName() << endl;
	cout << "Health: " << Source.GetHealth() << endl;
	cout << "XP: " << Source.GetXP()<< endl;
}

void	ShallowCopy()
{
	Shallow Obj1 {100};
	DisplayShallow(Obj1);

	Shallow Obj2 {Obj1};
	Obj2.SetData(1000);
	DisplayShallow(Obj1);
}

void	DisplayShallow(Shallow Source)
{
	int	Address {Source.GetData()};
	cout << Source.GetData() << endl;
	cout << &Address << endl;
}

void	DeepCopy()
{
	Deep Obj1 {100};
	DisplayDeep(Obj1);

	Deep Obj2 {Obj1};
	Obj2.SetData(1000);
	DisplayDeep(Obj2);
	DisplayDeep(Obj1);
	DisplayDeep(Obj2);
}

void	DisplayDeep(Deep Source)
{
	int	Address = Source.GetData();
	cout << Source.GetData() << endl;
	cout << &Address << endl;
}

void	MoveConstructor()
{
	vector<Move> Vec;

	Vec.push_back(Move{10});
	Vec.push_back(Move{20});
	Vec.push_back(Move{30});
	Vec.push_back(Move{40});
	Vec.push_back(Move{50});
	Vec.push_back(Move{60});
	Vec.push_back(Move{70});
	Vec.push_back(Move{80});
}

void	ConstObject()
{
	const Player	Vallain {"Villain", 100, 0};
	cout << Vallain.GetHealth() << endl;
}

void	StaticClass()
{
	cout << Player::GetPlayerCount() << endl;
	Player	Player1;
	cout << Player::GetPlayerCount() << endl;
}
#include "../Includes/Header.h"

class	I_Print
{
	friend ostream	&operator<<(ostream &OS, const I_Print &Account);
	public:
	virtual void	Print(ostream &OS) const = 0;
};

ostream	&operator<<(ostream &OS, const I_Print &Account)
{
	Account.Print(OS);
	return OS;
}

class	AccountPoly : public I_Print
{
	public:
	virtual void	Withdraw(double WithdrawAmount)
	{
		cout << "In Account::Withdraw " << WithdrawAmount << endl;
	}
	virtual void	Print(ostream &OS) const
	{
		OS << "Account Account" << endl;
	}
	virtual ~AccountPoly() {}
};

class	CheckingPoly : public AccountPoly
{
	public:
	virtual void	Withdraw(double WithdrawAmount)
	{
		cout << "In Checking::Withdraw " << WithdrawAmount << endl;
	}
	virtual void	Print(ostream &OS) const
	{
		OS << "Checking Account" << endl;
	}
	virtual ~CheckingPoly() {}
};

class	SavingsPoly : public AccountPoly
{
	public:
	virtual void	Withdraw(double WithdrawAmount)
	{
		cout << "In Withdraw::Withdraw " << WithdrawAmount << endl;
	}
	virtual void	Print(ostream &OS) const
	{
		OS << "Savings Account" << endl;
	}
	virtual ~SavingsPoly() {}
};

class	TrustPoly : public AccountPoly
{
	public:
	virtual void	Withdraw(double WithdrawAmount)
	{
		cout << "In Trust::Withdraw " << WithdrawAmount << endl;
	}
	virtual void	Print(ostream &OS) const
	{
		OS << "Trust Account" << endl;
	}
	virtual ~TrustPoly() {}
};

void	Polymorphism()
{
	AccountPoly	*P1 = new AccountPoly();
	AccountPoly	*P2 = new CheckingPoly();
	AccountPoly	*P3 = new SavingsPoly();
	AccountPoly	*P4 = new TrustPoly();

	cout << endl;

	P1->Withdraw(100);
	P2->Withdraw(100);
	P3->Withdraw(100);
	P4->Withdraw(100);

	delete P1;
	delete P2;
	delete P3;
	delete P4;
}

class	BasePoly
{
	public:
	virtual void	SayHello() const
	{
		cout << "Hello - I am the Base Object" << endl;
	}
	virtual 		~BasePoly() {}
};

class	DerivedPoly : public BasePoly
{
	public:
	virtual void	SayHello() const override
	{
		cout << "Hello - I am the Derived Object" << endl;
	}
	virtual			~DerivedPoly() {}
};

void	Override()
{
	BasePoly *P1 = new BasePoly;
	BasePoly *P2 = new DerivedPoly;

	P1->SayHello();
	P2->SayHello();
}

void	DoWithdraw(AccountPoly &Acc, double WithdrawAmount)
{
	Acc.Withdraw(WithdrawAmount);
}

void	BaseClassReference()
{
	AccountPoly A;
	AccountPoly &Ref_0 = A;
	Ref_0.Withdraw(1000);

	TrustPoly B;
	TrustPoly &Ref_1 = B;
	Ref_1.Withdraw(1000);

	AccountPoly		A1;
	CheckingPoly	A2;
	SavingsPoly		A3;
	TrustPoly		A4;

	DoWithdraw(A1, 1000);
	DoWithdraw(A2, 1000);
	DoWithdraw(A3, 1000);
	DoWithdraw(A4, 1000);
}

class	I_Shapes
{
	public:
	virtual void	Draw() = 0;
	virtual void	Rotate() = 0;
	virtual			~I_Shapes() {}
};

class	OpenShapes : public I_Shapes
{
	public:
	virtual			~OpenShapes() {}
};

class	ClosedShapes : public I_Shapes
{
	public:
	virtual			~ClosedShapes() {}
};

class	Line : public OpenShapes
{
	public:
	virtual void	Draw() override
	{
		cout << "Drawing a Line" << endl;
	}
	virtual void	Rotate() override
	{
		cout << "Rotating a line" << endl;
	}
	virtual ~Line() {}
};

class	Circle : public ClosedShapes
{
	public:
	virtual void	Draw() override
	{
		cout << "Drawing a Circle" << endl;
	}
	virtual void	Rotate() override
	{
		cout << "Rotating a Circle" << endl;
	}
	virtual ~Circle() {}
};

class	Square : public ClosedShapes
{
	public:
	virtual void	Draw() override
	{
		cout << "Drawing a Square" << endl;
	}
	virtual void	Rotate() override
	{
		cout << "Rotating a Square" << endl;
	}
	virtual ~Square() {}
};

void	PureVirtual()
{
	I_Shapes	*S1 = new Line;
	I_Shapes	*S2 = new Circle;
	I_Shapes	*S3 = new Square;

	S1->Draw();
	S2->Draw();
	S3->Draw();

	vector<I_Shapes *> Shapes {S1, S2, S3};

	for (const auto &Shape : Shapes)
		Shape->Draw();

	delete S1;
	delete S2;
	delete S3;
	cout << "=======================" << endl;
}

void	Interface()
{
	AccountPoly	*A1 = new AccountPoly;
	AccountPoly	*A2 = new CheckingPoly;
	AccountPoly	*A3 = new SavingsPoly;
	AccountPoly	*A4 = new TrustPoly;

	cout << *A1 << endl;
	cout << *A2 << endl;
	cout << *A3 << endl;
	cout << *A4 << endl;
}

void	PolymorphismChallenge()
{
	cout << "\nCheck 'Section16Challenge' Directory" << endl << endl;
}

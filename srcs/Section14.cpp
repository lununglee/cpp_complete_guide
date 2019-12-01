#include "../Includes/Header.h"

void	OverloadingOperator()
{
	MyString Empty;
	MyString Larry {"Larry"};
	MyString Stooges {Larry};

	Empty.Display();
	Larry.Display();
	Stooges.Display();
}

void	OverloadingOperatorCopy()
{
	MyString A {"Hello"};
	MyString B;

	B = A;
	B = "This is a test";
}

void	OverloadingOperatorMove()
{
	MyString A {"Hello"};
	A = MyString {"Hola"};
	A = "Bonjour";
}

void	OverloadingOperatorUnary()
{
	MyString	Larry1 {"LARRY"};
	MyString	Larry2;
	
	Larry1.Display();

	Larry2 = -Larry1;
	Larry2.Display();

}

void	OverloadingOperatorBinary()
{
	MyString Larry1 {"LARRY"};
	MyString Larry2 {"LARRY"};
	if (Larry1 == Larry2)
		cout << "They're the same!";
}

void	OverloadingOperatorConcatenate()
{
	MyString Larry1 {"Larry"};
	MyString Larry2 {" is a handsome lad"};
	MyString Larry3;

	Larry3 = Larry1 + Larry2;
	Larry3.Display();
}

void	OverloadingOperatorGlobal()
{
	MyString Larry1 {"Larry"};
	MyString Larry2 {" is a handsome lad"};
	MyString Larry3;

	Larry3 = Larry1 + Larry2;
	Larry3.Display();
}

void	OverloadingOperatorStream()
{
	MyString Larry {"Larry"};
	MyString Moe {"Moe"};
	MyString Curly;

	cout << "Enter the third stooge's name: ";
	cin >> Curly;

	cout << "The three stooges are " << Larry << ", " << Moe << ", and " << Curly << endl;

	cout << "\nPlease enter the three stooges names separated by a space: ";
	cin >> Larry >> Moe >> Curly;
	cout << "The three stooges are " << Larry << ", " << Moe << ", and " << Curly << endl;
}

void	OverloadingOperatorChallenge()
{
	MSC A {"Frank"};
	MSC B {"Frank"};
	MSC C;

	cout << boolalpha;
	cout << (A == B) << endl;
	cout << (A != B) << endl << endl;

	B = "George";
	cout << (A == B) << endl;
	cout << (A != B) << endl;
	cout << (A < B) << endl;
	cout << (A > B) << endl << endl;

	cout << A << endl;
	A = -A;
	cout << A << endl << endl;

	A++;
	cout << A << endl << endl;

	A = A + "*****";
	cout << A << endl << endl;

	A += "--------";
	cout << A << endl << endl;

	A *= 3;
	cout << A << endl << endl;

	C = A + B;
	cout << C << endl;
}

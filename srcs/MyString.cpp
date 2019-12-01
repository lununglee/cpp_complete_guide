#include "../Includes/MyString.h"

/*********************************
*          Constructors          *
*********************************/

MyString::MyString()
: Str {nullptr}
{
	Str = new char [1];
	*Str = '\0';
}

MyString::MyString(const char *Source)
: Str {nullptr}
{
	if (Source == nullptr)
	{
		Str = new char [1];
		*Str = '\0';
	}
	else
	{
		Str = new char [strlen(Source) + 1];
		strcpy(Str, Source);
	}
}

/*********************************
*             Copier             *
*********************************/

MyString::MyString(const MyString &Source)
: Str {nullptr}
{
	Str = new char[strlen(Source.Str) + 1];
	strcpy(Str, Source.Str);
}

/*********************************
*             Mover              *
*********************************/

MyString::MyString(MyString &&Source)
: Str {Source.Str}
{
	Source.Str = nullptr;
	cout << "Move constructor used" << endl;
}

/*********************************
*           Destructors          *
*********************************/

MyString::~MyString()
{ delete [] Str; }

/*********************************
*            Setters             *
*********************************/


/*********************************
*            Getters             *
*********************************/

void		MyString::Display() const
{
	cout << Str << ": " << GetLength() << endl;
}

int			MyString::GetLength() const
{
	return strlen(Str);
}

const char	*MyString::GetString() const
{
	return Str;
}

/*********************************
*           Overloader           *
*********************************/

MyString	&MyString::operator=(const MyString &Source)
{
	cout << "Overloading Copy Assignment" << endl;
	if (this == &Source)
		return *this;
	else
	{
		delete [] this->Str;
		Str = new char [strlen(Source.Str) + 1];
		strcpy(this->Str, Source.Str);
		return *this;
	}
}

MyString	&MyString::operator=(MyString &&Source)
{
	cout << "Overloading Move Assignment" << endl;
	if (this == &Source)
		return *this;
	else
	{
		delete [] this->Str;
		this->Str = Source.Str;
		Source.Str = nullptr;
		return *this;
	}
}

MyString	MyString::operator-() const
{
	char		*Buffer = new char [strlen(Str) + 1];
	strcpy(Buffer, Str);
	for (size_t Counter {0}; Counter < strlen(Str); Counter++)
		Buffer[Counter] = tolower(Buffer[Counter]);
	MyString	Temp {Buffer};
	delete [] Buffer;
	return Temp;
}

MyString	MyString::operator+(const MyString &Source) const
{
	char	*Buffer = new char [strlen(Source.Str) + strlen(Str) + 1];
	strcpy(Buffer, Str);
	strcat(Buffer, Source.Str);
	MyString Temp {Buffer};
	delete [] Buffer;
	return Temp;
}

bool		MyString::operator==(const MyString &Source) const
{
	if (strcmp(Str, Source.Str) == 0)
		return true;
	return false;
}

/*********************************
*            Friends             *
*********************************/

// MyString	operator-(const MyString &Source)
// {
// 	char		*Buffer = new char [strlen(Source.Str) + 1];
// 	strcpy(Buffer, Source.Str);
// 	for (size_t Counter {0}; Counter < strlen(Source.Str); Counter++)
// 		Buffer[Counter] = tolower(Buffer[Counter]);
// 	MyString	Temp {Buffer};	
// 	delete [] Buffer;
// 	return Temp;
// }

// MyString	operator+(const MyString &Target, const MyString &Source)
// {
// 	char	*Buffer = new char [strlen(Source.Str) + strlen(Target.Str) + 1];
// 	strcpy(Buffer, Target.Str);
// 	strcat(Buffer, Source.Str);
// 	MyString Temp {Buffer};
// 	delete [] Buffer;
// 	return Temp;
// }

// bool		operator==(const MyString &Target, const MyString &Source)
// {
// 	if (strcmp(Target.Str, Source.Str) == 0)
// 		return true;
// 	return false;
// }

ostream		&operator<<(ostream &OS, const MyString &Source)
{
	OS << Source.Str;
	return OS;
}

istream		&operator>>(istream &IS, MyString &Target)
{
	char *Buffer = new char [1000];
	IS >> Buffer;
	Target = MyString {Buffer}; // uses move constructor
	delete [] Buffer;
	return IS;
}
#include "../Includes/MSC.h"

/*********************************
*          Constructors          *
*********************************/

MSC::MSC()
: Str {nullptr}
{
	Str = new char [1];
	*Str = '\0';
}
MSC::MSC(const char *Source)
: Str {nullptr}
{
	Str = new char [strlen(Source) + 1];
	strcpy(Str, Source);
}

/*********************************
*             Copier             *
*********************************/
MSC::MSC(const MSC &Source)
: Str {nullptr}
{
	Str = new char [strlen(Source.Str) + 1];
	strcpy(Str, Source.Str);
}

/*********************************
*             Mover              *
*********************************/

MSC::MSC(MSC &&Source)
: Str {Source.Str}
{
	Source.Str = nullptr;
}

/*********************************
*           Overloader           *
*********************************/
MSC			&MSC::operator=(const MSC &Source)
{
	if (this == &Source)
		return *this;
	else
	{
		delete [] Str;
		Str = new char [strlen(Source.Str) + 1];
		strcpy(Str, Source.Str);
		return *this;
	}
}
MSC			&MSC::operator=(MSC &&Source)
{
	if (this == &Source)
		return *this;
	else
	{
		delete [] Str;
		Str = Source.Str;
		Source.Str = nullptr;
		return *this;
	}
}

ostream		&operator<<(ostream &OS, const MSC &Source)
{
	OS << Source.Str;
	return OS;
}
istream		&operator>>(istream &IS, MSC &Source)
{
	char *Buffer = new char [1000];
	IS >> Buffer;
	Source = MSC {Buffer}; // uses move constructor
	delete [] Buffer;
	return IS;
}
MSC			MSC::operator-()
{
	char	*Buffer = new char [1000];
	strcpy(Buffer, Str);
	for (size_t Counter {0}; Counter < strlen(Buffer); Counter++)
		Buffer[Counter] = tolower(Buffer[Counter]);
	MSC Temp {Buffer};
	delete [] Buffer;
	return Temp;
}

MSC			MSC::operator+(const MSC &Source)
{
	char	*Buffer = new char [strlen(Str) + strlen(Source.Str) + 1];
	strcpy(Buffer, Str);
	strcat(Buffer, Source.Str);
	MSC Temp {Buffer};
	delete [] Buffer;
	return Temp;
}
MSC			&MSC::operator+=(const MSC &Source)
{
	// char	*Buffer = new char [strlen(Str) + strlen(Source.Str) + 1];
	// strcpy(Buffer, Str);
	// strcat(Buffer, Source.Str);
	// MSC Temp {Buffer};
	// delete [] Buffer;
	// *this = Temp;
	// return *this;
	*this = *this + Source;
	return *this;
}

MSC			MSC::operator*(size_t Number)
{
	// char	*Buffer = new char [(strlen(Str) * Number) + 1];
	// strcpy(Buffer, Str);
	// while (Number > 1)
	// {
	// 	strcat(Buffer, Str);
	// 	Number--;
	// }
	// MSC Temp {Buffer};
	// delete [] Buffer;
	// return Temp;
	MSC Temp;
	for (size_t Counter {0}; Counter <= Number; Counter++)
		Temp = Temp + *this;
	return Temp;
}

MSC			&MSC::operator*=(size_t Number)
{
	// char	*Buffer = new char [(strlen(Str) * Number) + 1];
	// strcpy(Buffer, Str);
	// while (Number > 1)
	// {
	// 	strcat(Buffer, Str);
	// 	Number--;
	// }
	// MSC	Temp {Buffer};
	// *this = Temp;
	// return *this;
	*this = *this * Number;
	return *this;
}

bool		MSC::operator==(const MSC &Source) const
{
	return (strcmp(Str, Source.Str) == 0);
}
bool		MSC::operator!=(const MSC &Source) const
{
	return (strcmp(Str, Source.Str) != 0);
}
bool		MSC::operator<(const MSC &Source) const
{
	return (strcmp(Str, Source.Str) < 0);
}
bool		MSC::operator>(const MSC &Source) const
{
	return (strcmp(Str, Source.Str) > 0);
}

/*********************************
*           Destructor           *
*********************************/

MSC::~MSC()
{ delete [] Str; }

/*********************************
*            Setters             *
*********************************/

/*********************************
*            Getters             *
*********************************/

void		MSC::Display() const
{
	cout << Str << ": " << GetLength() << endl;
}
size_t		MSC::GetLength() const
{
	return strlen(Str);
}
const char *MSC::GetString() const
{
	return Str;
}

MSC			&MSC::operator++()
{
	for (size_t Counter {0}; Counter < strlen(Str); Counter++)
		Str[Counter] = toupper(Str[Counter]);
	return *this;
}

MSC			MSC::operator++(int)
{
	MSC Temp {*this};
	operator++();
	return Temp;
}

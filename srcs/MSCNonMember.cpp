// #include "../Includes/MSCNonMember.h"

// /*********************************
// *          Constructors          *
// *********************************/

// MSCNonMember::MSCNonMember()
// : Str {nullptr}
// {
// 	Str = new char [1];
// 	*Str = '\0';
// }
// MSCNonMember::MSCNonMember(const char *Source)
// : Str {nullptr}
// {
// 	Str = new char [strlen(Source) + 1];
// 	strcpy(Str, Source);
// }

// /*********************************
// *             Copier             *
// *********************************/
// MSCNonMember::MSCNonMember(const MSCNonMember &Source)
// : Str {nullptr}
// {
// 	Str = new char [strlen(Source.Str) + 1];
// 	strcpy(Str, Source.Str);
// }

// /*********************************
// *             Mover              *
// *********************************/

// MSCNonMember::MSCNonMember(MSCNonMember &&Source)
// : Str {Source.Str}
// {
// 	Source.Str = nullptr;
// }

// /*********************************
// *           Overloader           *
// *********************************/

// MSCNonMember			&MSCNonMember::operator=(const MSCNonMember &Source)
// {
// 	if (this == &Source)
// 		return *this;
// 	else
// 	{
// 		delete [] Str;
// 		Str = new char [strlen(Source.Str) + 1];
// 		strcpy(Str, Source.Str);
// 		return *this;
// 	}
// }
// MSCNonMember			&MSCNonMember::operator=(MSCNonMember &&Source)
// {
// 	if (this == &Source)
// 		return *this;
// 	else
// 	{
// 		delete [] Str;
// 		Str = Source.Str;
// 		Source.Str = nullptr;
// 		return *this;
// 	}
// }

// ostream		&operator<<(ostream &OS, const MSCNonMember &Source)
// {
// 	OS << Source.Str;
// 	return OS;
// }
// istream		&operator>>(istream &IS, MSCNonMember &Source)
// {
// 	char *Buffer = new char [1000];
// 	IS >> Buffer;
// 	Source = MSCNonMember {Buffer}; // uses move constructor
// 	delete [] Buffer;
// 	return IS;
// }
// MSCNonMember			operator-(const MSCNonMember Object)
// {
// 	char	*Buffer = new char [1000];
// 	strcpy(Buffer, Object.Str);
// 	for (size_t Counter {0}; Counter < strlen(Buffer); Counter++)
// 		Buffer[Counter] = tolower(Buffer[Counter]);
// 	MSCNonMember Temp {Buffer};
// 	delete [] Buffer;
// 	return Temp;
// }

// MSCNonMember			operator+(const MSCNonMember Object, const MSCNonMember &Source)
// {
// 	char	*Buffer = new char [strlen(Object.Str) + strlen(Source.Str) + 1];
// 	strcpy(Buffer, Object.Str);
// 	strcat(Buffer, Source.Str);
// 	MSCNonMember Temp {Buffer};
// 	delete [] Buffer;
// 	return Temp;
// }
// MSCNonMember			&operator+=(MSCNonMember Object, const MSCNonMember &Source)
// {
// 	// char	*Buffer = new char [strlen(Object.Str) + strlen(Source.Str) + 1];
// 	// strcpy(Buffer, Object.Str);
// 	// strcat(Buffer, Source.Str);
// 	// MSCNonMember Temp {Buffer};
// 	// delete [] Buffer;
// 	// Object = Temp;
// 	// return Object;
// 	Object = Object + Source;
// 	return Object;
// }

// MSCNonMember			operator*(const MSCNonMember Object, size_t Number)
// {
// 	// char	*Buffer = new char [(strlen(Str) * Number) + 1];
// 	// strcpy(Buffer, Str);
// 	// while (Number > 1)
// 	// {
// 	// 	strcat(Buffer, Str);
// 	// 	Number--;
// 	// }
// 	// MSCNonMember Temp {Buffer};
// 	// delete [] Buffer;
// 	// return Temp;
// 	MSCNonMember Temp;
// 	for (size_t Counter {0}; Counter <= Number; Counter++)
// 		Temp = Temp + Object;
// 	return Temp;
// }

// MSCNonMember			&operator*=(MSCNonMember Object, size_t Number)
// {
// 	// char	*Buffer = new char [(strlen(Str) * Number) + 1];
// 	// strcpy(Buffer, Str);
// 	// while (Number > 1)
// 	// {
// 	// 	strcat(Buffer, Str);
// 	// 	Number--;
// 	// }
// 	// MSCNonMember	Temp {Buffer};
// 	// *Object = Temp;
// 	// return *Object;
// 	MSCNonMember Temp {Object};
// 	Temp = Object * Number;
// 	Object = Temp;
// 	return Object;
// }

// bool		operator==(const MSCNonMember Object, const MSCNonMember &Source)
// {
// 	return (strcmp(Object.Str, Source.Str) == 0);
// }
// bool		operator!=(const MSCNonMember Object, const MSCNonMember &Source)
// {
// 	return (strcmp(Object.Str, Source.Str) != 0);
// }
// bool		operator<(const MSCNonMember Object, const MSCNonMember &Source)
// {
// 	return (strcmp(Object.Str, Source.Str) < 0);
// }
// bool		operator>(const MSCNonMember Object, const MSCNonMember &Source)
// {
// 	return (strcmp(Object.Str, Source.Str) > 0);
// }

// MSCNonMember			&operator++(MSCNonMember Object)
// {
// 	for (size_t Counter {0}; Counter < strlen(Object.Str); Counter++)
// 		Object.Str[Counter] = toupper(Object.Str[Counter]);
// 	return Object;
// }

// MSCNonMember			operator++(const MSCNonMember Object, int)
// {
// 	MSCNonMember Temp {Object};
// 	operator++(Object);
// 	return Temp;
// }

// /*********************************
// *           Destructor           *
// *********************************/

// MSCNonMember::~MSCNonMember()
// { delete [] Str; }

// /*********************************
// *            Setters             *
// *********************************/

// /*********************************
// *            Getters             *
// *********************************/

// void		MSCNonMember::Display() const
// {
// 	cout << Str << ": " << GetLength() << endl;
// }
// size_t		MSCNonMember::GetLength() const
// {
// 	return strlen(Str);
// }
// const char *MSCNonMember::GetString() const
// {
// 	return Str;
// }

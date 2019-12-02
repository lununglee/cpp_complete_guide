#ifndef _MYSTRING_H_
#define _MYSTRING_H_

#include <iostream>
using std::cout;
using std::endl;
using std::ostream;
using std::istream;

class MyString
{
	private:
	char	*Str;

	public:
	// Constructor
	MyString();
	MyString(const char *Source);
	// Copier
	MyString(const MyString &Source);
	// Mover
	MyString(MyString &&Source);
	// Destructor
	~MyString();
	// Setter
	// Getter
	void		Display() const;
	int			GetLength() const;
	const char	*GetString() const;
	// Overloader
	MyString	&operator=(const MyString &Source);
	MyString	&operator=(MyString &&Source);
	MyString	operator-() const;
	MyString	operator+(const MyString &Source) const;
	bool		operator==(const MyString &Source) const;
	
	// friend MyString	operator-(const MyString &Source);
	// friend MyString	operator+(const MyString &Target, const MyString &Source);
	// friend bool		operator==(const MyString &Target, const MyString &Source);
	friend ostream	&operator<<(ostream &OS, const MyString &Source);
	friend istream	&operator>>(istream &IS, MyString &Target);
};

#endif

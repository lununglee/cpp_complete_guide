#ifndef _MSCHALLENGE_H_
#define _MSCHALLENGE_H_

#include "Header.h"

class MSC
{
	private:
	char	*Str;

	public:
	// Constructors
	MSC();
	MSC(const char *Source);
	// Copier
	MSC(const MSC &Source);
	// Mover
	MSC(MSC &&Source);
	// Overloader
	MSC					&operator=(const MSC &Source);
	MSC					&operator=(MSC &&Source);
	friend ostream		&operator<<(ostream &OS, const MSC &Source);
	friend istream		&operator>>(istream &IS, MSC &Source);
	MSC					operator-();
	MSC					operator+(const MSC &Source);
	MSC					&operator+=(const MSC &Source);
	MSC					operator*(size_t Number);	
	MSC					&operator*=(size_t Number);
	bool				operator==(const MSC &Source) const;
	bool				operator!=(const MSC &Source) const;
	bool				operator<(const MSC &Source) const;
	bool				operator>(const MSC &Source) const;
	MSC					&operator++();
	MSC					operator++(int);
	// Destructor
	~MSC();
	// Setters
	void		SetString(const char &Source);
	// Getters
	void		Display() const;
	size_t		GetLength() const;
	const char *GetString() const;
};

#endif

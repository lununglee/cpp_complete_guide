// #ifndef _MSCHALLENGE_H_
// #define _MSCHALLENGE_H_

// class MSCNonMember
// {
// 	private:
// 	char	*Str;

// 	public:
// 	// Constructors
// 	MSCNonMember();
// 	MSCNonMember(const char *Source);
// 	// Copier
// 	MSCNonMember(const MSCNonMember &Source);
// 	// Mover
// 	MSCNonMember(MSCNonMember &&Source);
// 	// Overloader
// 	MSCNonMember	&operator=(const MSCNonMember &Source);
// 	MSCNonMember	&operator=(MSCNonMember &&Source);
// 	friend ostream		&operator<<(ostream &OS, const MSCNonMember &Source);
// 	friend istream		&operator>>(istream &IS, MSCNonMember &Source);
// 	friend MSCNonMember	operator-(const MSCNonMember Object);
// 	friend MSCNonMember	operator+(const MSCNonMember Object, const MSCNonMember &Source);
// 	friend MSCNonMember	&operator+=(MSCNonMember Object, const MSCNonMember &Source);
// 	friend MSCNonMember	operator*(const MSCNonMember Object, size_t Number);	
// 	friend MSCNonMember	&operator*=(MSCNonMember Object, size_t Number);
// 	friend bool			operator==(const MSCNonMember Object, const MSCNonMember &Source);
// 	friend bool			operator!=(const MSCNonMember Object, const MSCNonMember &Source);
// 	friend bool			operator<(const MSCNonMember Object, const MSCNonMember &Source);
// 	friend bool			operator>(const MSCNonMember Object, const MSCNonMember &Source);
// 	friend MSCNonMember	&operator++(MSCNonMember Object);
// 	friend MSCNonMember	operator++(MSCNonMember Object, int);
// 	// Destructor
// 	~MSCNonMember();
// 	// Setters
// 	void		SetString(const char &Source);
// 	// Getters
// 	void		Display() const;
// 	size_t		GetLength() const;
// 	const char *GetString() const;
// };

// #endif

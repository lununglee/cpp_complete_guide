#include "../Includes/Header.h"

void	CStrings()
{
	char first_name[20];
	char last_name[20] {};
	char full_name[50] {};
	char temp[50] {};

	cout << first_name; // Will likely display garbage!

	cout << "Please enter your first name: ";
	cin >> first_name;

	cout << "Please enter your last name: ";
	cin >> last_name;
	cout << "-------------------------------" << endl; 

	cout << "Hello, " << first_name << " your first name has " << strlen(first_name) << " characters" << endl;
	cout << "and your last name, " << last_name << " has " << strlen(last_name) << " characters" << endl;

	strcpy(full_name, first_name);	// copy first_name to full_name
	strcat(full_name, " ");			// concatenate full_name and a space
	strcat(full_name, last_name);	// concatenate last_name to full_name
	cout << "Your full name is " << full_name << endl;

	cout << "-------------------------------" << endl;
	cout << "Enter your full name: ";
	cin >> full_name;

	cout << "Your full name is " << full_name << endl;

	cout << "Enter your full name: ";
	cin.getline(full_name, 50);
	cout << "Your full name is " << full_name << endl;

	cout << "-------------------------------" << endl;
	strcpy(temp, full_name);
	if(strcmp(temp, full_name) == 0)
		cout << temp << " and " << full_name << " are the same" << endl;
	else
		cout << temp << " and " << full_name << " are different" << endl;

	cout << "-------------------------------" << endl;
	

	for(size_t i{ 0 }; i < strlen(full_name); ++i)
		if (isalpha(full_name[i]))
			full_name[i] = toupper(full_name[i]);

	cout << "Your full name is " << full_name << endl;


	cout << "-------------------------------" << endl;
	if(strcmp(temp, full_name) == 0)
		cout << temp << " and " << full_name << " are the same" << endl;
	else
		cout << temp << " and " << full_name << " are different" << endl;

	cout << "-------------------------------" << endl;
	cout << "Result of comparing " << temp << " and " <<  full_name <<  ": " << strcmp(temp, full_name) << endl;
	cout << "Result of comparing " << full_name << " and " <<  temp <<  ": " << strcmp(full_name, temp) << endl;

	cout  << endl;
}

void	CharFunctions()
{
	char	Str[] {"1234'5sddd'fdffg\n\t&^%23**~Frank Mary~     @!()-+=%^?<>;:"};
	int		NumLetters {};
	int		NumDigits {};
	int		NumWhitespace {};
	int		NumPunctuation {};
	int		NumOthers {};
	
	for (char c: Str) {
		if (isalpha(c))
			NumLetters++;
		else if (isdigit(c))
			NumDigits++;
		else if (isspace(c))
			NumWhitespace++;
		else if (ispunct(c))
			NumPunctuation++;
		else
			NumOthers++;
	}
	
	cout << "Letters : " << NumLetters << endl;
	cout << "Digits: " << NumDigits << endl;
	cout << "Whitespace: " << NumWhitespace << endl;
	cout << "Punctuation: " << NumPunctuation << endl;
	cout << "Others: " << NumOthers << endl;
	
	cout << endl;
	
	char str1 [] {"This is a test - 1 2 3"};
	for (char c: str1) {
		cout << static_cast<char>(toupper(c));
	}
	cout << endl;
}

void	CppStrings()
{
	// string	S1;
	// string	S2 {"Frank"};
	// string	S3 {S2};
	// string	S4 {"Frank", 3};
	// string	S5 {S3, 0, 2};
	// string	S6 (3, 'X');

	// string	C1 {"C++ Rocks!"};
	// string	C2 {"Hello"};
	// C2 = C1;

	// string	Part1 {"C++"};
	// string	Part2 {"is a powerful"};
	// string	Sentence {Part1 + " " + Part2 + " langauge"};
	// cout << Sentence << endl;

	// string S0 {};
	// string S1 {"Apple"};
	// string S2 {"Banana"};
	// string S3 {"Kiwi"};
	// string S4 {"apple"};
	// string S5 {S1};			// Apple
	// string S6 {S1, 0, 3};	// App
	// string S7 (10, 'X');	// XXXXXXXXXX
	// string S8 {"This is a test :)"};
	// string S9 {"The secret word is bruv"};

	// cout << S0 << endl;
	// cout << S0.length() << endl;

	// cout << "S0 is initialized to " << S0 << endl;
	// cout << "S1 is initialized to " << S1 << endl;
	// cout << "S2 is initialized to " << S2 << endl;
	// cout << "S3 is initialized to " << S3 << endl;
	// cout << "S4 is initialized to " << S4 << endl;
	// cout << "S5 is initialized to " << S5 << endl;
	// cout << "S6 is initialized to " << S6 << endl;
	// cout << "S7 is initialized to " << S7 << endl;

	// for (size_t i {0}; i < S1.length(); i++)
	// 	cout << S1.at(i);
	// cout << endl;

	// for (auto Char : S1)
	// 	cout << Char;
	// cout << endl;

	// cout << S8.substr(5, 2) << endl;

	// cout << "Enter the word to find: ";
	// string Word{};
	// cin >> Word;

	// size_t Position = S9.find(Word);
	// if (Position != string::npos)
	// 	cout << "Found " << Word << " at position: " << Position << endl;
	// else
	// 	cout << "Sorry, " << Word << " not found." << endl;
}

void	CppStringChallenge()
{

	string	Message {};
	string	EncryptedMessage {};
	string	DecryptedMessage {};
	getline(cin, Message);
	cout << "Original Message: " << Message << endl;
	string	Alphabets {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	string	Keys {"JKLMNOPnopqrsABCwxyzQRSTUVbcdefDWXYZaEFGHItuvghijklm"};

	for (size_t i {0}; i < Message.length(); i++)
	{
		for (size_t j {0}; j < Alphabets.length(); j++)
		{
			if (Message[i] == Alphabets[j])
			{
				Message[i] = Keys[j];
				break;
			}
		}
	}

	cout << "\nEncrypted Message: " << Message << endl;
	for (size_t i {0}; i < Message.length(); i++)
	{
		for (size_t j {0}; j < Keys.length(); j++)
		{
			if (Message[i] == Keys[j])
			{
				Message[i] = Alphabets[j];
				break;
			}
		}
	}

	cout << "Decrypted Message: " << Message << endl;

	for (auto Char : Message)
	{
		size_t Position {Alphabets.find(Char)};
		if (Position != string::npos)
		{
			char new_char {Keys.at(Position)};
			EncryptedMessage += new_char;
		}
		else
		{
			EncryptedMessage += Char;
		}
	}

	cout << "Encrypted Message: " << EncryptedMessage << endl;

	// for (auto Char : Message)
	// {
	// 	size_t Position {Keys.find(Char)};
	// 	if (Position != string::npos)
	// 	{
	// 		char new_char {Alphabets.at(Position)};
	// 		DecryptedMessage += new_char;
	// 	}
	// 	else
	// 	{
	// 		DecryptedMessage += Char;
	// 	}
	// }
	// cout << "Decrypted Message: " << Message << endl;
}

#include "../includes/Header.h"

void	CStrings()
{
	// char	LastName[20] {};
	// char	FirstName[20] {};
	char	FullName[20] {};
	char	Temp[50] {};

	// cout << "Please enter your first name: ";
	// cin >> FirstName;
	// cout << "Please enter your last name ";
	// cin >> LastName;

	// cout << "Hello, " << FirstName << ". Your first name has " << strlen(FirstName) << " characters." << endl;
	// cout << "And your last name has " << strlen(LastName) << " characters" << endl;

	// strcpy(FullName, LastName);
	// strcat(FullName, " ");
	// strcat(FullName, LastName);
	// cout << "Your full name is " << FullName << endl;
	
	cout << "What is your full name? ";
	// cin >> FullName;
	cin.getline(FullName, 50);
	cout << "Your full name is " << FullName << endl;

	strcpy(Temp, FullName);
	if (strcmp(Temp, FullName) == 0)
		cout << Temp << " and " << FullName << " are the same" << endl;
	else
		cout << Temp << " and " << FullName << " are different" << endl;
	for(size_t i {0}; i < strlen(FullName); i++)
		if (isalpha(FullName[i]))
			FullName[i] = toupper(FullName[i]);
	cout << "Your full name is " << FullName << endl;

	if (strcmp(Temp, FullName) == 0)
		cout << Temp << " and " << FullName << " are the same" << endl;
	else
		cout << Temp << " and " << FullName << " are different" << endl;
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


	string	Message {};
	string	EncryptedMessage {};
	string	DecryptedMessage {};
	getline(cin, Message);
	cout << "Original Message: " << Message << endl;
	string	Alphabets {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	string	Keys {"JKLMNOPnopqrsABCwxyzQRSTUVbcdefDWXYZaEFGHItuvghijklm"};

	// for (size_t i {0}; i < Message.length(); i++)
	// {
	// 	for (size_t j {0}; j < Alphabets.length(); j++)
	// 	{
	// 		if (Message[i] == Alphabets[j])
	// 		{
	// 			Message[i] = Keys[j];
	// 			break;
	// 		}
	// 	}
	// }
	// cout << "\nEncrypted Message: " << Message << endl;
	// for (size_t i {0}; i < Message.length(); i++)
	// {
	// 	for (size_t j {0}; j < Keys.length(); j++)
	// 	{
	// 		if (Message[i] == Keys[j])
	// 		{
	// 			Message[i] = Alphabets[j];
	// 			break;
	// 		}
	// 	}
	// }
	// cout << "Decrypted Message: " << Message << endl;

	// for (auto Char : Message)
	// {
	// 	size_t Position {Alphabets.find(Char)};
	// 	if (Position != string::npos)
	// 	{
	// 		char new_char {Keys.at(Position)};
	// 		EncryptedMessage += new_char;
	// 	}
	// 	else
	// 	{
	// 		EncryptedMessage += Char;
	// 	}
	// }
	// cout << "Encrypted Message: " << EncryptedMessage << endl;

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

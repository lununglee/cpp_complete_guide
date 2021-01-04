#include "../Includes/Header.h"

void	BoolIO()
{
	cout << "Default Bool: " << (10 == 10) << std::endl;
	cout << "Default Bool: " << (10 == 16) << std::endl << std::endl;

	cout << boolalpha; // setting this will affect ALL following couts

	cout << "boolalpha: " << (10 == 10) << std::endl;
	cout << "boolalpha: " << (10 == 16) << std::endl << std::endl;

	cout<< noboolalpha; // setting this will affect ALL following couts

	cout << "noboolalpha: " << (10 == 10) << std::endl;
	cout << "noboolalpha: " << (10 == 16) << std::endl << std::endl;

	std::cout.setf(std::ios::boolalpha); // same thing as boolalpha
	cout << "setf boolalpha: " << (10 == 10) << std::endl;
	cout << "setf boolalpha: " << (10 == 16) << std::endl << std::endl;

	std::cout << std::resetiosflags(std::ios::boolalpha); // reset to noboolapha
	cout << "reset boolalpha: " << (10 == 10) << std::endl;
	cout << "reset boolalpha: " << (10 == 16) << std::endl;
}

void	IntIO()
{
	int	Num {255};
	int	Num1 {255};
	int	Num2 {-255};

	std::cout << std::dec << Num << std::endl;
	std::cout << std::hex << Num << std::endl;
	std::cout << std::oct << Num << std::endl << std::endl;

	std::cout << std::showbase;
	std::cout << std::dec << Num << std::endl;
	std::cout << std::hex << Num << std::endl;
	std::cout << std::oct << Num << std::endl << std::endl;

	std::cout << std::noshowbase;
	std::cout << std::dec << std::showpos;
	std::cout << Num1 << std::endl;
	std::cout << Num2 << std::endl << std::endl;

	// Reset IO Flags
	std::cout << std::resetiosflags(std::ios::basefield);
	std::cout << std::resetiosflags(std::ios::showbase);
	std::cout << std::resetiosflags(std::ios::showpos);
	std::cout << std::resetiosflags(std::ios::uppercase);
}

void	FloatIO()
{
	double	Num {1234.5678};
	double	Num1 {123456789.987654321};

	std::cout << "Float's default precision is 6" << std::endl;
	std::cout << "Normal double:        " << Num << std::endl;
	std::cout << "Normal scientific:    " << Num1 << std::endl;
	std::cout << "Setprecision(9):      " << setprecision(9) << Num1 << std::endl;
	std::cout << "Setprecision(2):      " << setprecision(2) << std::scientific << Num1 << std::endl;
	std::cout << "Fixed:                " << fixed << Num1 << std::endl;
	std::cout << "Fixed + showpos:      " << fixed << std::showpos << Num1 << std::endl;
	std::cout << "Fixed + setprecision: " << fixed << std::noshowpos << setprecision(4) << Num1 << std::endl;
	std::cout << "Fixed + showpoint:    " << fixed << setprecision(15) << std::showpoint << Num1 << std::endl;

	std::cout << std::resetiosflags(std::ios::showpos);
	std::cout << std::resetiosflags(std::ios::scientific);
	std::cout << std::resetiosflags(std::ios::fixed);
	std::cout << setprecision(6);
	std::cout << Num << endl;
}

void	FormatIO()
{
	double		Num {1234.5678};
	std::string	Str {"Hello"};

	// setw() only affects next item
	// setfill() affects all

	std::cout << std::setw(10) << Num << std::setw(10) << Str << std::endl;
	std::cout << std::setfill('-') << std::setw(10) << Num << std::setfill('*') << std::setw(10) << Str << std::endl;
}

struct City {
	std::string				Name;
	long					Population;
	double					Cost;
};

// Assume each Country has at least 1 City
struct Country {
	std::string 			Name;
	std::vector<City>		Cities;
};

struct Tours {
	std::string				Title;
	std::vector<Country>	Countries;
};

void	IOChallenge_00()
{
Tours Tours
		{ "Tour Ticket Prices from Miami",
			{
				{
					"Colombia", { 
						{ "Bogota", 8778000, 400.98 },
						{ "Cali", 2401000, 424.12 },
						{ "Medellin", 2464000, 350.98 },
						{ "Cartagena", 972000, 345.34 } 
					},
				},
				{
					"Brazil", { 
						{ "Rio De Janiero", 13500000, 567.45 },
						{ "Sao Paulo", 11310000, 975.45 },
						{ "Salvador", 18234000, 855.99 }
					},
				},
				{
					"Chile", { 
						{ "Valdivia", 260000, 569.12 }, 
						{ "Santiago", 7040000, 520.00 }
				},
			},
				{ "Argentina", { 
					{ "Buenos Aires", 3010000, 723.77 } 
				} 
			},
		}
	};

	constexpr int	CountryWidth {12};
	constexpr int	CityWidth {15};
	constexpr int	PopWidth {14};
	constexpr int	CostWidth {10};

	// Unformatted display so you can see how to access the vector elements
	std::cout << Tours.Title << std::endl;
	std::cout << std::setw(CountryWidth) << std::left << "Country";
	std::cout << std::setw(CityWidth) << std::left << "City";
	std::cout << std::setw(PopWidth) << std::right << "Population";
	std::cout << std::setw(CostWidth) << std::right << "Cost" << std::endl;
	for (size_t i {0}; i < 64; i++)
		std::cout << "-";
	std::cout << std::endl;
	for(auto Country : Tours.Countries) {   // loop through the Countries
		std::cout << std::setw(CountryWidth) << std::left << Country.Name;
		for(size_t i {0}; i < Country.Cities.size(); i++) {       // loop through the cities for each country
			if (i != 0)
				for (size_t j {0}; j < CountryWidth; j++)
					std::cout << " ";
			std::cout << std::setw(CityWidth) << std::left << Country.Cities.at(i).Name 
						<< std::fixed << std::setprecision(2) << std::setw(PopWidth) << std::right << Country.Cities.at(i).Population 
						<< std::fixed << std::setprecision(2) << std::setw(CostWidth) << std::right << Country.Cities.at(i).Cost 
						<< std::endl;
		}
	}

	std::cout << std::endl << std::endl;
}

void	FileInIO()
{
	// opening and reading file
	// std::fstream File {"Test.txt", std::ios::in};

	// std::ifstream File {"../MyFile.txt"};

	std::ifstream File;
	std::string Filename;
	cin >> Filename;
	File.open(Filename);

	// opening and reading file in binary mode
	// std::fstream File {"../MyFile.txt", std::ios::in | std::ios::binary};

	// std::fstream File {"../MyFile.txt", std::ios::binary};

	// File.open(Filename, std::ios::binary);

	if (File.is_open()) // if (File)
		clog << "File is opened" << endl;
	else
	{
		cerr << "File is not opened" << endl;
		return ;
	}

	string	Name {};
	int		Num {};
	double	Total {};

	// Name
	File >> Name >> Num >> Total;
	std::cout << Name << endl << Num << endl << Total << endl;
	while (File >> Name >> Num >> Total)
	{
		std::cout << std::setw(10) << std::left << Name;
		std::cout << std::setw(10) << Num;
		std::cout << std::setw(10) << Total << endl;
	}
	
	// // Sonnet
	// string	Line {};
	// while (std::getline(File, Line))
	// 	std::cout << Line << endl;

	File.close(); // important
}

void	IOChallenge_01()
{
	string	AnswerKey {};
	string	Name {};
	string	Answer {};
	int		Score {};

	std::ifstream File {"response"};
	std::getline(File, AnswerKey);
	std::cout << std::setw(10) << std::left << "Student"
				<< std::setw(10) << std::right << "Score" << endl;
	for (size_t Counter {0}; Counter < 20; Counter++)
		std::cout << "-";
	std::cout << endl;
	while(File >> Name >> Answer)
	{
		Score = 0;
		std::cout << std::setw(10) << std::left << Name;
		for (size_t Counter {0}; Counter < AnswerKey.length(); Counter++)
		{
			if (Answer.at(Counter) == AnswerKey.at(Counter))
				Score++;
			else
				;
		}
		std::cout << std::setw(10) << std::right << Score << endl;
	}
}

bool	Find(string Word, string Key)
{
	size_t Found = Word.find(Key);
	if (Found == string::npos)
		return false;
	return true;
}

void	IOChallenge_02()
{
	string	Word {};
	string	Key {"Juliet"};
	size_t	Occurence {0};
	size_t	WordCount {0};

	std::ifstream File {"shakespeare"};
	while (File >> Word)
	{
		WordCount++;
		for (auto Char : Word)
			Char = tolower(Char);
		if (Find(Word, Key))
			Occurence++;
	}
	std::cout << WordCount << ": " << Occurence << endl;
	File.close();
}

void	FileOutIO()
{
	// // truncate when opening (discard content)
	// std::ofstream File {"test", std::ios::trunc};
	// // append to file on each write
	// std::ofstream File {"test", std::ios::app};
	// // seek tot end of stream when opening
	// std::ofstream File {"test", std::ios::ate};
	std::ofstream File {"output"};
	string	Line;
	getline(cin, Line);
	File << Line << endl;
	File.close();
}

void	IOChallenge_03()
{
	std::ifstream	FileIn {"shakespeare"};
	std::ofstream	FileOut {"shakespearenum"};

	string			Line {};
	size_t			LineNum {1};
	while (!FileIn.eof())
	{
		std::getline(FileIn, Line);
		FileOut << LineNum++ << "\t" << Line << endl;
	}
}

void	StringStream()
{
	// std::string	Name {};
	// int		Num {};
	// double	Total {};

	// std::string	Info {"Moe 100 1234.5"};
	// std::istringstream ISS {Info};

	// ISS >> Name >> Num >> Total;
	// cout << Name << " | " << Num << " | " << Total << endl;

	// std::ostringstream OSS {};
	// OSS << Name << Num << Total << endl;
	// cout << OSS.str() << endl;

	int		Value {};
	string	Entry {};
	bool	Done {false};
	do {
		std::cout << "Please enter number: ";
		cin >> Entry;
		std::istringstream Val {Entry};
		if (Val >> Value)
			Done = true;
		else
			cout << "Not an int";
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	} while (!Done);
}

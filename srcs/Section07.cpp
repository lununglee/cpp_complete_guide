#include "../Includes/Header.h"

void	Arrays()
{
	char Vowels[] {'a' ,'e', 'i', 'o', 'u' };
	cout << "\nThe first vowel is: " << Vowels[0] << endl;
	cout << "The last vowel is: " << Vowels[4] << endl;
	
//	cin >> Vowels[5];	out of bounds
	
	double HighTemps []  { 90.1, 89.8, 77.5, 81.6};
	cout << "\nThe first high temperature is: " << HighTemps[0] << endl;
	
	HighTemps[0] = 100.7;
	
	cout << "The first high temperature is now: " << HighTemps[0] << endl;

	int TestScores[] {100, 90, 80,70, 60};

	cout << "\nFirst score at index 0: " << TestScores[0] << endl;
	cout << "Second score at index 1: " << TestScores[1] << endl;
	cout << "Third score at index 2:  " << TestScores[2] << endl;
	cout << "Fourth score at index 3: " << TestScores[3] << endl;
	cout << "Fifth score at index 4: " << TestScores[4] << endl;
	
	cout << "\nEnter 5 test scores: ";
	cin >> TestScores[0];
	cin >> TestScores[1];
	cin >> TestScores[2];
	cin >> TestScores[3];
	cin >> TestScores[4];
	
	cout << "\nThe updated array is:" << endl;
	cout << "First score at index 0: " << TestScores[0] << endl;
	cout << "Second score at index 1: " << TestScores[1] << endl;
	cout << "Third score at index 2:  " << TestScores[2] << endl;
	cout << "Fourth score at index 3: " << TestScores[3] << endl;
	cout << "Fifth score at index 4: " << TestScores[4] << endl;
   

	cout << "\nNotice what the value of the array name is : " << TestScores << endl;

	cout << endl;
}

void	Vectors()
{
	/*****************************
	*       Character Type       *
	*****************************/
	vector<char>	Vowels {'a', 'e', 'i', 'o', 'u'};
	// vector<char>	Vowels		// empty
	// vector<char>	Vowels {5}	// 5 elements initialized to zero

	cout << Vowels.at(0) << endl;
	// cout << Vowels[0] << endl;	// same as statement above; range protected
	cout << Vowels.at(4) << endl;
	// cout << Vowels[4] << endl;	// same as statement above; range protected

	/*****************************
	*        Integer Type        *
	*****************************/
	vector<int>	TestScores {100, 98, 78};
	int			ScoreToAdd {0};
	// vector<int>	TestScores {3};		// 3 elements initialized to 0
	// vector<int>	TestScores (3,100);	// 3 elements initialized to 100

	cout << "========================================" << endl;
	cout << "Test scores using array syntax: " << endl << endl;
	for (size_t ScoreCounter {0}; ScoreCounter < 3; ScoreCounter++)
		cout << TestScores[ScoreCounter] << endl;
	// cout << TestScores[0] << endl;
	// cout << TestScores[1] << endl;
	// cout << TestScores[2] << endl;
	cout << "========================================" << endl;

	cout << "Test scores using vector syntax: " << endl << endl;
	for (size_t ScoreCounter {0}; ScoreCounter < 3; ScoreCounter++)
		cout << TestScores.at(ScoreCounter) << endl;
	// cout << TestScores.at(0) << endl;
	// cout << TestScores.at(1) << endl;
	// cout << TestScores.at(2) << endl;
	cout << "\nThere are " << TestScores.size() << " in this vector" << endl;
	cout << "========================================" << endl;

	cout << "Enter 3 test scores: ";
	for (size_t InputCounter {0}; InputCounter < 3; InputCounter++)
		cin >> TestScores.at(InputCounter);
	cout << "========================================" << endl;

	cout << "\nUpdated test scores: " << endl;
	for (size_t ScoreCounter {0}; ScoreCounter < 3; ScoreCounter++)
		cout << TestScores.at(ScoreCounter) << endl;
	cout << "========================================" << endl;

	cout << "\nEnter a test score to add (append) to vector: " << endl;
	cin >> ScoreToAdd;
	TestScores.push_back(ScoreToAdd);

	cout << "\nTest scores are now: " << endl;
	for (size_t ScoreCounter {0}; ScoreCounter < 4; ScoreCounter++)
		cout << TestScores.at(ScoreCounter) << endl;

	cout << "\nThere are now " << TestScores.size() << " scores in the vector" << endl;
	cout << "========================================" << endl;

	vector<vector<int>> MovieRatings
	{
		{1, 2, 3, 4},
		{1, 2, 4, 4},
		{1, 3, 5, 6}
	};
	for (size_t RowCounter {0}; RowCounter < 3; RowCounter++)
	{
		for (size_t ColumnCounter {0}; ColumnCounter < 4; ColumnCounter++)
		{
			cout << MovieRatings.at(RowCounter).at(ColumnCounter) << " ";
		}
		cout << endl;
	}
}


void	VectorChallenge()
{
	vector<int>			Vector01 {};
	vector<int>			Vector02 {};
	vector<vector<int>>	Vector2D {};

	Vector01.push_back(10);
	Vector01.push_back(20);

	cout << "\nThere are " << Vector01.size() << " elements in the vector" << endl;
	for (size_t Counter {0}; Counter < Vector01.size(); Counter++)
		cout << Vector01.at(Counter) << " ";
	cout << endl;

	Vector02.push_back(100);
	Vector02.push_back(200);

	cout << "\nThere are " << Vector02.size() << " elements in the vector" << endl;
	for (size_t Counter {0}; Counter < Vector02.size(); Counter++)
		cout << Vector02.at(Counter) << " ";
	cout << endl;

	Vector2D.push_back(Vector01);
	Vector2D.push_back(Vector02);

	Vector01.at(0) = 1000;

	cout << "\nThe outline of Vector2D is as follows:" << endl;
	for (size_t RowCounter {0}; RowCounter < 2; RowCounter++)
		for (size_t ColumnCounter {0}; ColumnCounter < 2;ColumnCounter++)
			cout << Vector2D.at(RowCounter).at(ColumnCounter) << " ";
	cout << endl;
}

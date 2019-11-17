#include "../includes/Header.h"

void	Arrays()
{
	char Vowels [] {'a', 'e', 'i', 'o', 'u'};
	cout << "First element of the array is: " << Vowels[0] << endl;
	cout << "Last element of the array is: " << Vowels[4] << endl;

	double HighTemps [] {98.1, 100.9, 77.5, 81.6};
	cout << "The first high temperature is " << HighTemps[0] << endl;
	HighTemps[0] = 100.8;
	cout << "The first high temperature is now " << HighTemps[0] << endl;

	int TestScores [5] {100, 90, 80, 70, 60};
	for (int i = 0; i < 5; i++)
		cin >> TestScores[i];
	cout << TestScores << endl;
}

void	Vectors()
{
	// vector <char> Vowels;
	// vector <char> Vowels (5);
	// vector <char> Vowels (5, 0);
	// vector <char> Vowels {'a', 'e', 'i', 'o', 'u'};
	// cout << "\nThe first character is: " << Vowels.at(0) << endl;
	// cout << "The last character is: " << Vowels.at(4) << endl;

	// vector <int> TestScores;
	// vector <int> TestScores (5);
	// vector <int> TestScores (5, 100);
	// vector <int> TestScores {100, 89, 98, 84, 93};
	// TestScores.push_back(65); // add another score of 65 to the end of TestScores
	// for (unsigned long i = 0; i < TestScores.size(); i++)
	// 	cout << TestScores.at(i) << endl;
	// for (unsigned long i = 0; i < TestScores.size(); i++)
	// 	cin >> TestScores.at(i);
	// for (unsigned long i = 0; i < TestScores.size(); i++)
	// 	cout << TestScores.at(i) << endl;

	// int ScoreToAdd {0};
	// cin >> ScoreToAdd;
	// TestScores.push_back(ScoreToAdd);

	// vector <double> HighTemp (365, 80.0); // allocate 365 elements and initializing all to the value of 80.0

	// vector <vector <int>> MovieReviews
	// {
	// 	{1, 2, 3, 4},
	// 	{5, 6, 7, 8},
	// 	{9, 10, 11, 12}
	// };
	// cout << MovieReviews.at(1).at(1) << endl;

	vector <int> Vector01;
	vector <int> Vector02;

	Vector01.push_back(10);
	Vector01.push_back(20);
	for (unsigned long i = 0; i < Vector01.size(); i++)
		cout << Vector01.at(i) << endl;

	Vector02.push_back(100);
	Vector02.push_back(200);
	for (unsigned long i = 0; i < Vector02.size(); i++)
		cout << Vector02.at(i) << endl;

	vector <vector <int>> Vector2D;
	Vector2D.push_back(Vector01);
	Vector2D.push_back(Vector02);
	// for (unsigned long i = 0; i < Vector2D.at(0).size(); i++)
	// 	for (unsigned long j = 0; j < Vector2D.at(1).size(); j++)
	// 		cout << Vector2D.at(i).at(j) << endl;

	Vector01.at(0) = 1000;
	for (unsigned long i = 0; i < Vector2D.at(0).size(); i++)
		for (unsigned long j = 0; j < Vector2D.at(1).size(); j++)
			cout << Vector2D.at(i).at(j) << endl;
	for (unsigned long i = 0; i < Vector01.size(); i++)
		cout << Vector01.at(i) << endl;
}

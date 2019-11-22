#include "../Includes/Header.h"

void	MixedExpressions()
{
	const int	Count {3};

	cout << "Enter " << Count << " integers separated by space: ";

	int Num1 {}, Num2{} , Num3{};
	cin >> Num1 >> Num2 >> Num3;

	cout << "The three numbers were " << Num1 << ", " << Num2 << ", " << Num3 << endl;

	int Total {Num1 + Num2 + Num3};

	cout << "The sum of the numbers is: " << Total << endl;

	double Average {static_cast<double>(Total) / Count};
	cout << "The average of the numbers is: " << Average << endl;
	
}

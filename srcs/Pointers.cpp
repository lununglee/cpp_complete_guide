#include "../Includes/Header.h"

void	Pointers()
{
	// vector<string> Stooges {"Larry", "Moe", "Curly"};
	// vector<string> *StoogesPtr {&Stooges};

	// cout << "The first stooges is " << (*StoogesPtr).at(0) << endl;

	// for (auto Name : *StoogesPtr)
	// 	cout << Name << endl;
	const size_t Array01Size {5};
	const size_t Array02Size {3};

	int Array01[] {1, 2, 3, 4, 5};
	int Array02[] {10, 20, 30};

	cout << "Array 1: ";
	Print(Array01, Array01Size);
	cout << "Array 2: ";
	Print(Array02, Array02Size);

	int *Results = ApplyAll(Array01, Array01Size, Array02, Array02Size);
	constexpr size_t ResultSize {Array01Size * Array02Size};

	cout << "Result: ";
	Print(Results, ResultSize);
	cout << endl;
}

int	*ApplyAll(int *Array01, const size_t Array01Size, int *Array02, const size_t Array02Size)
{
	int *NewArray {nullptr};
	NewArray = new int[Array01Size * Array02Size];
	int *ReturnPointer = NewArray;
	// size_t counter {0};
	for (size_t i {0}; i < Array02Size; i++)
	{
		for (size_t j {0}; j < Array01Size; j++)
		{
			// *(NewArray + counter) = Array02[i] * Array01[j];
			// counter++;
			*NewArray++ = Array02[i] * Array01[j];
		}
	}
	return ReturnPointer;
}

void	Print(int *Array, size_t Size)
{
	for (size_t i {0}; i < Size; i++)
	{
		cout << Array[i] << " ";
	}
	cout << endl;
}

void	DynamicMemoryAllocation()
{
	// int *ArrayPointer {nullptr};

	// int Size {0};
	// cout << "How big do you want the array? " << endl;
	// cin >> Size;

	// ArrayPointer = new int[Size];
	// delete [] ArrayPointer;

	// int *NumI {nullptr};
	// double *NumD {nullptr};
	// NumI = new int;
	// NumD = new double;

	// cout << *NumI << endl;
	// delete NumI;
	// delete NumD;

	// int Scores[] {100, 98, 65};
	// for (size_t i {0}; i < 3; i++)
	// 	cout << *(Scores + i) << endl;

	// int Scores[] {100, 97, 92, 85, 65, 43, 0};
	// int *ScoresPtr {Scores};

	// size_t i = -1;
	// while (++i < sizeof(Scores)/sizeof(int))
	// 	cout << *ScoresPtr++ << endl;
	
	// int *array_ptr {nullptr};
	// cout << "How many elements you want";
	// size_t size {0};
	// cin >> size;
	// array_ptr = MakeArray(size, 10);
	// for (size_t i {0}; i < size; i++)
	// 	cout << *array_ptr++ << endl;

	// vector<string> stooges {"Larry", "Moe", "Curly"};

	// for (auto &str : stooges)
	// 	str = "funny";
	// for (auto &str : stooges)
	// 	cout << str << endl;
}

int *MakeArray(size_t Size, int Init)
{
	int *Array {nullptr};
	Array = new int[Size];
	for (size_t i {0}; i < Size; i++)
		*(Array + i) = Init;
	return Array;
}

#include "../includes/Header.h"

void	Pointers()
{
	// vector<string> Stooges {"Larry", "Moe", "Curly"};
	// vector<string> *StoogesPtr {&Stooges};

	// cout << "The first stooges is " << (*StoogesPtr).at(0) << endl;

	// for (auto Name : *StoogesPtr)
	// 	cout << Name << endl;
	const size_t array1_size {5};
	const size_t array2_size {3};

	int array1[] {1, 2, 3, 4, 5};
	int array2[] {10, 20, 30};

	cout << "Array 1: ";
	print(array1, array1_size);
	cout << "Array 2: ";
	print(array2, array2_size);

	int *results = apply_all(array1, array1_size, array2, array2_size);
	constexpr size_t result_size {array1_size * array2_size};

	cout << "Result: ";
	print(results, result_size);
	cout << endl;
}

int	*apply_all(int *array1, const size_t array1_size, int *array2, const size_t array2_size)
{
	int *new_array {nullptr};
	new_array = new int[array1_size * array2_size];
	int *return_pointer = new_array;
	// size_t counter {0};
	for (size_t i {0}; i < array2_size; i++)
	{
		for (size_t j {0}; j < array1_size; j++)
		{
			// *(new_array + counter) = array2[i] * array1[j];
			// counter++;
			*new_array++ = array2[i] * array1[j];
		}
	}
	return return_pointer;
}

void	print(int *array, size_t size)
{
	for (size_t i {0}; i < size; i++)
	{
		cout << array[i] << " ";
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

int *MakeArray(size_t size, int init)
{
	int *array {nullptr};
	array = new int[size];
	for (size_t i {0}; i < size; i++)
		*(array + i) = init;
	return array;
}

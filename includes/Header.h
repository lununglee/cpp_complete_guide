#ifndef MAIN_H
#define MAIN_H

#include <iostream>
#include <climits>
#include <cfloat>
#include <vector>
#include <iomanip>
#include <cctype>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <ctime>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::fixed;
using std::setprecision;
using std::string;

// IOStream.cpp
void	ClearInput();
void	StringIO();
void	NumIO();

// Variables.cpp
void	InitializingVariables();

// PrimitiveTypes.cpp
void	PrimitiveTypes();

// SizeOfOperator.cpp
void	SizeOfOperator();

// Constants.cpp
void	Constants();

// Arrays.cpp
void	Arrays();
void	Vectors();

// Operators.cpp
void	Operators();

// MixedExpressions.cpp
void	MixedExpressions();

// Currency.cpp
void	Currency();

// Loops.cpp
void	Loops();
void	LoopChallenge();

// Strings.cpp
void	CStrings();
void	CppStrings();

// Santantua.cpp
void	Sastantua();
void	PrintSpaces(size_t Spaces);

// Functions.cpp
void	Functions();
void	SectionChallenge_11();
void	PrintMenu();
char	GetUserInput();
void	PrintHandler(const vector<int> &Numbers);
void	AddHandler(vector<int> &Numbers);
void	MeanHandler(const vector<int> &Numbers);
void	SmallestHandler(const vector<int> &Numbers);
void	LargestHandler(const vector<int> &Numbers);
bool	FindHandler(const vector<int> &Numbers);

// Recursion.cpp
unsigned long long	Factorial(unsigned long long Num);

// Pointers.cpp
void	Pointers();
void	DynamicMemoryAllocation();
int		*MakeArray(size_t size, int init);
int		*apply_all(int *array1, const size_t array1_size, int *array2, const size_t array2_size);
void	print(int *array, size_t size);

#endif

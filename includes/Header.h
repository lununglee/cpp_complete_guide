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
using std::boolalpha;

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
int		*MakeArray(size_t Size, int Init);
int		*ApplyAll(int *Array01, const size_t Array01Size, int *Array02, const size_t Array02Size);
void	Print(int *Array, size_t Size);

/*************************************
*            Secion04.cpp            *
*************************************/

void	HelloWorld();		// Simple hello world cout progam
void	LinkerError();		// Linker error example; compiler error
void	CompilerWarning();	// Compiler warning example; compiler error
void	CompilerError();	// Compiler error warning example; compiler error
void	SectionChallenge();	// Take input and display as output in an interactive way

/*************************************
*            Secion05.cpp            *
*************************************/

void	ClearInput();		// cin.clear && cin.ignore

/*************************************
*            Secion06.cpp            *
*************************************/

void	SizeOfInfo();
void	PrimitiveTypes();
void	InitializingVariables();
void	GlobalVariables();
void	Constants();
void	ConstChallenge();

/*************************************
*            Secion07.cpp            *
*************************************/

void	Arrays();
void	Vectors();
void	VectorChallenge();

/*************************************
*            Secion08.cpp            *
*************************************/

void	ArithmeticOperators();
void	RelationalOperators();
void	AssignmentOperators();
void	LogicalOperators();
void	IncreDecrementalOperators();

#endif

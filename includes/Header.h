#ifndef _HEADER_H_
#define _HEADER_H_

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
using std::string;
using std::vector;
using std::fixed;
using std::setprecision;
using std::boolalpha;

#include "../Includes/Player.h"
#include "../Includes/Account.h"
#include "../Includes/Shallow.h"
#include "../Includes/Deep.h"

// Santantua.cpp
void	Sastantua();
void	PrintSpaces(size_t Spaces);

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
void	MixedExpressions();
void	LogicalOperators();
void	IncreDecrementalOperators();
void	Currency();
void	CurrencyChallenge();

/*************************************
*            Secion09.cpp            *
*************************************/

void	WhileLoops();
void	DoWhileLoops();
void	ForLoops();
void	RangeBasedForLoops();
void	ConditionalOperators();
void	Switch();
void	SwitchEnum();
void	LoopChallenge();
void	Shipping();
void	MultiplicationTable();
void	If();
void	IfElse();

/*************************************
*            Secion10.cpp            *
*************************************/

void	CStrings();
void	CharFunctions();
void	CppStrings();
void	CppStringChallenge();

/*************************************
*            Secion11.cpp            *
*************************************/

void				PrintArray(const int arr[], size_t Size);
void				SetArray(int arr[], size_t Size, int value);
void				ArrayFunctions();
void				VectorArrayChallenge();
void				Factorial();
unsigned long long	FactorialFunction(unsigned long long n);
void				Fibonacci();
unsigned long long	FibonacciFunction(unsigned long long n);
double				CalcCost(double BaseCost = 100, double TaxRate = 0.06, double Shipping = 4.25);
void				Greeting(string Name,  string Prefix = "Mr. ", string Suffix = " ");
void				DefaultArgument();
void				OverloadPrint(int Num);
void				OverloadPrint(double Num);
void				OverloadPrint(string Str);
void				OverloadPrint(string Str, string T);
void				OverloadPrint(vector<string> Vec);
void				FunctionOverloading();
void				PassByReference();
void				PassByRef1(int &Num);
void				PassByRef2(string &Str);
void				PassByRef3(vector<string> &Vec);
void				PrintVector(const vector<string> &Vec);
void				PassByReference();
void				PrintMenu();
char				GetUserInput();
void				PrintHandler(const vector<int> &Numbers);
void				AddHandler(vector<int> &Numbers);
void				MeanHandler(const vector<int> &Numbers);
void				SmallestHandler(const vector<int> &Numbers);
void				LargestHandler(const vector<int> &Numbers);
bool				FindHandler(const vector<int> &Numbers);

/*************************************
*            Secion12.cpp            *
*************************************/

void	PointerChallenge();
int		*ApplyAll(int *Array01, const size_t Array01Size, int *Array02, const size_t Array02Size);
void	Print(int *Array, size_t Size);
void	DynamicMemoryAllocation();
int 	*MakeArray(size_t Size, int Init);
void	SimplePointers();
int 	*CreateArray(size_t Size, int InitValue = 0);
void 	Display1(const int *const Array, size_t Size);
void	ReturnPointer();
void	References();
void	PointerArithmetic();
void	Swap(int *A, int *B);
void	PassingPointers1();
void	Display2( const vector<string> *const  Vec);
void	Display2(int *Array, int Sentinel);
void	PassingPointers2();
void	Dereference();

/*************************************
*            Secion13.cpp            *
*************************************/

void	ClassDeclaration();
void	MethodImplementation1();
void	ConsDestructor();
void	ConstructorInitializationLists();
void	CopyConstructor();
void	DisplayPlayer(Player Source);
void	ShallowCopy();
void	DisplayShallow(Shallow Source);
void	DeepCopy();
void	DisplayDeep(Deep Source);

#endif

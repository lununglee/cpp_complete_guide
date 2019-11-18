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

#endif

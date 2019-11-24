#include "../Includes/Header.h"

void	PointerChallenge()
{
	// vector<string> Stooges {"Larry", "Moe", "Curly"};
	// vector<string> *StoogesPtr {&Stooges};

	// cout << "The first Stooges is " << (*StoogesPtr).at(0) << endl;

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

int		*ApplyAll(int *Array01, const size_t Array01Size, int *Array02, const size_t Array02Size)
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
	int *ArrayPointer {nullptr};

	size_t Size {0};
	cout << "How big do you want the Array? " << endl;
	cin >> Size;

	ArrayPointer = new int[Size];
	delete [] ArrayPointer;

	int *NumI {nullptr};
	double *NumD {nullptr};
	NumI = new int;
	NumD = new double;

	cout << *NumI << endl;
	delete NumI;
	delete NumD;

	// int Scores[] {100, 98, 65};
	// for (size_t i {0}; i < 3; i++)
	// 	cout << *(Scores + i) << endl;

	int Scores[] {100, 97, 92, 85, 65, 43, 0};
	int *ScoresPtr {Scores};

	size_t i = -1;
	while (++i < sizeof(Scores)/sizeof(int))
		cout << *ScoresPtr++ << endl;
	
	int *array_ptr {nullptr};
	cout << "How many elements you want";
	cin >> Size;
	array_ptr = MakeArray(Size, 10);
	for (size_t i {0}; i < Size; i++)
		cout << *array_ptr++ << endl;

	vector<string> Stooges {"Larry", "Moe", "Curly"};

	for (auto &Str : Stooges)
		Str = "funny";
	for (auto &Str : Stooges)
		cout << Str << endl;
}

int 	*MakeArray(size_t Size, int Init)
{
	int *Array {nullptr};
	Array = new int[Size];
	for (size_t i {0}; i < Size; i++)
		*(Array + i) = Init;
	return Array;
}

void	SimplePointers()
{
	int Num {10};
	cout << "Value of Num is: " << Num << endl;		
	cout << "sizeof of Num is: " << sizeof Num << endl; 	
	cout << "Address of Num is: " << &Num << endl;	 	

	int *P;
	cout << "\nValue of P is: " << P << endl;   // garbage
	cout << "Address of P is: " << &P << endl;
	cout << "sizeof of P is: " << sizeof P<< endl;
   
	P = nullptr;
	cout << "\nValue of P is: " << P << endl;


	int					*P1 {nullptr};
	double				*P2 {nullptr};
	unsigned long long	*P3 {nullptr};
	vector<string> 		*P4 {nullptr};
	string				*P5 {nullptr};
   
	cout << "\nsizeof P1 is: " << sizeof P1 << endl;
	cout << "sizeof P2 is: " << sizeof P2 << endl;
	cout << "sizeof P3 is: " << sizeof P3 << endl;
	cout << "sizeof P4 is: " << sizeof P4 << endl;
	cout << "sizeof P5 is: " << sizeof P5 << endl;
	
	int Scores{10};

	int *ScorePtr {nullptr};

	ScorePtr = &Scores;
	cout << "Value of Scores is: " << Scores << endl;
	cout << "Address of Scores is: " << &Scores << endl;
	cout << "Value of ScorePtr is: " << ScorePtr << endl;

  // ScorePtr = &HighTemp;     // Compiler error

	cout  << endl;
}

int 	*CreateArray(size_t Size, int InitValue)
{
   int *NewStorage {nullptr};
   NewStorage = new int[Size];   
   for (size_t i{0}; i < Size; ++i)
	  *(NewStorage + i) = InitValue;
   return NewStorage;
}

void 	Display1(const int *const Array, size_t Size)
{
	for (size_t i{0}; i < Size; ++i)
		cout << Array[i] << " ";
	cout << endl;
}

void	ReturnPointer()
{
	int *MyArray {nullptr};
	size_t Size;
	int InitValue {};
	
	cout << "\nHow many integers would you like to allocate? ";
	cin >> Size;
	cout << "What value would you like them initialized to? ";
	cin >> InitValue;
	
	MyArray = CreateArray(Size, InitValue);
	cout << "\n--------------------------------------" << endl;

	Display2(MyArray, Size);
	delete [] MyArray;
}

void	References()
{
	int Num {100};
	int &Ref {Num};
	
	cout << Num << endl;
	cout << Ref << endl;
	
	Num  = 200;
	cout << "\n---------------------------------" << endl;
	cout << Num << endl;
	cout << Ref << endl;
	
	Ref = 300;
	cout << "\n---------------------------------" << endl;
	cout << Num << endl;
	cout << Ref << endl;
	
	cout << "\n---------------------------------" << endl;
	vector<string> Stooges {"Larry", "Moe", "Curly"};

	for (auto Str: Stooges)     
		Str = "Funny";              // Str is a COPY of the each vector element
	  
	for (auto Str:Stooges)        // No change
		cout << Str << endl;
 
	cout << "\n---------------------------------" << endl;
	for (auto &Str: Stooges)  // Str is a reference to each vector element
		Str = "Funny";
	 
	for (auto const &Str:Stooges)   // notice we are using const
		cout << Str << endl;            // now the vector elements have changed
	
	cout << endl;
}

void	PointerArithmetic()
{
	int Scores[] {100, 95, 89, 68, -1};
	int *ScorePtr {Scores};
	
	while (*ScorePtr != -1) {
		cout << *ScorePtr << endl;
		ScorePtr++;
	}
	
	cout << "\n-------------------------" << endl;
	ScorePtr = Scores;
	while (*ScorePtr != -1)
		cout << *ScorePtr++ << endl;
		
	cout << "\n-------------------------" << endl;
	string S1 {"Frank"};
	string S2 {"Frank"};
	string S3 {"James"};

	string *P1 {&S1};		
	string *P2 {&S2};
	string *P3 {&S1};

	cout << boolalpha;
	cout << P1 << "==" << P2 << ": " << (P1 == P2) << endl;		// false
	cout << P1 << "==" << P3 << ": " << (P1 == P3) << endl;		// true

	cout << *P1 << "==" << *P2 << ": " << (*P1 == *P2) << endl;		// true
	cout << *P1 << "==" << *P3 << ": " << (*P1 == *P3) << endl;		// true
	
	P3 = &S3;   // point to James
	cout << *P1 << "==" << *P3 << ": " << (*P1 == *P3) << endl;		// false
	

	cout << "\n-------------------------" << endl;
	char Name[]  {"Frank"};
	
	char *CharPtr1 {nullptr};
	char *CharPtr2{nullptr};
	
	CharPtr1 = &Name[0];   // F
	CharPtr2 = &Name[3];   // n

	cout << "In the string " << Name << ",  " << *CharPtr2 << " is " << (CharPtr2 - CharPtr1) << " characters away from " <<  *CharPtr1  << endl; 
	
	cout << endl;
}

void	Swap(int *A, int *B)
{
	int Temp = *A;
	*A = *B;
	*B = Temp;
}

void	PassingPointers1()
{
	int X {100}, Y {200};
	cout << "\nx: " << X <<  endl;
	cout << "y: " << Y <<  endl;
	
	Swap(&X, &Y);
	
	cout << "\nx: " << X <<  endl;
	cout << "y: " << Y <<  endl;
	
	cout  << endl;
}

void	Display2( const vector<string> *const  Vec)
{
	//(*Vec).at(0) = "Funny";
	for (auto Str: *Vec)
		cout << Str << " ";
	cout << endl;
  
	//   Vec = nullptr;
}

void	Display2(int *Array, int Sentinel)
{
	while (*Array != Sentinel)
		cout << *Array++ << " ";
	cout << endl;
}

void	PassingPointers2()
{

	//    cout << "-----------------------------" << endl;
	//    vector<string> Stooges {"Larry", "Moe", "Curly"};
	//    Display(&Stooges);
   
	cout << "\n-----------------------------" << endl;
	int scores[] {100,98,97,79,85,-1};
	Display2(scores, -1);
	
	cout  << endl;
}

void	Dereference()
{
	int Score {100};
	int *ScorePtr {&Score};

	cout << *ScorePtr << endl;		// 100

	*ScorePtr = 200;
	
	cout << *ScorePtr << endl;		// 200
	cout << Score << endl; 			// 200

	cout << "\n------------------------------" << endl;
	double HighTemp {100.7};
	double LowTemp {37.4};			       
	double *TempPtr {&HighTemp};    

	cout << *TempPtr << endl;   	// 100.7    	    
	TempPtr = &LowTemp;	
	cout << *TempPtr << endl;   	// 37.4   	    

	cout << "\n------------------------------" << endl;

	string Name {"Frank"};
	string *StringPtr {&Name};

	cout << *StringPtr << endl;   	// Frank   
	Name = "James"; 	    
	cout << *StringPtr << endl;   	// James  
//
	cout << "\n------------------------------" << endl;
	vector<string> Stooges {"Larry", "Moe", "Curly"};
	vector<string> *VectorPtr {nullptr};
	
	VectorPtr = &Stooges;
	
	cout << "First Stooge: " << (*VectorPtr).at(0) << endl;    // Larry
	
	cout << "Stooges: ";
	for (auto Stooge: *VectorPtr)  
		cout << Stooge << " ";
	cout << endl;
	
	cout << endl;
}
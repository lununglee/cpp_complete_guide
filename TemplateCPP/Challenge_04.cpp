#include <iostream>
#include <deque>
#include <string>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
#include <cctype>

// bool	IsPalindrome(const std::string& Str)
// {
// 	std::deque<char>	Stack;
// 	char				C1;
// 	char				C2;
// 	for (auto Char : Str)
// 		if (isalpha(Char))
// 			Stack.push_back(tolower(Char));
// 	while (Stack.size() > 1)
// 	{
// 		C1 = Stack.front();
// 		C2 = Stack.back();
// 		Stack.pop_front();
// 		Stack.pop_back();
// 		if (C1 != C2)
// 			return false;
// 	}
// 	return true;
// }

bool	IsPalindrome(const std::string& Str)
{
	std::stack<char>	Stack {};
	std::queue<char>	Queue {};
	char				C1;
	char				C2;

	for (auto Char : Str)
	{
		if (isalpha(Char))
		{
			Stack.push(tolower(Char));
			Queue.push(tolower(Char));
		}
	}
	while (!Queue.empty())
	{
		C1 = Stack.top();
		C2 = Queue.front();
		Stack.pop();
		Queue.pop();
		if (C1 != C2)
			return false;
	}
	return true;
}

int		main()
{
	std::vector<std::string>	TestStrings{ "a", "aa", "aba", "abba", "abbcbba", "ab", "abc", "radar", "bob", "ana",
		"avid diva", "Amore, Roma", "A Toyota's a toyota", "A Santa at NASA", "C++",
		"A man, a plan, a cat, a ham, a yak, a yam, a hat, a canal-Panama!", "This is a palindrome", "palindrome" };

	std::cout << std::boolalpha;
	std::cout << std::setw(8) << std::left << "Result" << "String" << std::endl;
	for(const auto& S : TestStrings)
	{
		std::cout << std::setw(8) << std::left << IsPalindrome(S) << " | " << S << std::endl;
	}
	std::cout << std::endl;
	return (0);
}
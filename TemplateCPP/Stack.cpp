#include <iostream>
#include <stack>
#include <list>
#include <vector>
#include <deque>

template <typename T>
void	Display(std::stack<T> S)
{
	std::cout << "[ ";
	while (!S.empty())
	{
		T Elem = S.top();
		S.pop();
		std::cout << Elem << " ";
	}
	std::cout << "]" << std::endl;
}

int	main(void)
{
	std::stack<int>	S;	// deque
	std::stack<int, std::vector<int>>	S1;	// vector
	std::stack<int, std::list<int>>		S2;	// list
	std::stack<int, std::deque<int>>	S3;	// deque

	for (int i : {1, 2, 3, 4, 5})
		S.push(i);
	Display(S);

	S.pop();
	S.pop();
	Display(S);

	return (0);
}

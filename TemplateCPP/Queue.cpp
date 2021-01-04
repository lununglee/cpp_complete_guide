#include <iostream>
#include <stack>
#include <list>
#include <vector>
#include <deque>
#include <queue>

template <typename T>
void	Display(std::queue<T> Q)
{
	std::cout << "[ ";
	while (!Q.empty())
	{
		T Elem = Q.front();
		Q.pop();
		std::cout << Elem << " ";
	}
	std::cout << "]" << std::endl;
}

int	main(void)
{
	std::queue<int>						Q;	// deque
	std::queue<int, std::vector<int>>	Q1;	// vector
	std::queue<int, std::list<int>>		Q2;	// list
	std::queue<int, std::deque<int>>	Q3;	// deque

	for (int i : {1, 2, 3, 4, 5})
		Q.push(i);
	Display(Q);

	Q.pop();
	Q.pop();
	Display(Q);

	return (0);
}

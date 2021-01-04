#include <queue>
#include <iostream>

// priority_queues are stored in vector by default
// push		- insert an element in sorted order
// pop		- removes the top element (greatest)
// top		- access the top element (greatest)
// empty	- is queue empty
// size		- number of elements in queue

template <typename T>
void	Display(std::priority_queue<T> PQ)
{
	std::cout << "[ ";
	while (!PQ.empty())
	{
		T Elem = PQ.top();
		PQ.pop();
		std::cout << Elem << " ";
	}
	std::cout << "]" << std::endl;
}

int		main(void)
{
	std::priority_queue<int>	PQ {};

	for (int i : {3, 5, 7, 12, 23, 5, 34, 100, 23, 3, 5, 7})
		PQ.push(i);

	Display(PQ);
	std::cout << PQ.top() << std::endl;
	return (0);
}

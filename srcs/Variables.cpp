#include "../includes/Header.h"

void	InitializingVariables()
{

	cout << "Enter the width of the room: ";
	int	RoomWidth {0};
	cin >> RoomWidth;

	cout << "Enter the length of the room: ";
	int	RoomLength {0};
	cin >> RoomLength;

	cout << "The area of the room is: " << RoomWidth * RoomLength << "sq/ft" << endl;
}

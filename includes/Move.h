#ifndef _MOVE_H_
#define _MOVE_H_

class Move
{
	private:
	int	*Data;

	public:
	// Constructor
	Move();
	Move(int DataToSet);
	// Copier
	Move(const Move &Source);
	// Mover
	Move(Move &&Source) noexcept;
	// Destructor
	~Move();
	// Setters
	void	SetData(int DataToSet);
	// Getters
	int		GetData();
};

#endif
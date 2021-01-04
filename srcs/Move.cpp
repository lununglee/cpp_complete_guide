#include "../Includes/Move.h"

/*********************************
*          Constructors          *
*********************************/

Move::Move()
: Move {0}
{ }

Move::Move(int DataToSet)
{
	Data = new int;
	*Data = DataToSet;
}

/*********************************
*             Copier             *
*********************************/

Move::Move(const Move &Source)
: Move {*Source.Data}
{ }

/*********************************
*             Mover              *
*********************************/

Move::Move(Move &&Source) noexcept
: Data {Source.Data}
{
	Source.Data = nullptr;
}

/*********************************
*           Destructors          *
*********************************/

Move::~Move()
{ }

/*********************************
*            Setters             *
*********************************/

void	Move::SetData(int DataToSet)
{
	*Data = DataToSet;
}

/*********************************
*            Getters             *
*********************************/

int		Move::GetData()
{
	return *Data;
}

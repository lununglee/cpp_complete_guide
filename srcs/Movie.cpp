#include "../Includes/Movie.h"

/*********************************
*          Constructors          *
*********************************/

Movie::Movie()
: Movie {"Null", "Null", 0}
{ }

Movie::Movie(string NameToSet)
: Movie {NameToSet, "Null", 0}
{ }

Movie::Movie(string NameToSet, string RatingToSet)
: Movie {NameToSet, RatingToSet, 0}
{ }

Movie::Movie(string NameToSet, string RatingToSet, int WatchCountToSet)
: Name {NameToSet}, Rating {RatingToSet}, WatchCount {WatchCountToSet}
{ }

/*********************************
*            Copier              *
*********************************/

Movie::Movie(const Movie &Source)
: Movie {Source.Name, Source.Rating, Source.WatchCount}
{ }

/*********************************
*             Mover              *
*********************************/

// Movie::Movie(Movie &&Source)
// : Movie {Source.Name, Source.Rating, Source.WatchCount}
// {
// 	Source.Name = nullptr;
// 	Source.Rating = nullptr;
// 	Source.WatchCount = nullptr;
// }

/*********************************
*           Destructors          *
*********************************/

Movie::~Movie()
{ }

/*********************************
*            Setters             *
*********************************/

void	Movie::SetName(string NameToSet)
{
	Name = NameToSet;
}

void	Movie::SetRating(string RatingToSet)
{
	Rating = RatingToSet;
}

void	Movie::SetWatchCount(int WatchCountToSet)
{
	WatchCount = WatchCountToSet;
}

void	Movie::IncrementWatchCount()
{
	WatchCount++;
}

/*********************************
*            Getters             *
*********************************/

string	Movie::GetName() const
{
	return Name;
}

string	Movie::GetRating() const
{
	return Rating;
}

int		Movie::GetWatchCount() const
{
	return WatchCount;
}

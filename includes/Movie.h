#ifndef _MOVIE_H_
#define _MOVIE_H_

#include <string>

using std::string;

class Movie
{
	private:
	string	Name;
	string	Rating;
	int		WatchCount;

	public:
	// Constructor
	Movie();
	Movie(string NameToSet);
	Movie(string NameToSet, string RatingToSet);
	Movie(string NameToSet, string RatingToSet, int WatchCountToSet);

	// Copier
	Movie(const Movie &Source);

	// // Mover
	// Movie(Movie &&Source);

	// Destructor
	~Movie();

	// Setters
	void	SetName(string NameToSet);
	void	SetRating(string RatingToSet);
	void	SetWatchCount(int WatchCountToSet);
	void	IncrementWatchCount();

	// Getters
	string	GetName() const;
	string	GetRating() const;
	int		GetWatchCount() const;
	void	Display() const;
};

#endif

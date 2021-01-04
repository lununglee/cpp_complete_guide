#include <iostream>
#include <list>
#include <string>
#include <vector>
#include <iterator>
#include <iomanip>

class Song
{
	friend std::ostream	&operator<<(std::ostream &OS, const Song &Rhs)
	{
		std::cout << std::setw(32) << std::left << Rhs.SongName;
		std::cout << std::setw(30) << std::left << Rhs.ArtistName;
		return (OS);
	}

	private:
	std::string			SongName;
	std::string			ArtistName;

	public:
	Song(std::string InitSongName, std::string InitArtistName)
	: SongName {InitSongName}, ArtistName {InitArtistName}
	{ }
	Song()
	: Song {"DEFAULT SONG NAME", "DEFAULT ARTIST NAME"}
	{ }
	~Song() = default;
	bool				operator<(const Song &Rhs) { return (this->SongName < Rhs.SongName); }
	bool				operator==(const Song &Rhs) { return (this->SongName == Rhs.SongName && this->ArtistName == Rhs.ArtistName); }	
};

void	PrintMenu()
{
	std::cout << "\n==============SPOOOTIFY==============" << std::endl;
	std::cout << "F - Play first song" << std::endl;
	std::cout << "N - Play next song" << std::endl;
	std::cout << "P - Play previous song" << std::endl;
	std::cout << "A - Add and play new song at current location" << std::endl;
	std::cout << "L - List current playlist" << std::endl;
	std::cout << "Q - Quit" << std::endl;
	std::cout << "=====================================" << std::endl;
}

void	DisplayPlaylist(const std::list<Song> &Playlist)
{
	for (auto const &Song : Playlist)
		std::cout << Song << std::endl;
}

void	DisplayCurrentSong(const std::list<Song>::iterator &CurrentSong)
{
	std::cout << "Current Song: "<< *CurrentSong << std::endl;
}

void	F(std::list<Song> &Playlist, std::list<Song>::iterator &CurrentSong)
{
	std::cout << "Playing the first song: " << std::endl;
	CurrentSong = Playlist.begin();
}
void	N(std::list<Song> &Playlist, std::list<Song>::iterator &CurrentSong)
{
	std::cout << "Playing the next song: " << std::endl;
	std::advance(CurrentSong, 1);
	if (CurrentSong == Playlist.end())
		CurrentSong = Playlist.begin();
}
void	P(std::list<Song> &Playlist, std::list<Song>::iterator &CurrentSong)
{
	std::cout << "Playing the previous song: " << std::endl;
	if (CurrentSong == Playlist.begin())
		CurrentSong = Playlist.end();
	std::advance(CurrentSong, -1);
}
void	A(std::list<Song> &Playlist, std::list<Song>::iterator &CurrentSong)
{
	std::string	InitSongName {};
	std::string	InitArtistName {};

	std::cout << "Please enter song name to add: " << std::flush;
	// std::cin >>InitSongName;
	std::getline(std::cin, InitSongName);
	std::cout << "Please enter artist name to add: " << std::flush;
	std::getline(std::cin, InitArtistName);
	// std::cin >> InitArtistName;

	Song	Temp {InitSongName, InitArtistName};
	Playlist.insert(CurrentSong, Temp);
}
void	L(const std::list<Song> &Playlist)
{
	DisplayPlaylist(Playlist);
}
void	Q(bool &Quit)
{
	std::cout << "Goodbye" << std::endl;
	Quit = true;
}

int		main(void)
{
	std::list<Song>	Playlist
	{
		{std::string("Hotel California"), std::string("Eagles")},
		{std::string("Right Here"), std::string("Richard Marx")},
		{std::string("Desperado"), std::string("Eagles")},
		{std::string("I Want To Know What Love Is"), std::string("Foreigner")}
	};
	char			UserSelection {};
	bool			Quit {false};
	auto			CurrentSong {Playlist.begin()};

	do
	{
		PrintMenu();
		DisplayCurrentSong(CurrentSong);
		std::cin >> UserSelection;
		std::cin.clear();
		std::cin.ignore();
		UserSelection = toupper(UserSelection);
		switch (UserSelection)
		{
			case 'F':
				F(Playlist, CurrentSong);
				break;
			case 'N':
				N(Playlist, CurrentSong);
				break;
			case 'P':
				P(Playlist, CurrentSong);
				break;
			case 'A':
				A(Playlist, CurrentSong);
				break;
			case 'L':
				L(Playlist);
				break;
			case 'Q':
				Q(Quit);
				break;
			default:
				std::cout << "Invalid choice, please select options listed above..." << std::endl;
		}
	} while (!Quit);
	
	return (0);
}

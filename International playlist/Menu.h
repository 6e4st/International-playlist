#ifndef MENUH
#define MENUH



class Menu
{
public:
	virtual void PrintInfo();
};

class CreatePlaylistMenu
{
private: 
	Playlist createdPlaylist;
public:
	
	void PrintInfo() override
		Playlist getCreatedPlaylist();
};

class EditPlaylistMenu
{
private:
	Playlist edittedPlaylist;

public:
	void PrintInfo() override
		Playlist GetEdittedPlaylist();
};

class SeachSongMenu
{
public;
	void PrintInfo() override
};

class SearchArtistMenu 
{
public:
	void PrintInfo() override
};

class DeletePlaylistMenu 
{
public: 
	void PrintInfo() override
};


#endif
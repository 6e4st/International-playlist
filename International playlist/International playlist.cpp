#include <iostream>
#include <string>
#include "Menu.h"

using namespace std;

struct Song {
public:

	string Artist;
	string Name;
	string Nationality;
};

class Playlist
{
private:
	string name;
	Song songs[];


public:
	Song GetSong(int);
	void SetName(string);

};

int main()
{
	return 0; 
}
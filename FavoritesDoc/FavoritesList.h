
#pragma once
#include <iostream>
#include <string>
#include "Header.h"
using namespace std;

class FavoritesList
{
	Favorites items[1000];
	int numFavs;
	int totalFavs;

public:
	FavoritesList();
	void addFav();
	void showFav();
	int readFromFile(string filename);
	int writeToFile(string filename);

};

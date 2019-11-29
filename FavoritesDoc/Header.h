#pragma once
#include <string>
using namespace std;

class Favorites
{

protected:
	string make;
	string model;
	int year;
	string color;
	int cost;
	int horsepower;

public:
	Favorites();
	Favorites(string m, string mo, int y, string c, int cst, int hp);
	void getFavorites();
	void showFavorites();
};


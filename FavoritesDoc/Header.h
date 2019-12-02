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
	void getFavoritesInput();
	//void showFavorites();
	string getMake();
	string getModel();
	int getYear();
	int getCost();
	int getHorsepower();
	string getColor();
	void setMake(string ma);
	void setModel(string mo);
	void setYear(int y);
	void setColor(string c);
	void setCost(int c);
	void setHorsepower(int h);
	friend ostream& operator<<(ostream& output, Favorites& i);
};


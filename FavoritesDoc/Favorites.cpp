#include "Header.h"
#include <string>
#include <iostream>
using namespace std;

Favorites::Favorites()
{
	make = "";
	model = "";
	year = 0;
	color = "";
	cost = 0;
	horsepower = 0;
}
Favorites::Favorites(string m, string mo, int y, string c, int cst, int hp)
{
	make = m;
	model = mo;
	year = y;
	color = c;
	cost = cst;
	horsepower = hp;
}
string Favorites::getMake()
{
	return make;
}
string Favorites::getModel()
{
	return model;
}
int Favorites::getYear()
{
	return year;
}
string Favorites::getColor()
{
	return color;
}
int Favorites::getCost()
{
	return cost;
}
int Favorites::getHorsepower()
{
	return horsepower;
}
void Favorites::setMake(string ma)
{
	make = ma;
}
void Favorites::setModel(string mo)
{
	model = mo;
}
void Favorites::setYear(int y)
{
	year = y;
}
void Favorites::setColor(string c)
{
	color = c;
}
void Favorites::setCost(int c)
{
	cost = c;
}
void Favorites::setHorsepower(int h)
{
	horsepower = h;
}




void Favorites::getFavoritesInput()
{
	
	cout << "Enter Car make? ";
	getline(cin, make);
	cout << endl;
	cout << "Enter Car model? ";
	getline(cin, model);
	cout << endl;
	cout << "Enter Model Year? ";
	cin >> year;
	cin.ignore();
	cout << endl;
	cout << "Car cost? ";
	cin >> cost;
	cin.ignore();
	cout << endl;
	cout << "Car horsepower? ";
	cin >> horsepower;
	cin.ignore();
	cout << endl;
	cout << "Car color? ";
	getline(cin, color, '\n');
	cout << endl;

}

ostream& operator<<(ostream& output, Favorites& i)
{
	output << "Favorites: " << i.make << "|" << i.model<< "|" << i.year << "|" << i.cost << "|" << i.horsepower << "|" << i.color << endl;
	return output;
}
/*void Favorites::showFavorites()
{
	cout << " Make: " << make;
	cout << ", Model: " << model;
	cout << ", Color: " << color;
	cout << ", Cost: " << cost;
	cout << ", Horsepower: " << horsepower;
	cout << endl;
}*/


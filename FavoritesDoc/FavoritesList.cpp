#include <iostream>
#include <string>
#include <fstream>
#include "Header.h"
#include "FavoritesList.h"
using namespace std;

FavoritesList::FavoritesList()
{
	numFavs = 0;
	totalFavs = 0;
}
void FavoritesList::addFav()
{
	items[numFavs].getFavoritesInput();
	numFavs++;
}
void FavoritesList::showFav()
{
	int i;
	for (i = 0; i < numFavs; i++)
	{
		cout << items[i];
	}
}

int FavoritesList::writeToFile(string filename)
{
	int i;
	ofstream outputFile;
	outputFile.open(filename, ios::app);
	if (!outputFile)
	{
		cout << "ERROR --- file could not open." << endl;
		return -2;
	}
	for (i = 0; i < numFavs; i++)
	{
		outputFile << items[i].getMake() << "|";
		outputFile << items[i].getModel() << "|";
		outputFile << items[i].getYear() << "|";
		outputFile << items[i].getCost() << "|";
		outputFile << items[i].getHorsepower() << "|";
		outputFile << items[i].getColor() << "|" << endl;
	}
	outputFile.close();
	return 0;
}

int FavoritesList::readFromFile(string filename)
{
	ifstream inputFile;
	inputFile.open(filename, ios::in);
	if (!inputFile)
	{
		cout << "ERROR --- file could not open." << endl;
		return -2;
	}

	string ma;
	string mo;
	int y;
	int c;
	int h;
	string co;
	string input;

	while (!inputFile.eof())
	{
		getline(inputFile, ma, '|');
		if (input.length() >= 1)
		{
			getline(inputFile, mo, '|');
			getline(inputFile, input, '|');
			y = stoi(input);
			getline(inputFile, input, '|');
			c = stoi(input);
			getline(inputFile, input, '|');
			h = stoi(input);
			getline(inputFile, co, '|');

			items[numFavs].setMake(ma);
			items[numFavs].setModel(mo);
			items[numFavs].setYear(y);
			items[numFavs].setCost(c);
			items[numFavs].setHorsepower(h);
			items[numFavs].setColor(co);
			numFavs++;
		}

	}
	inputFile.close();
	return 0;
}
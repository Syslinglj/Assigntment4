#include <iostream>
#include "Header.h"
#include <string>
using namespace std;

int main()
{
	int nFavorites = 0;
	char input = 'y';
	int counter = 0;
	cout << "Welcome to our favorite car collection database." << endl;
	cout << "We will first ask how many new favorites you would like to add," << endl;
	cout << "then you will provide those favorites with details." << endl;
	cout << " " << endl;

	Favorites* pFavorites = NULL;
	pFavorites = new Favorites[100];

	while (input != 'q' && input != 'Q')
	{

		int inputFavorites = 0;

		//asks how many favorites youd like to add
		if (input == 'y' || input == 'Y')
		{
			cout << "How many favorites would you like to enter?  ";
			cin >> inputFavorites;
			cin.ignore();
			cout << endl;
			nFavorites += inputFavorites;

			//asks user for favorites input
			for (counter; counter < nFavorites; counter++)
			{
				pFavorites[counter].getFavorites();
			}
		}

		//asks to list, repeat to add more, or quit program
		cout << "For a list of favorites type L, to add more favorites type Y, to quit type Q. ";
		cin >> input;
		cout << " " << endl;
		// if d delete
		// ask for int of fav number, delete number in array +1
		//lists favorites
		if (input == 'l' || input == 'L')
		{
			for (int k = 0; k < nFavorites; k++)
			{

				pFavorites[k].showFavorites();

			}

			cout << "To add more favorites type Y, to quite type Q.";
			cin >> input;
			cout << " " << endl;
			system("CLS");
		}
	}
	delete[] pFavorites;
	return 0;
}
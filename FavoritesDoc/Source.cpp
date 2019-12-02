#include <iostream>
#include "Header.h"
#include "Favoriteslist.h"
#include <string>
#include <fstream>
using namespace std;

int main()
{
	FavoritesList myList;


	int nFavorites = 0;
	char input = 'y';
	int counter = 0;
	cout << "Welcome to our favorite car collection database." << endl;
	cout << "We will first ask how many new favorites you would like to add," << endl;
	cout << "then you will provide those favorites with details." << endl;
	cout << "To add favorites type 'A', to show the list type 'S', to save and quit out type Q." << endl;
	cin >> input;
	cout << " " << endl;
	

	while (input != 'q' && input != 'Q')
	{
		if (input != 'a' && input != 'A')
		{
			if (input != 's' && input != 'S')
			{
				cout << "You entered an incorrect value." << endl;
				cout << "To add favorites type 'A', to show the list type 'S', to save and quit out type Q." << endl;
				cin >> input;
			}
		}
		myList.readFromFile("c:\\users\\owner\\source\\repos\\favoritesdoc\\list.txt");

			if (input == 'a' || input == 'A')
			{
				cout << "How many items would you like to add to the list?" << endl;
				cin >> counter;
				for (int i = 0; i < counter; i++)
				{
					myList.addFav();
				}
				counter = 0;
			}

			if (input == 's' || input == 'S')
			{
				myList.showFav();
			}

		cout << "To add more favorites type 'A', to show the list type 'S', to save and quit out type Q." << endl;
		cin >> input;
		cout << " " << endl;
	}
	myList.writeToFile("c:\\users\\owner\\source\\repos\\favoritesdoc\\list.txt");

	return 0;

}

	

	
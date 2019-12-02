#include <iostream>
#include "Header.h"
#include "Favoriteslist.h"
#include <string>
#include <fstream>
using namespace std;

int main() //could my error be because of it telling me that i have too much in the stack and it needs to be moved to the heap?
{
	FavoritesList myList;


	int nFavorites = 0;
	char input = 'y';
	int counter = 0;
	// initial info and question
	cout << "Welcome to our favorite car collection database." << endl;
	cout << "We will first ask how many new favorites you would like to add," << endl;
	cout << "then you will provide those favorites with details." << endl;
	cout << "To add favorites type 'A', to show the list type 'S', to save and quit out type Q." << endl;
	cin >> input;
	cout << " " << endl;
	
	myList.readFromFile("c:\\users\\owner\\source\\repos\\favoritesdoc\\list.txt"); // where my error is happening


	while (input != 'q' && input != 'Q')
	{
		// if entered non-correct char
		if (input != 'a' && input != 'A')
		{
			if (input != 's' && input != 'S')
			{
				cout << "You entered an incorrect value." << endl;
				cout << "To add favorites type 'A', to show the list type 'S', to save and quit out type Q." << endl;
				cin >> input;
			}
		}
			//adds items 
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
			//shows items
			if (input == 's' || input == 'S')
			{
				myList.showFav();
			}
		//gives option to repeat, or quit
		cout << "To add more favorites type 'A', to show the list type 'S', to save and quit out type Q." << endl;
		cin >> input;
		cout << " " << endl;
	}
	//saves to file
	myList.writeToFile("c:\\users\\owner\\source\\repos\\favoritesdoc\\list.txt"); // seems to save to the list the first time, but then i had it error out on me.

	return 0;

}

	

	
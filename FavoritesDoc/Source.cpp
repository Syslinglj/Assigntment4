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
	string directory = "";
	// initial info and question
	cout << "Welcome to our favorite car collection database." << endl;
	cout << "We will first ask how many new favorites you would like to add," << endl;
	cout << "then you will provide those favorites with details." << endl;
	// C:\\Users\\Owner\\source\\repos\\FavoritesDoc\\list.txt
	cout << "Please enter the file directory location of the file you would like to modify. Must double ""\\ symbols. " << endl;
	cin >> directory;

	cout << "To add favorites type 'A', to show the list type 'S', to save and quit out type Q." << endl;
	cin >> input;
	cin.ignore();
	cout << " " << endl;
	
	


	while (input != 'q' && input != 'Q')
	{
		myList.readFromFile(directory);
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
				cin.ignore();
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
	myList.writeToFile(directory);

	return 0;

}

	

	
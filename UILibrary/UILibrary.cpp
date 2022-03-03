#include "Movies.h"
#include "Restaurants.h"
#include "TVShows.h"
#include "Breweries.h"
#include <iostream>
#include <boost/locale.hpp>
using namespace std;
using namespace boost::locale;

using namespace std;
using namespace BrewLib;
using namespace MovLib;
using namespace ResLib;
using namespace TVLib;


namespace UILib 
{
	void StartUserInterface() 
	{
		generator gen;

		// Specify location of dictionaries
		gen.add_messages_path(".");
		gen.add_messages_domain("messages");

		// Generate locales and imbue them to iostream
		locale::global(gen("de_DE.UTF - 8"));
		cout.imbue(locale());

		cout << translate("Category","Choose Category") << endl;

		cout << "Movies(0)" << endl;
		cout << "Restaurants(1)" << endl;
		cout << "TVShows(2)" << endl;
		cout << "Breweries(3)" << endl;

		int choice = -1;
		while (choice < 0 || choice > 3)
		{
			cin >> choice;
			if (choice < 0 || choice > 3) {
				cout << "Ivalid Option. Please select a valid category." << endl;
			}
		}

		if (choice == 0) {
			cout << "\nYou have chosen <Movies>." << endl;
			Movie myMovie;
			myMovie.MovieMsg();
		}
		else if (choice == 1) {
			cout << "\nYou have chosen <Restaurants>." << endl;
			Restaurant myRestaurant;
			myRestaurant.ResMsg();
		}
		else if (choice == 2) {
			cout << "\nYou have chosen <TVShows>." << endl;
			TVShows myTVShow;
			myTVShow.TVMsg();
		}
		else if (choice == 3) {
			cout << "\nYou have chosen <Breweries>." << endl;
			Breweries myBrewery;
			myBrewery.BrewMsg();
		}
	}
}
#include "Movies.h"
#include "Restaurants.h"
#include "TVShows.h"
#include "Breweries.h"
#include <iostream>

using namespace std;
using namespace BrewLib;
using namespace MovLib;
using namespace ResLib;
using namespace TVLib;

namespace BatchLib
{
	void StartBatchRun()
	{
		Movie myMovie;
		myMovie.MovieMsg();
		Restaurant myRestaurant;
		myRestaurant.ResMsg();
		TVShows myTVShow;
		myTVShow.TVMsg();
		Breweries myBrewery;
		myBrewery.BrewMsg();
	}
}
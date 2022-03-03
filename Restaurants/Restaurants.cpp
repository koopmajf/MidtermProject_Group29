#include "Database.h"
#include "Restaurants.h"
#include <iostream>
#include <boost/locale.hpp>
using namespace std;
using namespace boost::locale;
using namespace DBLib;

namespace ResLib
{
	void Restaurant::ResMsg()
	{
		generator gen;

		// Specify location of dictionaries
		gen.add_messages_path(".");
		gen.add_messages_domain("messages");

		// Generate locales and imbue them to iostream
		locale::global(gen("de_DE.UTF - 8"));
		cout.imbue(locale());

		std::cout << translate("resEnt", "Entered Res Lib") << std::endl;
		Database db;
		db.GetRestaurantMsg();
	}
}
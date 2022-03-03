#include <iostream>
#include "Core.h"
#include "Database.h"
#include <boost/locale.hpp>
using namespace std;
using namespace boost::locale;
using namespace CoreLib;

namespace DBLib
{
	void Database::GetMovieMsg()
	{
		generator gen;

		// Specify location of dictionaries
		gen.add_messages_path(".");
		gen.add_messages_domain("messages");

		// Generate locales and imbue them to iostream
		locale::global(gen("de_DE.UTF - 8"));
		cout.imbue(locale()); 

		std::cout << "You have entered the Database Library." << std::endl;
		std::cout << translate("dbEnt", "Entered DB Lib") << std::endl;
		Core myCore;
		std::string secure = myCore.SecurityCheck();
		std::cout << "Access to the Core is: " + secure << std::endl;
	}

	void Database::GetRestaurantMsg()
	{
		std::cout << "You have entered the Database Library." << std::endl;
		std::cout << "Getting Restaurant..." << std::endl;
		Core myCore;
		std::string secure = myCore.SecurityCheck();
		std::cout << "Access to the Core is: " + secure << std::endl;
	}

	void Database::GetTVShowMsg()
	{
		std::cout << "You have entered the Database Library." << std::endl;
		std::cout << "Getting TV Show..." << std::endl;
		Core myCore;
		std::string secure = myCore.SecurityCheck();
		std::cout << "Access to the Core is: " + secure << std::endl;
	}

	void Database::GetBreweriesMsg()
	{
		std::cout << "You have entered the Database Library." << std::endl;
		std::cout << "Getting Brewery..." << std::endl;
		Core myCore;
		std::string secure = myCore.SecurityCheck();
		std::cout << "Access to the Core is: " + secure << std::endl;
	}
}
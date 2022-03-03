#pragma once
#include <string>
#include <iostream>
#include "Core.h"
#include <boost/locale.hpp>
using namespace std;
using namespace boost::locale;

namespace CoreLib
{

	std::string Core::SecurityCheck()
	{
		generator gen;

		// Specify location of dictionaries
		gen.add_messages_path(".");
		gen.add_messages_domain("messages");

		// Generate locales and imbue them to iostream
		locale::global(gen("de_DE.UTF - 8"));
		cout.imbue(locale());

		std::cout << translate("coreEnt", "Entered Core Lib") << std::endl;
		if (true) {
			return "Secure";
		}
		else {
			return "Not Secure";
		}
	}
}
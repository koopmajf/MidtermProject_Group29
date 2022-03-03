#include "UILibrary.h"
#include "Batch.h"
#include <boost/locale.hpp>
#include <iostream>
using namespace std;
using namespace boost::locale;

int main() 
{
	generator gen;

    // Specify location of dictionaries
    gen.add_messages_path(".");
    gen.add_messages_domain("messages");

    // Generate locales and imbue them to iostream
    locale::global(gen("de_DE.UTF - 8"));
    cout.imbue(locale());

    cout << translate("Welcome", "Welcome Choosr") << endl;
    cout << "Choose a mode" << endl;
    cout << "Interactive (0)" << endl;
    cout << "Batch (1)" << endl;

    int choice = -1;
    cin >> choice;

    if (choice == 0) {
        UILib::StartUserInterface();
    }
    else {
        BatchLib::StartBatchRun();
    }
}
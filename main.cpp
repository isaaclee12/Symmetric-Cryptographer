#include "Converter.h"

int main() {

    //Vars
    vector<char> alphabet = {',', '!', '"', '#', '$', '%', '&', '(', ')', '*', '+', '-', '.', '/', ':', ';',
                             '<', '=', '>', '?', '@', '[', '\\', ']', '^', '_', '`', '{', '|', '}', '~',
                             '0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
                             'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z',
                             'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    vector<char> letters, crypt;
    bool running = true;
    string inputString, junk, again;
    int command;
    Converter converter;

    while (running) {
        //Input
        cout << "Enter input string: " << endl;
        getline(cin, inputString);

        for (char c : inputString) { //Push back each character into a vector
            letters.push_back(c);
            converter.addToCounter(c);
        }

        cout << "Choose an option:\n (1) Encode\n (2) Decode" << endl;
        while (!(cin >> command) || (command != 1 && command != 2)) {
            cin.clear();
            getline(cin, junk);
            cout << "ERROR: " << junk << "is not 1 or 2" << endl;
            cout << "Choose an option:\n (1) Encode\n (2) Decode" << endl;
        }

        //Options
        if (command == 1) {
            //See each counter
            cout << endl << "COUNTERS FOR FREQ. OF EACH LETTER: " << endl;
            converter.printCounters();

            //Sort them
            cout << endl << "SORTING COUNTERS..." << endl;
            converter.sortCounters();

            cout << endl << "COUNTERS SORTED:" << endl;
            converter.printCounters();

            cout << endl << "KEY: " << endl;
            converter.printKey();

            //Encode that message
            string encoded = converter.encode(inputString);
            cout << endl << "ENCODED: " << endl << encoded << endl;

            string decoded = converter.decode(encoded);
            cout << endl << "DECODED: " << endl << decoded << endl;
        } else if (command == 2) {
            cout << "To be implemented" << endl;
        }

        //Again Loop
        cout << "Go again? (y/n)" << endl;
        while (!(cin >> again) || (again != "y" && again != "n")) {
            cin.clear();
            getline(cin, junk);
            cout << "ERROR: " << junk << "is not y or n" << endl;
            cout << "Go again? (y/n)" << endl;
        }
        //Bool
        if (again == "n") {
            running = false;
            cout << endl << "Goodbye!" << endl;
        }
    }



    return 0;
}
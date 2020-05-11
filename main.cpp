#include "Converter.h"

int main() {

    //Vars
    vector<char> alphabet = {',', '!', '"', '#', '$', '%', '&', '(', ')', '*', '+', '-', '.', '/', ':', ';',
                             '<', '=', '>', '?', '@', '[', '\\', ']', '^', '_', '`', '{', '|', '}', '~',
                             '0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
                             'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z',
                             'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    vector<char> letters;
    vector<char> crypt;
    string inputString;

    Converter converter;

    //Input
    cout << "Enter input string: " << endl;
    getline(cin, inputString);

    for (char c : inputString) { //Push back each character into a vector
        letters.push_back(c);
        converter.addToCounter(c);
    }

    //See each counter
    cout << endl << "COUNTERS FOR FREQ. OF EACH LETTER: " << endl;
    converter.printCounters();

    //Sort them
    cout << endl << "SORTING COUNTERS..." << endl;
    converter.sortCounters();

    cout << endl << "COUNTERS SORTED:" << endl;
    converter.printCounters();

    cout << endl << "KEY: " << endl;k
    converter.printKey();

    //Encode that message
    string encoded = converter.encode(inputString);
    cout << endl << "ENCODED: " << endl << encoded << endl;

    string decoded = converter.decode(encoded);
    cout << endl << "DECODED: " << endl << decoded << endl;


    /*for (char c: letters) { //Cryptographise them
    }*/

    return 0;
}
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
    string items;

    Converter converter;

    vector<int> intVector = {2, 4, 5, 86, 23, 49, 10, 912, 3, 23, 1, 40};

    converter.quickSort(0, intVector.size(), intVector);
    cout << "SORTING:" << endl;
    for (int i : intVector) {
        cout << i << ", ";
    }

    //Input
   /* cout << "Enter items: " << endl;
    cin >> items;

    for (char c : items) { //Push back each character into a vector
        letters.push_back(c);
        converter.addToCounter(c);
    }

    //See each counter
    converter.printCounters();

    //Sort them
    cout << endl << "SORTING...." << endl;
    converter.sortCounters();
    converter.printCounters();*/

    /*for (char c: letters) { //Cryptographise them
    }*/

    return 0;
}
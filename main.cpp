#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {

    cout << "Enter items: " << endl;
    string items;
    cin >> items;
    vector<char> alphabet = {',', '!', '"', '#', '$', '%', '&', '(', ')', '*', '+', '-', '.', '/', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', ':', ';', '<', '=', '>', '?', '@', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '[', '\\', ']', '^', '_', '`', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '{', '|', '}', '~'};
    vector<char> letters;
    vector<char> crypt;
    int aCount, bCount, cCount, dCount, ;

    for (char c : items) { //Push back each character into a vector
        letters.push_back(c);
    }

    for (char c: letters) { //Cryptographise them

    }

    return 0;
}
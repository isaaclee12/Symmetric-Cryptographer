//
// Created by isaac on 5/11/2020.
//

#include "Converter.h"

Converter::Converter() {
    srand(time(NULL));
    keyRandomizer();
}

void Converter::addToCounter(char inputChar) {
    //Reset Var
    counterAlreadyExists = false;

    //Check if this char already has a counter

    for (int i = 0; i < counters.size(); ++i) {
        if (inputChar == counters[i].letter) {//If it does, add to that counter
            //DEBUG: cout << "Repeat of: " << inputChar << endl;
            counterAlreadyExists = true;
            counters[i].count += 1; //add to that count
        }
    }

    if (!counterAlreadyExists) { // if counter never found, make a new one and push it back
        //DEBUG: cout << "FOUND: " << inputChar << endl;
        tempCounter.letter = inputChar;
        tempCounter.count = 1;
        counters.push_back(tempCounter);
    }
}

void Converter::printCounters() {
    for (int i = 0; i < counters.size(); ++i) {
        if (i != counters.size() - 1) {
            cout << counters[i].letter << ": " << counters[i].count << ", ";
        } else {
            cout << counters[i].letter << " : " << counters[i].count;
        }
    }
    cout << endl;
}

void Converter::sortCounters() {
    for (int i = 0; i < counters.size(); ++i) {
        for (int j = i + 1; j < counters.size(); ++j) {
            if (counters[i].count < counters[j].count) {
                temp = counters[i];
                counters[i] = counters[j];
                counters[j] = temp;
            }
        }
    }
}

void Converter::keyRandomizer() {
    vector<int> indexVector;
    vector<char> tempVector(key.size());
    int index;
    bool foundIndex = false;
    //sortCounters(key.begin(), key.end());


    for (int i = 0; i < key.size(); ++i) { //for every item
        index = rand() % key.size();
        //If index isn't already in the indexVector
        //cout << "Attempting to push item at index: " << i << " to index: " << index;
        if (keyRandomizerHelper(index, indexVector)) {
            tempVector[index] = key[i]; //Current item goes to the random index
            indexVector.push_back(index); //Add index to already used indeces
            //cout << ": Success" << endl;
        } else {
            //cout << ": Failed " << endl;
            --i; //Try the item at the same index again if it was already used
        }
    }

    for (int i = 0; i < tempVector.size(); ++i) {
        key[i] = tempVector[i];//pump em back in
    }
    tempVector.clear();
    indexVector.clear(); //Clear memory
}

bool Converter::keyRandomizerHelper(int index, vector<int> &indexVector) {
    for (int j = 0; j < indexVector.size(); ++j) {
        if (indexVector[j] == index) {
            return false; //Used already, kill it
        }
    }
    return true; //Not already used, it's good
}

void Converter::printKey() {
    cout << "KEY:" << endl;
    for (char c : key) {
        cout << c;
    }
    cout << endl;
}

int Converter::findCountRank(char inputChar) { //Grabs the index/rank of most frequent letter. Most frequent = 0.
    for (int i = 0; i < counters.size(); ++i) {
        if (inputChar == counters[i].letter) { //get the counter with that letter
            return i; //return index
        }
    }
    return -1; //if not found return -1
}

string Converter::encode(string s) {
    encodedMessage = "";
    for (int i = 0; i < s.length(); ++i) {
        if (findCountRank(s[i] >= 0)) { //if it's found
            encodedMessage += key[findCountRank(s[i])]; //replace that letter with the corresponding one in key
        }
    }
    return encodedMessage;
}

int Converter::findKeyRank(char inputChar) {
    for (int i = 0; i < key.size(); ++i) { //search the whole key
        if (inputChar == key[i]) { //when we find the item
            return i; //return its index in the key
        }
    }
    return -1;  //if not found return -1
}

string Converter::decode(string s) {
    decodedMessage = "";

    for (int i = 0; i < s.length(); ++i) {
        if (findKeyRank(s[i] >= 0)) { //if it's found
            decodedMessage += counters[findKeyRank(s[i])].letter; //replace that letter with the corresponding one in key
        }
    }

    return decodedMessage;
}


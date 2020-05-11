//
// Created by isaac on 5/11/2020.
//

#include "Converter.h"

Converter::Converter() {

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
    for (counter c : counters) {
        cout << c.letter << " : " << c.count << endl;
    }
}

void Converter::swap(int a, int b, vector<int> &vector) {
    /*temp = counters[a]; //Save current post-pivot item
    counters[b] = counters[a]; //reassign new low value as pivot
    counters[a] = temp; //and put old post-pivot where that value was (swapped)*/



    int t = vector[b];
    cout << "Swapping: " << vector[a] << " & " << vector[b] << endl;
    vector[b] = vector[a];
    vector[a] = t;
}

int Converter::partition(int low, int high, vector<int> &vector) {
    if ( !((high - low > 1) && vector[high] == vector[low]) && (high - low > 0)) { //If NOT (two items and they are equal) AND (one item or less)

        int pivot = low; //pivot is first item's index
        low = pivot + 1;

        for (int j = low + 1; j < high; ++j) {

            cout << endl << endl << "low: " << low << " j: " << j << " item at low: " << vector[low] << " item at j: " << vector[j] << " current pivot: " << vector[pivot] << endl;

            if (vector[j] < vector[pivot]) { // if anything after pivot is lesser than pivot,
                swap(j, low, vector); //swap them. The j's caught by this are "lower" than pivot
                ++low; //border where items are split between lesser/greater than pivot is moved up.
            }

            //debug
            for (int i : vector) {
                cout << i << ", ";
            }
        }

        //Swap pivot and low-1 so that the pivot is between lesser/greater chunks
        cout << endl  << endl << "PIVOT MOVED: " << vector[pivot] << " COMPLETE" << endl;
        swap(pivot, low - 1, vector);
    }


    return (low);
}

void Converter::quickSort(int low, int high, vector<int> &vector) {
    if (low < high) { //prevents infinite recursion, stops when items are equal

        int p = partition(low, high, vector);
        cout << "pivot index: " << p << " pivot item: " << vector[p] << endl;

        //After splitting post-pivot items into lesser/greater than chunks, do this again for both chunks.
        quickSort(low, p - 1, vector); // From below pivot
        quickSort(p + 1, high, vector); //From above pivot
    }



}


void Converter::sortCounters() {


    /*int pivot = 0;

    for (int i = pivot; pivot < counters.size();) { //for every item that hasn't been sorted
        int lesser = pivot + 1; // items after pivot

        for (int j = pivot + 1; j < counters.size(); ++j) { //for every item after the pivot

            if (counters[j].count < counters[lesser].count) { //If an item after "lesser" has a lower value...
                swap(lesser, j); //swap their positions
                ++lesser; //increase post-pivot index for items "lesser" than the pivot
            }
            for (counter c: counters) {
                cout << c.letter << ": " << c.count << ",   " << endl;
            }
            cout << "________________" << endl;
        }

        //then swap pivot with lesser-1 to get partition
        swap(pivot, lesser - 1);
    }*/
}

void Converter::alphabetScramble(vector<char> chars) {

}


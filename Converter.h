//
// Created by isaac on 5/11/2020.
//

#ifndef CRYPTOGRAPHER_CONVERTER_H
#define CRYPTOGRAPHER_CONVERTER_H

#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct counter {
    char letter;
    int count;
};

class Converter {

protected:

    /*int commaCount, exclamationPointCount, doubleQuoteCount, hashtagCount, dollarSignCount, percentCount, ampersandCount, leftParenthesesCount, rightParenthesesCount, asteriskCount, plusCount, minusCount, periodCount, forwardSlashCount, colonCount, semicolonCount, lessThanCount, equalsCount, greaterThanCount, questionMarkCount, atSymbolCount,
    leftSquareBracketCount, backSlashCount, rightSquareBracketCount, caratCount, underscoreCount, tickCount, leftCurlyBracketCount, straightLineCount, rightCurlyBracketCount, tildaCount,
    zeroCount, oneCount, twoCount, threeCount, fourCount, fiveCount, sixCount, sevenCount, eightCount, nineCount,
    ACount, BCount, CCount, DCount, ECount, FCount, GCount, HCount, ICount, JCount, KCount, LCount, MCount, NCount, OCount, PCount, QCount, RCount, SCount, TCount, UCount, VCount, WCount, XCount, YCount, ZCount,
    aCount, bCount, cCount, dCount, eCount, fCount, gCount, hCount, iCount, jCount, kCount, lCount, mCount, nCount, oCount, pCount, qCount, rCount, sCount, tCount, uCount, vCount, wCount, xCount, yCount, zCount;
    */

    vector<counter> counters;
    counter tempCounter;
    bool counterAlreadyExists;

    //Sorting
    counter temp;
    int ct = 0;

public:
    Converter();

    void addToCounter(char inputChar);
    void printCounters();
    void swap(int a, int b, vector<int> &vector);
    int partition(int low, int high, vector<int> &vector);
    void quickSort(int low, int high, vector<int> &vector);
    void sortCounters();
    void alphabetScramble(vector<char> chars);


};

#endif //CRYPTOGRAPHER_CONVERTER_H

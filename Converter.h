//
// Created by isaac on 5/11/2020.
//

#ifndef CRYPTOGRAPHER_CONVERTER_H
#define CRYPTOGRAPHER_CONVERTER_H

#include <iostream>
#include <string>
#include <vector>
#include <ctime>
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
    vector<char> key = {',', '!', '"', '#', '$', '%', '&', '(', ')', '*', '+', '-', '.', '/', ':', ';',
                        '<', '=', '>', '?', '@', '[', '\\', ']', '^', '_', '`', '{', '|', '}', '~',
                        '0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
                        'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z',
                        'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};


    //Sorting
    counter temp;
    int ct = 0;
    string encodedMessage;



public:
    Converter();

    void addToCounter(char inputChar);
    void printCounters();
    void sortCounters();

    void keyRandomizer();
    bool keyRandomizerHelper(int index, vector<int> &indexVector);
    void printKey();
    int findCountRank(char inputChar);
    string encode(string s);
    string decode(string);
};

#endif //CRYPTOGRAPHER_CONVERTER_H

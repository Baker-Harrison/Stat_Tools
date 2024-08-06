// StatTools.h

#ifndef STAT_TOOLS_STATTOOLS_H
#define STAT_TOOLS_STATTOOLS_H

#include <vector>
#include <iostream>
#include <cmath>

using namespace std;

class StatTools
{
public:
    template <class T>
    static T getMax(vector<T> listOfNumbers);

    template <class T>
    static T getMin(vector<T> listOfNumbers);

    template <class T>
    static T getMean(vector<T> listOfNumbers);

    template <class T>
    static T getMode(vector<T> listOfNumbers);

    template <class T>
    static T getMedian(vector<T> listOfNumbers);

    template <class T>
    static void printStemAndLeaf(vector<T> listOfNumbers);

    template <class T>
    static void printBarGraph(vector<T> listOfNumbers);
};

// Definitions

template <class T>
T StatTools::getMax(vector<T> listOfNumbers) {
    T max = listOfNumbers[0];
    for (int i = 0; i < listOfNumbers.size(); i++) {
        if (listOfNumbers[i] > max) {
            max = listOfNumbers[i];
        }
    }
    return max;
}

template <class T>
T StatTools::getMin(vector<T> listOfNumbers) {
    T min = listOfNumbers[0];
    for (int i = 0; i < listOfNumbers.size(); i++) {
        if (listOfNumbers[i] < min) {
            min = listOfNumbers[i];
        }
    }
    return min;
}

template <class T>
T StatTools::getMean(vector<T> listOfNumbers) {
    double total = 0;
    for (int i = 0; i < listOfNumbers.size(); i++) {
        total += listOfNumbers[i];
    }
    return static_cast<T>(total / listOfNumbers.size());
}

template <class T>
T StatTools::getMode(vector<T> listOfNumbers) {
    if (listOfNumbers.empty()) {
        cout << "The list of numbers is empty." << endl;
        return T(); // Return default value of T
    }

    vector<T> runningTotalOfEach;
    vector<T> listOfUniqueNumbers;
    runningTotalOfEach.push_back(1);
    listOfUniqueNumbers.push_back(listOfNumbers[0]);

    T num = listOfNumbers[0];
    int count = 0;

    for (int i = 1; i < listOfNumbers.size(); ++i) {
        T number = listOfNumbers[i];
        if (num != number) {
            count++;
            runningTotalOfEach.push_back(1);
            num = number;
            listOfUniqueNumbers.push_back(number);
        } else {
            runningTotalOfEach[count] += 1;
        }
    }

    int maxCount = getMax(runningTotalOfEach);
    for (int i = 0; i < runningTotalOfEach.size(); ++i) {
        if (runningTotalOfEach[i] == maxCount) {
            return listOfUniqueNumbers[i];
        }
    }

    return T(); // Return default value of T
}

template <class T>
T StatTools::getMedian(vector<T> listOfNumbers) {
    if (listOfNumbers.empty()) {
        cout << "The list of numbers is empty." << endl;
        return T(); // Return default value of T
    }

    size_t size = listOfNumbers.size();
    sort(listOfNumbers.begin(), listOfNumbers.end());

    if (size % 2 != 0) {
        return listOfNumbers[(size - 1) / 2];
    } else {
        return (listOfNumbers[(size - 1) / 2] + listOfNumbers[size / 2]) / static_cast<T>(2);
    }
}

template <class T>
void StatTools::printBarGraph(vector<T> listOfNumbers) {
    // Example bar graph - you would replace this with your actual bar graph logic
    cout << "Bar Graph" << endl << "|" << endl
         << "|" << endl
         << "|" << "             " << "   " << "       " << "   " << "    ### " << "             " << "   " << " ###" << "   " << "    ### " << endl
         << "|" << "             " << "   " << "       " << "   " << "    ### " << "             " << "   " << " ###" << "   " << "    ### " << endl
         << "|" << "             " << "   " << "       " << "   " << "    ### " << "   ###    " << "   " << " ###" << "   " << "    ### " << endl
         << "|" << "      ### " << "   " << "       " << "   " << "    ### " << "   ###    " << "   " << " ###" << "   " << "    ### " << endl
         << "|" << "      ### " << "   " << " ###" << "   " << "    ### " << "   ###    " << "   " << " ###" << "   " << "    ### " << endl
         << "|" << "      ### " << "   " << " ###" << "   " << "    ### " << "   ###    " << "   " << " ###" << "   " << "    ### " << endl
         << "|" << "________________________________" << endl;
}

template <class T>
void StatTools::printStemAndLeaf(vector<T> listOfNumbers) {
    cout << "Stem and Leaf Plot, maybe?" << endl
         << "|" << "                / \\   " << endl
         << "|" << "               /   \\" << endl
         << "|" << "             /       \\" << endl
         << "|" << "           /          \\" << endl
         << "|" << "   ___/             \\____" << endl
         << "|" << "_________________________";
}

#endif // STAT_TOOLS_STATTOOLS_H

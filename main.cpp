#include <iostream>
#include <algorithm>
#include "include/StatTools.h"

int main() {

	vector<long long> IntegerNumbers = {5, 10, 5};
    vector<double> FloatingPointNumbers = {5.5, 10.5, 5.5, 10.5, 10.5};

	sort(IntegerNumbers.begin(), IntegerNumbers.end());

    sort(FloatingPointNumbers.begin(), FloatingPointNumbers.end());




	cout << "Max Integer: " << StatTools::getMax(IntegerNumbers) << endl;
    cout << "Max Floating Point: " << StatTools::getMax(FloatingPointNumbers) << endl;
    cout << "Min Integer: " << StatTools::getMin(IntegerNumbers) << endl;
    cout << "Min Floating Point: " << StatTools::getMin(FloatingPointNumbers) << endl;
    cout << "Mean Integer: " << StatTools::getMean(IntegerNumbers) << endl;
    cout << "Mean Floating Point: " << StatTools::getMean(FloatingPointNumbers) << endl;
    cout << "Median Integer: " << StatTools::getMedian(IntegerNumbers) << endl;
    cout << "Median Floating Point: " << StatTools::getMedian(FloatingPointNumbers) << endl;
    cout << "Mode Integer: " << StatTools::getMode(IntegerNumbers) << endl;
    cout << "Mode Floating Point: " << StatTools::getMode(FloatingPointNumbers) << endl;


	StatTools::printBarGraph(IntegerNumbers);
    StatTools::printBarGraph(FloatingPointNumbers);
    cout << endl;

	cout << endl << endl << endl;
	StatTools::printStemAndLeaf(IntegerNumbers);
    cout << endl;
    StatTools::printStemAndLeaf(FloatingPointNumbers);

	return 0;
}

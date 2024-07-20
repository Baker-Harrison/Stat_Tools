#include <iostream>
#include <algorithm>
#include "include/StatTools.h"

int main() {

	vector<long long> numbers = {5, 10, 15, 20, 20, 40, 40};

	sort(numbers.begin(), numbers.end());

	int counter = 1;
	for (long long number : numbers)
	{
		cout << "Number " << counter << ": " << number << endl;
		counter++;
	}


	cout << "Max: " << StatTools::getMax(numbers) << endl;
	cout << "Min: " << StatTools::getMin(numbers) << endl;
	cout << "Mean: " << StatTools::getMean(numbers) << endl;
	cout << "Median: " << StatTools::getMedian(numbers) << endl;
	StatTools::printBarGraph(numbers);

	cout << endl << endl << endl;
	StatTools::printStemAndLeaf(numbers);
	return 0;
}

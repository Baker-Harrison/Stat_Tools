//
// Created by Harrison Baker on 7/19/24.
//
#include "../include/StatTools.h"
#include <cmath>


long long StatTools::getMax(vector<long long int> listOfNumbers) {
	long long max = listOfNumbers[0];
	for (int i = 0; i < listOfNumbers.size(); i++)
	{
		if (listOfNumbers[i] > max)
		{
			max = listOfNumbers[i];
		}
	}
	return max;
}

long long StatTools::getMin(vector<long long int> listOfNumbers) {
	long long min = listOfNumbers[0];
	for (int i = 0; i < listOfNumbers.size(); i++)
	{
		if (listOfNumbers[i] < min)
		{
			min = listOfNumbers[i];
		}
	}
	return min;
}

double StatTools::getMean(vector<long long int> listOfNumbers) {
	double total;
	total = 0;
	for (int i = 0; i < listOfNumbers.size(); i++)
	{
		total += listOfNumbers[i];
	}


	return total / (double) listOfNumbers.size();
}

long long StatTools::getMode(vector<long long int> listOfNumbers) {
	long long mode;
	mode = 0;


	return mode;
}

double StatTools::getMedian(vector<long long int> listOfNumbers) {

	double median;


	if (listOfNumbers.size() % 2 != 0)
	{
		median = listOfNumbers[(listOfNumbers.size() - 1) / 2];
	}
	else
	{
		median = (listOfNumbers[(listOfNumbers.size() - 1) / 2] + listOfNumbers[(listOfNumbers.size()) / 2]) / (double) 2;
	}


	return median;

}

void StatTools::printBarGraph(vector<long long int> listOfNumbers) {

	if (listOfNumbers.empty()) {
		cout << "The list of numbers is empty." << endl;
		return;
	}

	int count = 0;
	vector<long long> runningTotalOfEach(1, 0);

	long long num = listOfNumbers[0];

	for (long long number: listOfNumbers) {
		if (num != number) {
			count++;
			runningTotalOfEach.push_back(1);
			num = number;
		} else {
			runningTotalOfEach[count] += 1;
		}
	}
	cout << "-----------------------" << endl;
	for (long long total: runningTotalOfEach) {
		cout << total << endl;
	}

	cout << "-----------------------" << endl;

	cout << "Bar Graph" << endl << "|" << endl
			<< "|" << endl
			<< "|" <<  "            " << "   " << "       " <<  "   " << "     ### " << endl
			<< "|" <<  "            " << "   " << "       " <<  "   " << "     ### " << endl
			<< "|" << "             " << "   " << "       " << "   " << "    ### " << endl
			<< "|" << "      ### " << "   " << "       " << "   " << "    ### " << endl
			<< "|" << "      ### " << "   " << " ###" << "   " << "    ### " << endl
			<< "|" << "      ### " << "   " << " ###" << "   " << "    ### " << endl
			<< "|" << "________________________________" << endl;
}

void StatTools::printStemAndLeaf(vector<long long int> listOfNumbers) {
	cout << "Stem and Leaf Plot, maybe?" << endl
			<< "|" << "                / \\   " << endl
			<< "|" << "               /   \\" << endl
			<< "|" << "             /       \\" << endl
			<< "|" << "           /          \\" << endl
			<< "|" << "   ___/             \\____" << endl
			<< "|" << "_________________________";
}


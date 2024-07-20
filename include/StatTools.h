//
// Created by Harrison Baker on 7/19/24.
//

#include <vector>
#include <iostream>

using namespace std;

#ifndef STAT_TOOLS_STATTOOLS_H
#define STAT_TOOLS_STATTOOLS_H




class StatTools
{
public:
	static long long getMax(vector<long long int> listOfNumbers);
	static long long getMin(vector<long long int> listOfNumbers);
	static double getMean(vector<long long int> listOfNumbers);
	static long long  getMode(vector<long long int> listOfNumbers);
	static double  getMedian(vector<long long int> listOfNumbers);

	static void printStemAndLeaf(vector<long long int> listOfNumbers);
	static void printBarGraph(vector<long long int> listOfNumbers);

};


#endif //STAT_TOOLS_STATTOOLS_H

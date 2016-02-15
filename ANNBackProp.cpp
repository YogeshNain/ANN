//============================================================================
// Name        : ANNBackProp.cpp
// Author      : Yogesh Nain
// Version     :
// Copyright   : Copying and re-issuing these example is prohebited. You can not use them in your code for profit. But you can use them for non profit use.
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Net.h"
using namespace std;

using namespace OCR;
int main() {
	cout << "OCR with ANN" << endl; // prints OCR with ANN
	std::vector<double> inputValues;
    std::vector<double> targetVals;
    std::vector<double> resultSets;
    std::vector<unsigned>topology;
	Net myNetwork(topology);
	myNetwork.feedForward(inputValues);
	myNetwork.backProp(targetVals);
	myNetwork.getResults(resultSets);

	return 0;
}

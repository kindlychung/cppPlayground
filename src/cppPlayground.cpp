//============================================================================
// Name        : testarma.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
//#include <armadillo>
#include <vector>
#include <string>
#include <fstream>
#include "readcols.h"
#include "printlines.h"
using namespace std;





int main() {
    std::string testfile = "/Users/kaiyin/Desktop/testfile";
    printlines(testfile);
	std::vector<unsigned int> cols {1, 6};
	std::vector< std::vector< std::string > > x = readcols(testfile, cols, 1, 3);
	for (std::vector<std::string> col : x) {
		for (std::string elem : col) {
			cout << elem << " ";
		}
		cout << "\n";
	}

	return 0;
}


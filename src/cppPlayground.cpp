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
	std::vector<unsigned int> cols {1};
	readcols(testfile, cols);
	return 0;
}


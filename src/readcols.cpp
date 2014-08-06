/*
 * read columns of a 3-col file
 *
 *  Created on: Jul 26, 2014
 *      Author: kaiyin
 */

#include "readcols.h"


void readcols(std::string fn, std::vector<unsigned int> colsel) {
	try {
		if(colsel.empty()){
			throw std::string("You didn't select any column!");
		}

		unsigned int nc_file = ncols(fn);
		unsigned int nc = colsel.size();
		unsigned int nr = countlines(fn);
		unsigned int colsel_max = *std::max_element(colsel.begin(), colsel.end());

		if(colsel_max > nc_file) {
			throw std::string("Some col number(s) are out of range!");
		}

		// c++ is 0-based, adjust for it
		for(unsigned int i=0; i<colsel.size(); i++) {
			colsel[i]--;
		}

		// initialize a 2d vector (matrix) with fixed size
		std::vector< std::vector< std::string > > res ( nc, std::vector< std::string > (nr) );
		std::ifstream infile(fn);
		for(int i=0; i<nr; i++) {
			unsigned int n=0;
			for(int j=0; j<=colsel_max; j++) {
				std::string tmpword;
				infile >> tmpword;
				if(std::find(colsel.begin(), colsel.end(), j) != colsel.end()) {
					res[n][i] = tmpword;
					n++;
				}
			}
			infile.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}

		std::cout << "Print out cols: " << "\n";
		for(std::vector< std::string > resrow : res) {
			for(std::string elem : resrow) {
				std::cout << elem << " ";
			}
			std::cout << "\n";
		}
	}
	catch(std::string& e) {
		std::cerr << e << "\n";
	}
}




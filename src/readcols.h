/*
 * readcols.h
 *
 *  Created on: Jul 26, 2014
 *      Author: kaiyin
 */

#ifndef READCOLS_H_
#define READCOLS_H_



#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include "ncols.h"
#include "countlines.h"

void readcols(std::string fn, std::vector<unsigned int> colsel);



#endif /* READCOLS_H_ */


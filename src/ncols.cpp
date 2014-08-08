/*
 * ncols.cpp
 *
 *  Created on: Jul 26, 2014
 *      Author: kaiyin
 */



#include "ncols.h"

// Counts the number of columns of tab / space delimited file.
// Quoted fields not supported, assumes that no field contains any whitespace!

size_t ncols(std::string fn) {
    try {
        fileExists(fn);
        std::ifstream in_file(fn);
        std::string tmpline;
        std::getline(in_file, tmpline);
        std::vector<std::string> strs;
        strs = boost::split(strs, tmpline, boost::is_any_of(" \t"), boost::token_compress_on);
        return strs.size();
    } catch (const std::string& e) {
        std::cerr << "\n" << e << "\n";
        exit(EXIT_FAILURE);
    }
}

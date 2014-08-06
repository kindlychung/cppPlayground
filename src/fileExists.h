/*
 * fileExists.h
 *
 *  Created on: Jul 26, 2014
 *      Author: kaiyin
 */

#include <cstdlib>
#include <unistd.h>


#ifndef FILEEXISTS_H_
#define FILEEXISTS_H_




inline void fileExists (const std::string& name);

void fileExists (const std::string& name) {
    if ( access( name.c_str(), F_OK ) == -1 ) {
        throw std::string("File does not exist!");
    }
}

#endif /* FILEEXISTS_H_ */







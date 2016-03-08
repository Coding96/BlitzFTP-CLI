/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   File.cpp
 * Author: Edward
 * 
 * Created on 08 March 2016, 01:49
 */

#include "File.h"
#include <cstdlib>

using namespace std;

string PathToFile;
string FileData;

File::File() {
}

File::File(const File& orig) {
}

File::~File() {
}

int SetFileData(string RequiredPath)
{
    /*
     *in here use requiredpath to fill filedata with chars that can be 
     * decoded the other end 
     * /
}
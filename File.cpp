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

using std::string;

File::File() {
    using std::cout;
    //-----------debugging------------------
    cout << "\nFile Object Created\n";
    //----------debugging-------------------
}


File::~File() {
    using std::cout;
    //--------debugging------------------
    cout << "\nFile Object Deleted\n";
    //-----------------------------------
}

int SetFileData(string PathToFile)
{
    string FileData = "";
    return 0;
}
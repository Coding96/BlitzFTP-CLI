/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   File.h
 * Author: Edward
 *
 * Created on 08 March 2016, 01:49
 */


#ifndef FILE_H
#define FILE_H


#include <string>
#include <iostream>
#include <fstream>

using std::string;
using std::cout;
using std::ifstream;

class File
{
  int CURRENT_BLOCK_NUMBER;
  string FILE_PATH;
public:
  //constructor
  File ();
  //destructor
  ~File ();
  //methods
  int SetFileData (string PathToFile);
  string getCurrentFilePath ();
  void setCurrentBlockNumber(int newBlockNumber);
  int getCurrentBlockNumber ();
private:

};



#endif /* FILE_H */



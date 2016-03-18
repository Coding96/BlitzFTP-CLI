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

#include "../Header/File.h"

int CURRENT_BLOCK_NUMBER;
string FILE_PATH;

File::File()
{
  //initilize variables on construction
  CURRENT_BLOCK_NUMBER = 0;
  FILE_PATH = "";
  //-----------debugging------------------
  cout << "\nFile Object Created\n";
  //----------debugging-------------------
}

File::~File()
{
  //--------debugging------------------
  cout << "\nFile Object Deleted\n";
  //-----------------------------------
}

int File::SetFileData(string PathToFile)
{
  FILE_PATH = PathToFile;
  //current block number needs to be set
  //using the method set block number

  ifstream inputstream(PathToFile.c_str(), ifstream::in);
  string FileData = "";

  for (int counter = CURRENT_BLOCK_NUMBER; counter < 512 + CURRENT_BLOCK_NUMBER;
          counter++)
  {
    for (int counter = 0; counter < 512 * CURRENT_BLOCK_NUMBER; counter++)
    {
      //read and discard all data up until the
      //correct block is reached
      string temp = "";
      getline(inputstream, temp);
    }

    //get 512 bytes of data to send
    getline(inputstream, FileData);
  }

  if (inputstream.is_open() == true)
    inputstream.close();

  return 0;
}

void File::setCurrentBlockNumber(int newBlockNumber)
{
    CURRENT_BLOCK_NUMBER = newBlockNumber;
}

int File::getCurrentBlockNumber()
{
  return CURRENT_BLOCK_NUMBER;
}

string File::getCurrentFilePath()
{
  return FILE_PATH;
}
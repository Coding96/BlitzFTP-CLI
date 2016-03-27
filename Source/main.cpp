
/* 
 * File:   main.cpp
 * Author: Edward
 *
 * Created on 07 March 2016, 21:42
 */

#include "../Header/Network.h"
#include "../Header/FileSendReceive.h"
#include "../Header/File.h"
#include "../Header/KeyManagement.h"


/*
 * 
 */
int main(void)
{


  //-----------------------------------------------------------
  // This Section exists for debugging
  //------------------------------------------------------------
  ConnectToNetwork();
  //first thing we need to do is connect to our network
  //either peers or server
  ImportContacts();
  //next contacts must be updated to ensure no orphans
  //exist in the network
    
  string menuchoice;
  
  while(menuchoice != "0")
  {
      cout << "\n-------------------\n";
      
      cout << "0: quit\n"
            << "\n1: send File\n"
             << "\n2: refresh Hosts"
              << "\n-------------------\n"
                << "Choice(0-2):";
             
    cin >> menuchoice;
    
    cout << "-------------------\n";
    
    if (menuchoice == "2")
    {
        RefreshHosts();
    }
  }

  File myFile;
  
  cout << "\n" << myFile.getCurrentBlockNumber() << "\n";
  
  SendFile(myFile);
  //-------------------------------------------------------------

  return 0;
}
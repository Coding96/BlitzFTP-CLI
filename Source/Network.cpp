
/* 
 * File:   Network.cpp
 * Author: Edward
 * 
 * Created on 07 March 2016, 21:49
 */

#include "../Header/Network.h"

void ConnectToNetwork()
{
  //this line exist for debugging only
  std::cout << "\nConnectToNetwork\n";
  /*
   * TODO allow primitive to connect to the network
   */
}

void ImportContacts()
{
  
  ifstream hostreader("./Hosts.txt", ifstream::in);
  
  if (hostreader.good())
  {
    //this means file exists
    //and needs to be read
  }
  else
  {
    //file does not exist and 
    //should be created
    ofstream hostwriter("./Hosts.txt",ifstream::out);
    hostwriter << "To be filled with hosts";
    
    if (hostwriter.is_open())
    hostwriter.close;
  }
  
  if (hostreader.is_open())
    hostreader.close();
  
  //this line exist for debugging only
  std::cout << "\nImportContacts\n";
  /*
   * TODO create code logic to find server or other users to build
   * a local database of random users
   */
}

void FindPeer(std::string Peername)
{

  /*
   The string Peername will contain the UID of the peer we are looking for
   * to begin our contacts must be searched after that we need to ask the
   * network or server if they can find this user
   */
}


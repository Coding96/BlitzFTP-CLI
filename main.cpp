
/* 
 * File:   main.cpp
 * Author: Edward
 *
 * Created on 07 March 2016, 21:42
 */

#include <cstdlib>
#include <string>
#include "Network.h"

using namespace std;
using std::string;
/*
 * 
 */
int main(void) {
    
    
    
    ConnectToNetwork();
    //first thing we need to do is connect to our network
    //either peers or server
    ImportContacts();
    //next contacts must be updated to ensure no orphans
    //exist in the network

    
    return 0;
}


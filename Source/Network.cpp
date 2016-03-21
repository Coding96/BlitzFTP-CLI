
/* 
 * File:   Network.cpp
 * Author: Edward
 * 
 * Created on 07 March 2016, 21:49
 */



#include "../Header/Network.h"

void ConnectToNetwork() {
    
    //this line exist for debugging only
    cout << "\nConnectToNetwork\n";
    /*
     * TODO allow primitive to connect to the network
     */
    
    ifstream hostreader("./Hosts.txt", ifstream::in);

    if (hostreader.good()) {
        cout << "->Host file found\n";
        //this means file exists
        //and needs to be read
    } else {
        //file does not exist and 
        //should be created

        cout << "->No Host file found creating one\n";

        ofstream hostwriter("./Hosts.txt", ofstream::out);
        
        //write out the number of hosts
        hostwriter << "0";
        
        hostwriter << "\nTo be filled with hosts";

        if (hostwriter.is_open()) {
            hostwriter.close();
        }
    }

    if (hostreader.is_open()) {
        hostreader.close();
    }
    
}

void ImportContacts() {

    //this line exist for debugging only
    cout << "\nImportContacts \n";
    /*
     * TODO create code logic to find server or other users to build
     * a local database of random users
     */
    ifstream friendReader("Friends.txt", ifstream::in);
   
    
    if (friendReader.good())
    {
        cout << "->Friend List found\n";
    }
    else
    {
         ofstream friendWriter("Friends.txt", ofstream::out);
        friendWriter << "0";
        cout << "->Friend List initialised\n";
        
        if (friendWriter.is_open()) {
        friendWriter.close();
        }
    }
    
    if (friendReader.is_open()) {
        friendReader.close();
        }
     
}

void FindPeer(string Peername) {

    /*
     The string Peername will contain the UID of the peer we are looking for
     * to begin our contacts must be searched after that we need to ask the
     * network or server if they can find this user
     */
    
    //firstly we want to see if we already have the person
    //we are looking for in our hosts file
    
    ifstream hostreader("./Hosts.txt", ifstream::in);
    
    string stringNumOfHosts;
    
    getline(hostreader, stringNumOfHosts);
    
    int numOfHosts = atoi(stringNumOfHosts.c_str());
    
    
    for(int counter = 0; counter < numOfHosts; counter++)
    {
        string HostLine;
        getline(hostreader, HostLine);
        
        if (HostLine == Peername)
        {
            cout << "Peer found";
        }
    }
    
    if (hostreader.is_open()) {
        hostreader.close();
    }
    
    //if we dont we need to ask others on the network
    
    
}

void RefreshHosts()
{
    cout << "\n->Refreshing Hosts file...\n";
    
    remove("./Hosts.txt");
    
    int numOfHosts = 0;
    
    ofstream hostwriter("./Hosts.txt", ofstream::out);
        
    //write out the number of hosts
    hostwriter << numOfHosts;
        
    hostwriter << "\nHosts that have been refreshed\n";

    if (hostwriter.is_open()) {
        hostwriter.close();
    }
    
}

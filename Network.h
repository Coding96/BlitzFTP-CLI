/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Network.h
 * Author: Edward
 *
 * Created on 07 March 2016, 21:49
 */

#ifndef NETWORK_H
#define NETWORK_H

class Network {
public:
    Network();
    Network(const Network& orig);
    virtual ~Network();
private:

};

void ImportContacts();
void ConnectToNetwork();

#endif /* NETWORK_H */


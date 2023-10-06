#ifndef VERIFYSIGNHANDLER_H
#define VERIFYSIGNHANDLER_H

#include "BaseHandler.h"
#include <iostream>
#include <sstream>
#include <random>

class VerifySignHandler : public BaseHandler {
public:
     void handleRequest(int opt) override{
        if(opt==2){
            std::cout << "Verifying signature" << std::endl;
            std::cout << "Signature verified" << std::endl;
            //making random nonce
            std::random_device rd;
            std::mt19937 generator(rd());
            std::uniform_int_distribution<int> distribution(1000, 9999); // Range from 1000 to 9999 (inclusive)

            // Generate a random nonce as an integer
            int TokenInt = distribution(generator);

            // Convert the integer to a string
            std::ostringstream oss;
            oss << TokenInt;
            std::string TokenString = oss.str();
            std::cout << "token" << TokenString<<std::endl;

        }else{
            BaseHandler::handleRequest(opt);
        }
     }
};
#endif
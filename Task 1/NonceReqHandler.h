#ifndef NONCEREQHANDLER_H
#define NONCEREQHANDLER_H
#include "BaseHandler.h"
#include <iostream>
#include <sstream>
#include <random>
class NonceReqHandler : public BaseHandler {
public:
    //string vector for nonces
    std::vector<std::string> nonces;
    void handleRequest(int opt) override{
        if(opt == 1){
            std::cout << "NonceReqHandler" << std::endl;
            std::cout << "Generating nonce" << std::endl;
            //making random nonce
            std::random_device rd;
            std::mt19937 generator(rd());
            std::uniform_int_distribution<int> distribution(1000, 9999); // Range from 1000 to 9999 (inclusive)

            // Generate a random nonce as an integer
            int nonceInt = distribution(generator);

            // Convert the integer to a string
            std::ostringstream oss;
            oss << nonceInt;
            std::string nonceString = oss.str();
            //push to vector
            nonces.push_back(nonceString);
            std::cout << "Nonce: " << nonceString << std::endl;
            std::cout << "Nonce generated" << std::endl;

        }else{
                BaseHandler::handleRequest(opt);
        }
    };
};
#endif
#ifndef VALIDATEHANDLER_H
#define VALIDATEHANDLER_H

#include "BaseHandler.h"
#include <iostream>
#include <sstream>
#include <random>

class ValidateHandler : public BaseHandler {
public:
     void handleRequest(int opt) override{
        if(opt==3){
            bool valid = true;
            std::cout<<"Validating token"<<std::endl;
            std::cout<<"Token validated"<<std::endl;
            BaseHandler::handleRequest(opt+1);
            if(!valid){
                std::cout<<"Token not valid"<<std::endl;
            }

        }
     }
};
#endif
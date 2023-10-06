#ifndef REQHANDLER_H
#define REQHANDLER_H

#include "BaseHandler.h"
#include <iostream>
#include <sstream>
#include <random>

class ReqHandler : public BaseHandler {
    public:
     void handleRequest(int opt) override{
        if(opt==4){
            std::cout<<"Handling req...."<<std::endl;
            std::cout<<"Request handled"<<std::endl;
        }
     }
};
#endif
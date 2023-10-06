#ifndef BASEHANDLER_H
#define  BASEHANDLER_H
#include "Handler.h"

class BaseHandler : public Handler {
private :
    Handler* next;
public:
    //string vector for nonces
    std::vector<std::string> nonces;
   BaseHandler() : next(nullptr) {}
    Handler* addNext(Handler* Newnext) override{
        this->next = Newnext;
        return Newnext;
    };
    void handleRequest(int opt) override{
        if(this->next){
            this->next->handleRequest(opt);
        }
    };
    ~BaseHandler() {}
};
#endif
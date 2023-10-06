#ifndef BASEHANDLER_H
#define  BASEHANDLER_H
#include "Handler.h"

class BaseHandler : public Handler {
private :
    int option;
    Handler* next;
public:
   BaseHandler(int opt) : Handler() {}
    void addNext(Handler* next) override;
    void handleRequest(int opt) override;
    ~BaseHandler() {}
};
#endif
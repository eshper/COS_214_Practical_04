#ifndef CONCRETEHANDLER_H
#define CONCRETEHANDLER_H
#include "Handler.h"

class ConcreteHandler : public Handler {
private :
    int option;
public:
    ConcreteHandler(int opt) : Handler() {}
    void handleRequest(int opt) override;
    ~ConcreteHandler() {}
};
#endif
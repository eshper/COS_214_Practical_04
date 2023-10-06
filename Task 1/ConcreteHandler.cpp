#include "ConcreteHandler.h"
#include <iostream>
ConcreteHandler::ConcreteHandler(int opt) : Handler()
{
    this->option = opt;
}

void ConcreteHandler::handleRequest(int opt)
{
    
}

#include "ReqHandler.h"
#include "ValidateHandler.h"
#include "NonceReqHandler.h"
#include "BaseHandler.h"
#include "VerifySignHandler.h"
#include <iostream>
int main(){
    NonceReqHandler *nonceReqHandler = new NonceReqHandler();
    ValidateHandler *validateHandler = new ValidateHandler();
    VerifySignHandler *verifySignHandler = new VerifySignHandler();
    ReqHandler *reqHandler = new ReqHandler();
    nonceReqHandler->addNext(verifySignHandler)->addNext(validateHandler)->addNext(reqHandler);
    nonceReqHandler->handleRequest(1);
    nonceReqHandler->handleRequest(2);
    nonceReqHandler->handleRequest(3);
    nonceReqHandler->handleRequest(4);
    return 0;
}
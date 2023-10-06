#include "ReqHandler.h"
#include "ValidateHandler.h"
#include "NonceReqHandler.h"
#include "BaseHandler.h"
#include "VerifySignHandler.h"
#include <iostream>

/**
 * @brief Main function for handling requests.
 *
 * This main function demonstrates the chain of responsibility pattern
 * by creating and configuring various handlers and processing requests
 * through the handler chain.
 *
 * @return An integer indicating the program's exit status.
 */
int main() {
    // Create handler objects
    NonceReqHandler *nonceReqHandler = new NonceReqHandler();
    ValidateHandler *validateHandler = new ValidateHandler();
    VerifySignHandler *verifySignHandler = new VerifySignHandler();
    ReqHandler *reqHandler = new ReqHandler();

    /// Configure the handler chain
    nonceReqHandler->addNext(verifySignHandler)->addNext(validateHandler)->addNext(reqHandler);

    /// Process requests through the handler chain
    nonceReqHandler->handleRequest(1);
    nonceReqHandler->handleRequest(2);
    nonceReqHandler->handleRequest(3);

    // Clean up and return
    delete nonceReqHandler;
    delete validateHandler;
    delete verifySignHandler;
    delete reqHandler;

    return 0;
}
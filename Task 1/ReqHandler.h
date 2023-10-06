#ifndef REQHANDLER_H
#define REQHANDLER_H

#include "BaseHandler.h"
#include <iostream>
#include <sstream>
#include <random>

/**
 * @brief Handler for handling requests.
 * This is the last handler in the chain of responsibility
 * The ReqHandler is a concrete handler that handles requests with an option of 4.
 * When the option is set to 4, it performs request handling and prints appropriate messages.
 */
class ReqHandler : public BaseHandler {
public:
    /**
     * @brief Handle a request based on the provided option.
     *
     * When the option is 4, this function performs request handling and prints
     * messages indicating that the request is being handled and that the request
     * has been handled. If the option is not 4, the request is passed to the next
     * handler in the chain.
     *
     * @param opt The option to be handled.
     */
     void handleRequest(int opt) override {
        if (opt == 4) {
            std::cout << "Handling request..." << std::endl;
            std::cout << "Request handled" << std::endl;
        } else {
            // Pass the request to the next handler in the chain
            BaseHandler::handleRequest(opt);
        }
     }
};

#endif
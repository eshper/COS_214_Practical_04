#ifndef VALIDATEHANDLER_H
#define VALIDATEHANDLER_H

#include "BaseHandler.h"
#include <iostream>
#include <sstream>
#include <random>

/**
 * @brief Handler for validating tokens.
 *This is the third in the chain of responsibility and passes to the 4th handler
 * The ValidateHandler is a concrete handler that validates tokens.
 * When the option is set to 3, it performs token validation and checks
 * the validity of the token. It also calls the next handler in the chain.
 */
class ValidateHandler : public BaseHandler {
public:
    /**
     * @brief Handle a request based on the provided option.
     *
     * When the option is 3, this function performs token validation, checks
     * the validity of the token (in this case, it is always set to true), and
     * calls the next handler in the chain with `opt+1`. If the option is not 3,
     * the request is passed to the next handler in the chain.
     *
     * @param opt The option to be handled.
     */
     void handleRequest(int opt) override {
        if (opt == 3) {
            bool valid = true;
            std::cout << "Validating token" << std::endl;
            std::cout << "Token validated" << std::endl;

            // Call the next handler in the chain with opt+1
            BaseHandler::handleRequest(opt + 1);

            if (!valid) {
                std::cout << "Token not valid" << std::endl;
            }
        } else {
            // Pass the request to the next handler in the chain
            BaseHandler::handleRequest(opt);
        }
     }
};

#endif
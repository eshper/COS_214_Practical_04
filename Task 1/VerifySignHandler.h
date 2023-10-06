#ifndef VERIFYSIGNHANDLER_H
#define VERIFYSIGNHANDLER_H

#include "BaseHandler.h"
#include <iostream>
#include <sstream>
#include <random>

/**
 * @brief Handler for verifying signatures.
 *
 * The VerifySignHandler is a concrete handler that verifies signatures.
 * When the option is set to 2, it performs signature verification and
 * generates a random token, which is converted to a string.
 */
class VerifySignHandler : public BaseHandler {
public:
    /**
     * @brief Handle a request based on the provided option.
     * This is the second in the chain of responsibility.
     * When the option is 2, this function verifies the signature and generates
     * a random token, which is then converted to a string and printed. If the
     * option is not 2, the request is passed to the next handler in the chain.
     *
     * @param opt The option to be handled.
     */
     void handleRequest(int opt) override {
        if (opt == 2) {
            std::cout << "Verifying signature" << std::endl;
            std::cout << "Signature verified" << std::endl;

            // Generate a random nonce
            std::random_device rd;
            std::mt19937 generator(rd());
            std::uniform_int_distribution<int> distribution(1000, 9999); // Range from 1000 to 9999 (inclusive)

            // Generate a random nonce as an integer
            int TokenInt = distribution(generator);

            // Convert the integer to a string
            std::ostringstream oss;
            oss << TokenInt;
            std::string TokenString = oss.str();
            std::cout << "Token: " << TokenString << std::endl;
        } else {
            // Pass the request to the next handler in the chain
            BaseHandler::handleRequest(opt);
        }
     }
};

#endif
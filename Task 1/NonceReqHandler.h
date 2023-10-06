#ifndef NONCEREQHANDLER_H
#define NONCEREQHANDLER_H
#include "BaseHandler.h"
#include <iostream>
#include <sstream>
#include <random>
/**
 * @brief Handler for handling nonce requests.
 * This is the first in the chain of responsibility.
 * The NonceReqHandler is a concrete handler that handles nonce requests.
 * When the option is set to 1, it generates a random nonce and stores it
 * in the `nonces` vector.
 */
class NonceReqHandler : public BaseHandler {
public:
    // String vector for nonces
    std::vector<std::string> nonces;

    /**
     * @brief Handle a request based on the provided option.
     *
     * When the option is 1, this function generates a random nonce and stores it
     * in the `nonces` vector. If the option is not 1, the request is passed to the
     * next handler in the chain.
     *
     * @param opt The option to be handled.
     */
    void handleRequest(int opt) override {
        if (opt == 1) {
            std::cout << "NonceReqHandler" << std::endl;
            std::cout << "Generating nonce" << std::endl;

            // Generating a random nonce
            std::random_device rd;
            std::mt19937 generator(rd());
            std::uniform_int_distribution<int> distribution(1000, 9999); // Range from 1000 to 9999 (inclusive)

            // Generate a random nonce as an integer
            int nonceInt = distribution(generator);

            // Convert the integer to a string
            std::ostringstream oss;
            oss << nonceInt;
            std::string nonceString = oss.str();

            // Push the generated nonce to the vector
            nonces.push_back(nonceString);

            std::cout << "Nonce: " << nonceString << std::endl;
            std::cout << "Nonce generated" << std::endl;

        } else {
            // Pass the request to the next handler in the chain
            BaseHandler::handleRequest(opt);
        }
    };
};

#endif
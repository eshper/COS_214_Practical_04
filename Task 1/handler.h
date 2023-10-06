#ifndef HANDLER_H
#define HANDLER_H

#include <string>
#include <vector>

/**
 * @brief The base class for handling requests.
 */
class Handler {
private:
    
public:
    ///string vector for nonces
    std::vector<std::string> nonces;

    /**
     * @brief Destructor.
     */
    virtual ~Handler() {}

    /**
     * @brief Handle a request.
     *
     * @param opt Request option.
     */
    virtual void handleRequest(int opt) = 0;

    /**
     * @brief Add the next handler in the chain.
     *
     * @param next The next handler to add.
     * @return The added handler.
     */
    virtual Handler* addNext(Handler* next) = 0;
};

#endif
#ifndef BASEHANDLER_H
#define  BASEHANDLER_H
#include "Handler.h"

/** Base class for handlers with additional functionality. */
class BaseHandler : public Handler {
private:
    Handler* next;
    
public:
    ///string vector for nonces
    std::vector<std::string> nonces;

    /** Default constructor for BaseHandler. */
    BaseHandler() : next(nullptr) {}
    
    /** Add a next handler to the chain.
     *  @param Newnext The next handler to be added.
     *  @return The added handler.
     */
    Handler* addNext(Handler* Newnext) override{
        this->next = Newnext;
        return Newnext;
    }

    /** Handle a request based on the provided option.
     *  @param opt The option to be handled.
     */
    void handleRequest(int opt) override{
        if(this->next){
            this->next->handleRequest(opt);
        }
    }
    
    /** Default destructor for BaseHandler. */
    ~BaseHandler() {}
};
#endif
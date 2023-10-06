#ifndef HANDLER_H
#define HANDLER_H
#include <string>
#include <vector>
class Handler {
private:
    
public:
    //string vector for nonces
    std::vector<std::string> nonces;
    ~Handler() {};
    void virtual handleRequest(int opt) =0;
    virtual Handler* addNext(Handler* next) = 0;
};
#endif 
#ifndef HANDLER_H
#define HANDLER_H
#include <string>
class Handler {
private:
    
public:
    int option;
    ~Handler() {};
    void virtual handleRequest(int opt) =0;
    void virtual addNext(Handler* next) =0;
};
#endif 
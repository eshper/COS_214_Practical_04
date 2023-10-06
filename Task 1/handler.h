#ifndef HANDLER_H
#define HANDLER_H
#include <string>
class Handler {
private:
    Handler* next;
    int option;
public:
    int getoption();
    ~Handler() {}
    void virtual handleRequest(int opt) ;
    void addNext(Handler* next) ;
};
#endif 
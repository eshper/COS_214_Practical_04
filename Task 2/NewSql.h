#ifndef NEWSQL_H
#define NEWSQL_H

#include <string>
#include <iostream>

class NewSql
{
public:
    NewSql(/* args */);
    ~NewSql();
    std::string execute(std::string);
};

#endif
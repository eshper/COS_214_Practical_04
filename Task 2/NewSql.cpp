#include "NewSql.h"

NewSql::NewSql(/* args */)
{
}

NewSql::~NewSql()
{
}

std::string NewSql::execute(std::string sql)
{
    std::cout << "Executing NEW sql \n";
    return "1,Bob\n2,Zollie\n";
}
#include "OldSql.h"

OldSql::OldSql(/* args */)
{
}


std::string OldSql::execute(std::string sql)
{
    std::cout << "Executing OLD sql \n";
    return "1,Bob\n2,Zollie\n";
}
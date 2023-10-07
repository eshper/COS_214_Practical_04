#ifndef ORM_H
#define ORM_H

#include <vector>
#include "Users.h"
#include "OldSql.h"

class Orm
{
public:
    OldSql* oldsql;
    std::string selectAllUsersSQL;
    Orm();
    ~Orm();
    std::vector<Users> selectAllUsers();

};


#endif
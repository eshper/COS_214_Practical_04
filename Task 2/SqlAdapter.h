#ifndef SQLADAPTER_H
#define SQLADAPTER_H

#include "NewSql.h"
#include "Orm.h"


class SqlAdapter: public Orm
{
private: 
    NewSql newsql;
public:
    std::vector<Users> selectAllUsers();
    SqlAdapter(NewSql newsql);
    ~SqlAdapter();
    std::vector<Users> selectAllUsersOld();
};



#endif
#include "SqlAdapter.h"
#include <iostream>
std::vector<Users> SqlAdapter::selectAllUsers()
{
    std::string result =  newsql.execute(selectAllUsersSQL);

    std::vector<Users> users;

    size_t startPos = 0;
    size_t endPos = result.find('\n', startPos);

    while (endPos != std::string::npos) {
        std::string line = result.substr(startPos, endPos - startPos);
        size_t commaPos = line.find(',');
        
        if (commaPos != std::string::npos) {
            Users user;
            user.ID = std::stoi(line.substr(0, commaPos));
            user.name = line.substr(commaPos + 1);
            users.push_back(user);
        }

        startPos = endPos + 1;
        endPos = result.find('\n', startPos);
    }

    return users;
    
}

SqlAdapter::SqlAdapter(NewSql newsql)
{
    this->newsql = newsql;
    this->selectAllUsersSQL = "FROM table SELECT *";
}

SqlAdapter::~SqlAdapter()
{
}


std::vector<Users> SqlAdapter::selectAllUsersOld()
{
    std::cout<<Orm::selectAllUsersSQL<<std::endl;
    return Orm::selectAllUsers();
}

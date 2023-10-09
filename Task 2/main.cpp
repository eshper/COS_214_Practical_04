#include "SqlAdapter.h"
#include "Orm.h"
#include "Users.h"
#include <iostream>

int main()
{

    // // OLD sql
    // Orm *orm = new Orm;
    // std::vector<Users> users;
    // users = orm->selectAllUsers();

    // //ORM current sql statement:
    // std::cout << orm->selectAllUsersSQL << std::endl;
    // for (const Users &user : users)
    // {
    //     std::cout << "ID: " << user.ID << ", Name: " << user.name << std::endl;
    // }

    std::cout << "Selecting all users using the adapter \n";

    std::vector<Users> users2;
    NewSql newsql;
    SqlAdapter adapter(newsql);

    std::cout << "Selecting all users using the adapter with old sql \n";
    users2 = adapter.selectAllUsersOld();
    for(const Users &user : users2)
    {
        std::cout << "ID: " << user.ID << ", Name: " << user.name << std::endl;
    }


    std::cout << adapter.selectAllUsersSQL << std::endl;
    users2 = adapter.selectAllUsers();

    for (const Users &user : users2)
    {
        std::cout << "ID: " << user.ID << ", Name: " << user.name << std::endl;
    }
    

}
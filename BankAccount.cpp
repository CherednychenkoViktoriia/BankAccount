#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

struct Account {
    std::string id;
    std::string name;
    std::string dateUpdated;
    double balance = 0;  
};

int main()
{
    std::vector<Account> vect(5);
    vect[0] = { "UA903052992990004149123456789", "Debet", "21.12.2020", 43987.01 };
    vect[1] = { "UA965479929908353449123434355", "Debet", "16.01.2021", 65083.76 };
    vect[2] = { "UA978956296863576475674657892", "Credit", "25.12.2020", 15876.90 };
    vect[3] = { "UA097532774532477847688742289", "Credit", "08.01.2021", 23607.32 };
    vect[4] = { "UA086529345897863485356565834", "Debet", "23.01.2021", 58902.85 };

    for (unsigned int i = 0; i < vect.size(); ++i)
    {
        std::cout << "Before sorting: "<< vect[i].id << " " << vect[i].name << " " << vect[i].dateUpdated << " " << vect[i].balance << std::endl;
    }
        
    std::sort(vect.begin(), vect.end(), [](const Account& a, const Account& b) { return a.id > b.id; });
    std::sort(vect.begin(), vect.end(), [](const Account& a, const Account& b) { return a.name > b.name; });
    std::sort(vect.begin(), vect.end(), [](const Account& a, const Account& b) { return a.dateUpdated > b.dateUpdated; });
    std::sort(vect.begin(), vect.end(), [](const Account& a, const Account& b) { return a.balance > b.balance; });

    std::cout << std::endl;

    for (unsigned int i = 0; i < vect.size(); ++i)
    {
        std::cout << "After sorting: " << vect[i].id << " " << vect[i].name << " " << vect[i].dateUpdated << " " << vect[i].balance << std::endl;
    }
}
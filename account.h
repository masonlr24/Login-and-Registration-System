#ifndef ACCOUNT_H
#define ACCOUNT_H

#include<iostream>
#include<string>

using namespace std;

class Account
{
    private:
        string username;
        string password;
        string name;
        int date_of_birth;
        static int num_of_accounts;
    public:
        Account();
        string get_user(){return username;}
        string get_pass(){return password;}
        string get_name(){return name;}
        int get_num_of_accounts(){return num_of_accounts;}
        Account register_account();
};

bool login(Account database[], string password, string username);
bool allowed_user(Account database[], string username);
bool allowed_pass(Account database[], string password);
int promt();

#endif
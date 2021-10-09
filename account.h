#ifndef ACCOUNT_H
#define ACCOUNT_H

#include<iostream>
#include<string>
#include<fstream>
using namespace std;

class Account
{
    private:
        string username;
        string password;
        string name;
        string email;
        int date_of_birth;
    public:
        const string get_user(){return username;}
        const string get_pass(){return password;}
        const string get_email(){return email;}
        const string get_name(){return name;}
        bool login(Account * database, int num_of_accounts, string password = "", string email = "", string username = "");
        Account register_account(int &num_ofaccounts);
        bool allowed_user(Account * database, int num_of_accounts, string username);
        bool allowed_pass(Account * database, int num_of_accounts, string password);
        int promt();
};

#endif
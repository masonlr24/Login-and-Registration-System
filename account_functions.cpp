#include "account.h"

Account::Account(string user, string pass, string n, int dob)
{
    username = user;
    password = pass;
    name = n;
    date_of_birth = dob;
    num_of_accounts++;
}

bool login(Account * database, string password = "", string username = "")
{
    bool result;
    //here
    for (int i = 0; i < database[0].get_num_of_accounts(); i++)
    {
        if (database[i].get_user() == username && database[i].get_pass() == password && database[i].get_num_of_accounts() != 0)
        {
            result = true;
        }
        else
        {
            result = false;
        }
    }

    return result;
}

void register_account(Account * database)
{
    string user, pass, n;
    int dob;

    cout << "Enter your desired username: " << endl;
    cin >> user;
    cout << "Enter your desired password: " << endl;
    cin >> pass;
    cout << "Enter your name: " << endl;
    cin >> n;
    cout << "Enter your date of birth: " << endl;
    cin >> dob;
    // this is not right
    for (int i = 0; i < database[0].get_num_of_accounts(); i++)
    {
        database[i] = new Account(user, pass, n, dob);
    }
}

bool allowed_user(Account * database, string username)
{
    bool result;
    
    for (int i = 0; i < database[0].get_num_of_accounts(); i++)
    {
        if (database[i].get_user() == username)
        {
            result = false;
        }
        else
        {
            result = true;
        }
    }

    return result;
}   

bool allowed_pass(Account * database, string password)
{
    bool result;
    
    for (int i = 0; i < database[0].get_num_of_accounts(); i++)
    {
        if (database[i].get_pass() == password)
        {
            result = false;
        }
        else
        {
            result = true;
        }
    }

    return result;
}

int promt()
{
    int choice;
    
    cout << "Enter the number corresponded to the choice you want to make." << endl;
    cout << "1. Login" << endl;
    cout << "2. Sign up!" << endl;
    cin >> choice;

    return choice;
}
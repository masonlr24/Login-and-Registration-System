#include "account.h"

bool login(Account * database, int num_of_accounts, string password = "", string email = "", string username = "")
{
    bool result;
    
    for (int x = 0; x < num_of_accounts; x++)
    {
        if ((database[i].get_user() == username || database[i].get_email() == email) && database[i].get_pass() == password && num_of_accounts != 0)
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

Account register_account(int &num_of_accounts)
{
    cout << "Enter your desired username: " << endl;
    
}

bool allowed_user(Account * database, int num_of_accounts, string username)
{
    bool result;
    
    for (int x = 0; x < num_of_accounts; x++)
    {
        if ((database[i].get_user() == username)
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

bool allowed_pass(Account * database, int num_of_accounts, string password)
{
    bool result;
    
    for (int x = 0; x < num_of_accounts; x++)
    {
        if ((database[i].get_pass() == password)
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
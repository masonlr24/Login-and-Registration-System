#include "account.h"

int main()
{
  string username;
  string password;
  Account database[20];
  bool ongoing = true;

  cout << "Welcome to the my account registration program" << endl;

  do
  {
    switch(promt())
    {
      case 1:
        if (login(database, password, username))
        {
          cout << "Login Successful!" << endl;
        }
        else
        {
          cout << "Account not found." << endl;
        }
        break;
      case 2:
        database[database[0].get_num_of_accounts()].register_account();
        break;
      default:
        cout << "Invalid input, retry." << endl;
    }


  } while (ongoing);


  return 0;
}

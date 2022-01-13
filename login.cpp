#include <iostream>
using namespace std;

int main ()
{
    string userName;
    string userPrn;
    int loginAttempt = 0;
    //this code will be changed in future// 
    //searching algo will be implemented here//
    while (loginAttempt < 5)
    {
        cout << "Please enter your user name: ";
        cin >> userName;
        cout << "Please enter your user prn: ";
        cin >> userPrn;
        //will be redundant in future// 
        if (userName == "deepak" && userPrn == "2014110855")
        {
            cout << "Welcome deepak!\n";
            cout<<"Last payment: 10 nov 2021 \n";
            cout<<"due payment: 600000 \n";
            break;
        }
        else if (userName == "abinash" && userPrn == "2014110844")
        {
            cout << "Welcome abinash!\n";
            cout<<"Last payment: 10 nov 2021 \n";
            cout<<"due payment: 600000";
            break;

        }
        else if (userName == "saurav" && userPrn == "2014110843")
        {
            cout << "Welcome saurav!\n";
            cout<<"Last payment: 10 nov 2021 \n";
            cout<<"due payment: 600000 \n";
            break;
          
        }
        else
        {
            cout << "Invalid login attempt. Please try again.\n" << '\n';
            loginAttempt++;
        }
    }
    if (loginAttempt == 5)
    {
            cout << "Too many login attempts! The program will now terminate.";
            return 0;
    }

    cout << "Thank you for logging in.\n";
}
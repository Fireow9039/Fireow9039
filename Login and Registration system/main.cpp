#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

void login();
void registration();
void forgot();

int main()
{

    int option =0;

    cout<<"\t\t\t________________________________________\n\n\n";
    cout<<"\t\t\t           Welcome to Login Page        \n\n\n";
    cout<<"\t\t                      Menu                ";
    cout<<"\n\t | 1) Login                              |";
    cout<<"\n\t | 2) Registration                       |";
    cout<<"\n\t | 3) Forgot Password                    |";
    cout<<"\n\t | 4) EXIT                               |";
    cout<<"\n\n\t Select the option from the menu : ";
    cin>>option;
    cout<<endl;

    switch(option)
    {
        case 1:
            login();
            break;
        case 2:
            registration();
            break;
        case 3:
            forgot();
            break;
        case 4:
            cout<<"\n\t\t\t     Thank You !    \n\n";
            break;
        default:
            system("cls");
            cout<<"\t\t\t Please select from the given options above \n"<<endl;
            main ();

    }
}

void login()
{
    int count;
    string userid, password, id, pass;
    system("cls");

    cout<<"\t\t\t Please Enter the Username and Password  \n\n\n";
    cout<<"\t\t\t Username :- ";
    cin>>userid;

    cout<<"\t\t\t Password :- ";
    cin>>password;

    ifstream input("records.txt");

    while(input>>id>>pass){
        if(id==userid && pass == password){
            count=1;
            system("cls");
        }

    }
    input.close();

    if(count==1){
        cout<<userid<<"\n Your LOGIN is successfull \n thanks for logging in !\n";
    }
    else{
        cout<<"\n Login Error \n Please check your username and password\n";
        main ();
    }

}

void registration()
{
    string r_userid, r_password, r_id, r_pass;

    cout<<"\t\t\t Enter the username : ";
    cin>>r_userid;

    cout<<"\t\t\t Enter the password : ";
    cin>>r_password;

    ofstream f1("records.txt", ios::app );
    f1<<r_userid<<' '<<r_password<<endl;
    system("cls");
    cout<<"\n\t\t\t Registration is Successfull ";
    main();


}


void forgot()
{
    int option;
    system("cls");
    cout<<"\t\t\t You forgot the password ?  here is options for u \n";
    cout<<"Press 1 to search your ID by username "<<endl;
    cout<<"Press 2 to go back to the main menu"<<endl;
    cout<<"\t\t\t Enter your choice : ";
    cin>>option;

    switch(option) {
        case 1:
        {
            int count=0;
            string suserid,sid,spass;
            cout<<"\n\t\t Enter the username which u remembered: ";
            cin>>suserid;

            ifstream f2("records.txt");
            while(f2>>sid>>spass){
                if(sid==suserid){
                    count=1;
                }

            }
            f2.close();
            if(count==1){
                cout<<"\n \n Your Accont is found! \n";
                cout<<"\n \n Your Password id : "<<spass;
                main();
            }
            else{
                cout<<"\n\t Sorry! account not found \n";
            }
            break ;
        }
        case 2 :
        {
            main();
        }
        default:
        {
            cout<<"\t\t\twrong choice please try again"<<endl;
            forgot();
        }


    }
}

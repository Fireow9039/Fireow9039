#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;


void main_menu();


class management{
    public:
        management()
        {
            main_menu();
        }
};

class details
{
    public:
        static string name, gender;
        int phone_no;
        int age;
        string add;
        static int c_id;

        char arr[100];

        void information()
        {
            cout<<"\n Enter the customer ID:- ";
            cin>>c_id;

            cout<<"\n Enter the name :- ";
            cin>>name;

            cout<<"\nEnter the age :- ";
            cin>>age;

            cout<<"\n Address:- ";
            cin>>add;

            cout<<"\n Gender:- ";
            cin>>gender;

            cout<<"\nYour details are saved with us \n"<<endl;
        }
};


int details::c_id;
string details::name;
string details::gender;

class registration
        {
        public:
            static int choice;
            int choice1;
            int back;
            static float charges;

            void flights(){

                string flightN[]={"Dubai", "Canada", "UK", "USA", "Australia", "Europe"};

                for(int a=0; a<6;a++) {
                    cout << (a + 1) << ".flight to" << flightN[a] << endl;
                    cout << "Press the number of the country of which u want to book a flight: ";
                    cin >> choice;

                    switch (choice) {
                        case 1: {
                            cout << "_________________Welcome to Dubai Emirates___________________\n" << endl;
                            cout << "Your Comfort is our first priority. Enjoy the journey!" << endl;
                            cout << "Following are the flights \n" << endl;

                            cout << "1. DUB - 498" << endl;
                            cout << "\t 08-01-2024  8:00AM 10hrs Rs 14000" << endl;

                            cout << "2. DUB - 499" << endl;
                            cout << "\t 08-01-2024  10:00AM 15hrs Rs 12000" << endl;
                            cout << "3. DUB - 491" << endl;
                            cout << "\t 09-01-2024  1:00PM 12hrs Rs 16000" << endl;

                            cout << "Select the flight u want to book " << endl;
                            cin >> choice1;

                            if (choice1 == 1) {
                                charges = 14000;
                                cout << "\n You have successfully booked the flight DUB 498" << endl;
                                cout << "\n You can go back and take the ticket" << endl;
                            } else if (choice1 == 2) {
                                charges = 12000;
                                cout << "\n You have successfully booked the flight DUB 499" << endl;
                                cout << "\n You can go back and take the ticket" << endl;
                            } else if (choice1 == 3) {
                                charges = 16000;
                                cout << "\n You have successfully booked the flight DUB 491" << endl;
                                cout << "\n You can go back and take the ticket" << endl;
                            } else {
                                cout << "Invalid Input, shifting to a previous menu" << endl;
                                flights();
                            }
                            cout << "press any key to go back to the main menu" << endl;
                            cin >> back;
                            if (back == 1) {
                                main_menu();
                            } else {
                                main_menu();
                            }

                            break;


                        }

                        case 2: {
                            cout << "_________________Welcome to Canadian Airlines___________________\n" << endl;
                            cout << "Your Comfort is our top  priority. Enjoy the journey!" << endl;
                            cout << "Following are the flights \n" << endl;

                            cout << "1. CAN - 598" << endl;
                            cout << "\t 09-01-2024  10:00AM 28hrs Rs 140000" << endl;

                            cout << "2. CAN - 593" << endl;
                            cout << "\t 09-01-2024  12:00AM 35hrs Rs 120000" << endl;
                            cout << "3. CAN - 591" << endl;
                            cout << "\t 09-01-2024  4:00PM 24hrs Rs 168000" << endl;

                            cout << "Select the flight u want to book " << endl;
                            cin >> choice1;

                            if (choice1 == 1) {
                                charges = 140000;
                                cout << "\n You have successfully booked the flight Can 598" << endl;
                                cout << "\n You can go back and take the ticket" << endl;
                            } else if (choice1 == 2) {
                                charges = 120000;
                                cout << "\n You have successfully booked the flight Can 593" << endl;
                                cout << "\n You can go back and take the ticket" << endl;
                            } else if (choice1 == 3) {
                                charges = 168000;
                                cout << "\n You have successfully booked the flight Can 591" << endl;
                                cout << "\n You can go back and take the ticket" << endl;
                            } else {
                                cout << "Invalid Input, shifting to a previous menu" << endl;
                                flights();
                            }
                            cout << "press any key to go back to the main menu" << endl;
                            cin >> back;
                            if (back == 1) {
                                main_menu();
                            } else {
                                main_menu();
                            }

                            break;

                        }
                        case 3: {
                            cout << "_________________Welcome to UK Airways___________________\n" << endl;
                            cout << "Your Comfort is our first priority. Enjoy the journey!" << endl;
                            cout << "Following are the flights \n" << endl;

                            cout << "1. UK - 4918" << endl;
                            cout << "\t 08-01-2024  8:00AM 19hrs Rs 28000" << endl;


                            cout << "Select the flight u want to book " << endl;
                            cin >> choice1;

                            if (choice1 == 1) {
                                charges = 28000;
                                cout << "\n You have successfully booked the flight UK 4918" << endl;
                                cout << "\n You can go back and take the ticket" << endl;
                            } else {
                                cout << "Invalid Input, shifting to a previous menu" << endl;
                                flights();
                            }
                            cout << "press any key to go back to the main menu" << endl;
                            cin >> back;
                            if (back == 1) {
                                main_menu();
                            } else {
                                main_menu();
                            }

                            break;
                        }

                        case 4: {
                            cout << "_________________Welcome to US AIRWAYS___________________\n" << endl;
                            cout << "Your Comfort is our esteemed priority. Enjoy the journey!" << endl;
                            cout << "Following are the flights \n" << endl;

                            cout << "1. US - 5918" << endl;
                            cout << "\t 08-01-2024  8:00AM 30hrs Rs 148000" << endl;

                            cout << "2. US 5999" << endl;
                            cout << "\t 08-01-2024  10:00AM 45hrs Rs 122000" << endl;
                            cout << "3. US 6889" << endl;
                            cout << "\t 09-01-2024  1:00PM 24hrs Rs 186000" << endl;

                            cout << "Select the flight u want to book " << endl;
                            cin >> choice1;

                            if (choice1 == 1) {
                                charges = 148000;
                                cout << "\n You have successfully booked the flight US 5918" << endl;
                                cout << "\n You can go back and take the ticket" << endl;
                            } else if (choice1 == 2) {
                                charges = 122000;
                                cout << "\n You have successfully booked the flight US 5999" << endl;
                                cout << "\n You can go back and take the ticket" << endl;
                            } else if (choice1 == 3) {
                                charges = 186000;
                                cout << "\n You have successfully booked the flight US 6889" << endl;
                                cout << "\n You can go back and take the ticket" << endl;
                            } else {
                                cout << "Invalid Input, shifting to a previous menu" << endl;
                                flights();
                            }
                            cout << "press any key to go back to the main menu" << endl;
                            cin >> back;
                            if (back == 1) {
                                main_menu();
                            } else {
                                main_menu();
                            }
                            break;
                        }
                        case 5: {
                            cout << "_________________Welcome to Australian Airlines___________________\n" << endl;
                            cout << "Your Comfort is our top priority. Enjoy and have a happy journey!" << endl;
                            cout << "Following are the flights \n" << endl;

                            cout << "1. AUS 321" << endl;
                            cout << "\t 08-01-2024  11:00AM 15hrs Rs 32000" << endl;

                            cout << "2. AUS 320" << endl;
                            cout << "\t 08-01-2024  10:00AM 20hrs Rs 42000" << endl;
                            cout << "3. AUS 333" << endl;
                            cout << "\t 09-01-2024  8:00PM 18hrs Rs 36000" << endl;

                            cout << "Select the flight u want to book " << endl;
                            cin >> choice1;

                            if (choice1 == 1) {
                                charges = 32000;
                                cout << "\n You have successfully booked the flight AUS 321" << endl;
                                cout << "\n You can go back and take the ticket" << endl;
                            } else if (choice1 == 2) {
                                charges = 42000;
                                cout << "\n You have successfully booked the flight AUS 320" << endl;
                                cout << "\n You can go back and take the ticket" << endl;
                            } else if (choice1 == 3) {
                                charges = 36000;
                                cout << "\n You have successfully booked the flight AUS 333" << endl;
                                cout << "\n You can go back and take the ticket" << endl;
                            } else {
                                cout << "Invalid Input, shifting to a previous menu" << endl;
                                flights();
                            }
                            cout << "press any key to go back to the main menu" << endl;
                            cin >> back;
                            if (back == 1) {
                                main_menu();
                            } else {
                                main_menu();
                            }

                            break;
                        }

                        case 6: {
                            cout << "_________________Welcome to European Airlines___________________\n" << endl;
                            cout << "Your Comfort is our first priority. Enjoy the journey!" << endl;
                            cout << "Following are the flights \n" << endl;

                            cout << "1. EU - 898" << endl;
                            cout << "\t 08-01-2024  2:00AM 18hrs Rs 36000" << endl;

                            cout << "2. EU - 999" << endl;
                            cout << "\t 08-01-2024  6:00AM 19hrs Rs 42000" << endl;
                            cout << "3. EU - 991" << endl;
                            cout << "\t 09-01-2024  5:00PM 22hrs Rs 26000" << endl;

                            cout << "Select the flight u want to book " << endl;
                            cin >> choice1;

                            if (choice1 == 1) {
                                charges = 36000;
                                cout << "\n You have successfully booked the flight EU - 898" << endl;
                                cout << "\n You can go back and take the ticket" << endl;
                            } else if (choice1 == 2) {
                                charges = 42000;
                                cout << "\n You have successfully booked the flight EU 999" << endl;
                                cout << "\n You can go back and take the ticket" << endl;
                            } else if (choice1 == 3) {
                                charges = 26000;
                                cout << "\n You have successfully booked the flight EU 991" << endl;
                                cout << "\n You can go back and take the ticket" << endl;
                            } else {
                                cout << "Invalid Input, shifting to a previous menu" << endl;
                                flights();
                            }
                            cout << "press any key to go back to the main menu" << endl;
                            cin >> back;
                            if (back == 1) {
                                main_menu();
                            } else {
                                main_menu();
                            }
                            break;
                        }

                        default: {
                            cout << "Invalid Input, Shifting to the main menu! " << endl;
                            main_menu();
                            break;
                        }
                    }
                }

            }
        };


float registration::charges;
int registration::choice;


class ticket: public registration, details
{
    public:
        void Bill()
        {
            string destinations= "";
            ofstream outf("records.txt");
            {
                outf<<"_____________XYZ Airlines_____________"<<endl;
                outf<<"______________Ticket__________________"<<endl;
                outf<<"______________________________________"<<endl;

                outf<<"Customer ID "<<details::c_id<<endl;
                outf<<"Customer Name "<<details::name<<endl;
                outf<<"Customer Gender"<<details::gender<<endl;
                outf<<"Description"<<endl<<endl;

                if(registration::choice==1){
                    destinations="Dubai";
                }
                else if(registration::choice==2){
                    destinations="Canada";
                }
                else if(registration::choice==3){
                    destinations="UK";
                }
                else if(registration::choice==4){
                    destinations="USA";
                }
                else if(registration::choice==5){
                    destinations="Australia";
                }
                else if(registration::choice==6){
                    destinations="Europe";
                }

                outf<<"Destination \t\t"<<destinations<<endl;
                outf<<"Flight Cost : \t\t"<<registration::charges<<endl;
            }
            outf.close();
        }
        void dispbill()
        {
            ifstream ifs("records.txt");
            {
                if (!ifs)
                {
                    cout << "File Error!" << endl;
                }


                while (!ifs.eof())
                {
                    ifs.getline(arr, 100);
                    cout << arr << endl;
                }
            }
            ifs.close();
        }
};


void main_menu()
{
    int lchoice;
    int schoice;
    int back;

    cout<<"\t              ABC Airlines              \n"<<endl;
    cout<<"\t________________Main Menu_______________\n"<<endl;

    cout<<"\t________________________________________\n"<<endl;
    cout<<"\t|\t\t\t\t\t\t\t\t\t\t\t\t|\n"<<endl;

    cout<<"\t|   Press 1) to add the Customer details |\n"<<endl;
    cout<<"\t|   Press 2) to for flight registration  |\n"<<endl;
    cout<<"\t|   Press 3) for Ticket and charges      |\n"<<endl;
    cout<<"\t|   Press 4) to EXIT                     |\n"<<endl;

    cout<<"Enter the Choice : ";
    cin>>lchoice;

    details d;
    registration r;
    ticket t;


    switch (lchoice) {

        case 1:
        {
            cout<<"_________________Customers_____________\n"<<endl;
            d.information();
            cout<<"press any key to go back to main menu";
            cin>>back;

            if(back ==1){
                main_menu();

            }
            else{
                main_menu();
            }

            break;

        }

        case 2:
        {
            cout<<"_______________Book a Flight Using this System____________\n "<<endl;

            r.flights();
            break;

        }
        case 3:
        {
            cout<<"____________Get Your Ticket_______________________________\n"<<endl;

            t.Bill();

            cout<<"Your Ticket is Printed, You can collect it \n"<<endl;

            cout<<"Press 1) to display your ticket ";

            cin>>back;
            if(back ==1){

                cout<<"Press any key to go back to main menu: ";
                cin>>back;
                if(back==1){
                    main_menu();
                }
                else{
                    main_menu();
                }
            }
            else{
                main_menu();
            }

            break;


        }
        case 4:
        {
            cout<<"\n\n\t_____________Thank You__________________\n"<<endl;
            break;
        }


        default:
        {
            cout<<"Invalid Input! Please choose from the option \n"<<endl;
            main_menu();
        }
    }
}



int main()
{
    management mobj;
    return 0;
}


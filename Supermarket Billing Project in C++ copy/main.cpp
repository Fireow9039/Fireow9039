#include <iostream>
#include<fstream>

using namespace std;

class shopping
{
    private:
        int pcode;
        float price;
        float dis;
        string pname;

    public:
        void menu();
        void administration();
        void buyer();
        void add();
        void edit();
        void rem();
        void list();
        void receipt();

};


void shopping:: menu()
{
    m:
    int choice;
    string email;
    string password;

    cout<<"\t\t_________________________________\n";
    cout<<"\t\t                                 \n";
    cout<<"\t\t      Supermarket Main Menu      \n";
    cout<<"\t\t                                 \n";
    cout<<"\t\t_________________________________\n";
    cout<<"\t\t                                 \n";
    cout<<"\t\t|  1) Administrator             |\n";
    cout<<"\t\t|  2) Buyer                     |\n";
    cout<<"\t\t|  3) EXIT                      |\n";
    cout<<"\t\t                                 \n";
    cout<<"\t\t Please Select!   ";
    cin>>choice;

    switch(choice)
    {
        case 1: {
            cout << "\t\t Please Login\n";
            cout << "\t\t Enter Email \n";
            cin >> email;

            cout << "\t\t\t Password \n";
            cin >> password;

            if(email == "robby@gmail.com" && password == "robby@123") {
                administration();
            } else {
                cout << "invalid email/password";
            }
            break;
        }
        case 2:
        {
            buyer();
        }

        case 3:
        {
            exit(0);
        }

        default:
        {
            cout<<"Please select the given option ";
        }
    }
    goto m;


}

void shopping ::administration() {

    m:
    int choice ;
    cout<<"\n\n\t\t Administrator Menu";
    cout<<"\n\t\t|_____1) Add The Product_______|";
    cout<<"\n\t\t|                              |";
    cout<<"\n\t\t|_____2) Modify the Product____|";
    cout<<"\n\t\t|                              |";
    cout<<"\n\t\t|_____3) Delete The Product____|";
    cout<<"\n\t\t|                              |";
    cout<<"\n\t\t|_____4) Back to the Main Menu_|";

    cout<<"\n\t\tPlease Enter Your Choice ";
    cin>>choice;

    switch(choice)
    {
        case 1:
            add();
            break;

        case 2:
            edit();
            break;

        case 3:
            rem();
            break;

        case 4:
            menu();
            break;

        default:
            cout<<"\n\t\t Invalid Choice!";
    }
    goto m;
}

void shopping::buyer() {

    m:
    int choice;
    cout<<"\n\n\t\t Buyer \n";
    cout<<"\n\t\t|                       |";
    cout<<"\n\t\t|_____1) Buy Product____|";
    cout<<"\n\t\t|                       |";
    cout<<"\n\t\t|_____2) Go Back    ____|";

    cout<<"\n\t\tPlease Enter Your Choice ";
    cin>>choice;

    switch (choice) {

        case 1:
            receipt();
            break;
        case 2:
            menu();
            break;
        default:
            cout<<"Invalid CHoice";
    }
    goto m;
}

void shopping::add() {

    m:
    fstream data;
    int c;
    int token =0;
    float p;
    float d;
    string n;

    cout<<"\n\n\t Add New Product";
    cout<<"\n\n\t Product Code of the Product ";
    cin>>pcode;
    cout<<"\n\n\t Name of the Product";
    cin>>pname;
    cout<<"\n\n\t Price of the product";
    cin>>price;
    cout<<"\n\n\t Discpunt on the product";
    cin>>dis;

    data.open("database.txt", ios::in);
    if(!data)
    {
        data.open("database.txt", ios::app|ios::out);
        data<<" "<<pcode<<" "<<pname<<" "<<price<<" "<<dis<<"\n";
        data.close();
    }
    else{
        data>>c>>n>>p>>d;

        while(!data.eof()){ // eof is the end of file function


            if(c==pcode)
            {
                token++;
            }
            data>>c>>n>>p>>d;

        }
        data.close();
    }
    if(token==1){
        goto m;
    }
    else{
        data.open("database.txt", ios::app|ios::out);
        data<<" "<<pcode<<" "<<pname<<" "<<price<<" "<<dis<<"\n";
        data.close();
    }
    cout<<"Record Inserted !";
}


void shopping::edit() {

    fstream  data, data1;
    int pkey;
    int token=0;
    int c;
    float p;
    float d;
    string n;

    cout<<"\n\n\t Modify the Record";
    cout<<"\n\n\t Product code : ";
    cin>>pkey;

    data.open("database.txt",ios::in);
    if(!data){
        cout<<"\n\n File Doesn't Exist! ";

    }
    else{
        data.open("database1.txt", ios::app|ios::out);

        data>>pcode>>pname>>price>>dis;

        while(!data.eof())
        {
            if(pkey==pcode){
                cout<<"\n\t\t Product new code : ";
                cin>>c;
                cout<<"\n\t\t Name of the Product : ";
                cin>>n;
                cout<<"\n\t\t Price : ";
                cin>>p;
                cout<<"\n\t\t Discount :";
                cin>>d;

                data1<<" "<<c<<" "<<n<<" "<<p<<" "<<d<<"\n";
                cout<<"\n\n\t\t Record Edited !";
                token++;
            }
            else{
                data1<<" "<<pcode<<" "<<pname<<" "<<price<<" "<<dis<<"\n";
            }

            data>>pcode>>pname>>price>>dis;
        }
        data.close();
        data1.close();

        remove("database.txt");
        rename("database1.txt", "database.txt");

        if(token==0)
        {
            cout<<"\n\n Record not found sorry!";
        }
    }

}

void shopping::rem() {

    fstream data, data1;
    int pkey;
    int token=0;
    cout<<"\n\n\t Delete Product";
    cout<<"\n\n\t Product code : ";
    cin>>pkey;

    data.open("database.txt", ios::in);
    if(!data){
        cout<<"\nFile Doesn't Exist";

    }

    else{
        data1.open("database1.txt", ios::app|ios::out);

        data>>pcode>>pname>>price>>dis;

        while(!data.eof())
        {
            if(pcode==pkey){
                cout<<"\n\n\t Product deleted Succesfully";
                token++;

            }
            else{
                data1<<" "<<pcode<<" "<<pname<<" "<<price<<" "<<dis<<"\n";
            }
            data>>pcode>>pname>>price>>dis;
        }
        data.close();
        data1.close();

        remove("database.txt");
        rename("database1.txt", "database.txt");

        if(token==0){
            cout<<"\nRecord Not Found !";
        }

    }
}

void shopping::list() {
    fstream data;
    data.open("database.txt", ios::in);
    cout<<"\n\n|______________________________________________|\n";
    cout<<"Pro No \t\tName\t\tPrice\n";
    cout<<"\n\n|______________________________________________|\n";
    data>>pcode>>pname>>price>>dis;

    while(!data.eof()){
        cout<<pcode<<"\t\t"<<pname<<"\t\t"<<price<<"\n";
        data>>pcode>>pname>>price>>dis;
    }
    data.close();
}

void shopping::receipt()
{
    fstream data;

    int arrc[100];
    int arrq[100];
    int choice;
    int c=0;
    float amount=0;
    float dis=0;
    float total=0;

    cout<<"\n\n\t\t\t\t RECEIPT";
    data.open("database.txt", ios::in);
    if(!data)
    {
        cout<<"\n\nEmpty Database";

    }
    else {
        data.close();

        list();
        cout << "\n____________________________________\n";
        cout << "\n|                                  |\n";
        cout << "\n|   Please Place the order         |\n";
        cout << "\n|                                  |\n";
        cout << "\n____________________________________\n";

        do {
            m:
            cout << "\n\n Enter Product Code : ";
            cin >> arrc[c];
            cout << "\n\n Enter the Product Quantity: ";
            cin >> arrq[c];
            for (int i = 0; i < c; i++) {
                if (arrc[c] == arrc[i]) {
                    cout << "\n\n Duplicate Product Code. Please try again!";

                    goto m;
                }
            }
            c++;
            cout << "\n\n Do u want to buy another product? If yes then press 1 elso no;";

            cin>>choice;
        } while (choice==1);


        cout << "\n\n\t\t\t______________Receipt_______________\n";
        cout << "\nProduct  No \t Product Name \t Product Quantity\t Price \t Amount \t Amount with Discount\n";

        for (int i = 0; i < c; i++) {
            data.open("database.txt", ios::in);
            data >> pcode >> pname >> price >> dis;
            while (!data.eof()) {
                if (pcode == arrc[i]) {
                    amount = price * arrq[i];
                    dis = amount - (amount * dis / 100);
                    total = total + dis;
                    cout << "\n" << pcode << " " << pname << " " << arrq[i] << " " << price << " " << amount << " "
                         << dis;

                }
                data >> pcode >> pname >> price >> dis;
            }
        }
        data.close();
    }

    cout<<"\n\n_________________________________________";
    cout<<"\n Total Amount: "<<total;


}

int main(){
    shopping s;
    s.menu();
}

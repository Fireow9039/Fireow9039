#include<iostream>
using namespace std;

int main(){
    int quant;
    int choice;

    //quantity
    int qrooms=0, qpasta=0, qburger=0, qnoodles=0, qshakes=0, qchicken=0;

    //food items sold
    int srooms=0, spasta=0, sburger=0, snoodles=0, sshakes=0, schicken=0;

    //total proce of items
    int total_rooms=0, total_pasta=0, total_burger=0, total_noodles=0, total_shakes=0, total_chicken=0;


    cout<<"\n\t Quantity of items we have";
    cout<<"\n Rooms Available ";
    cin>>qrooms;
    cout<<"\n Quantity of Pasta ";
    cin>>qpasta;
    cout<<"\n Quantity of Burger ";
    cin>>qburger;
    cout<<"\n Quantity of Noodles ";
    cin>>qnoodles;
    cout<<"\n Quantity of Shakes ";
    cin>>qshakes;
    cout<<"\n Quantity of chicken-roll ";
    cin>>qchicken;


    m:
    cout<<"\n\t\t\t Please select from the given menu options";
    cout<<"\n\n 1) Rooms";
    cout<<"\n 2)pasta";
    cout<<"\n 3)Burger";
    cout<<"\n 4)Noodles";
    cout<<"\n 5)Shaken";
    cout<<"\n 6)Chicken-roll";
    cout<<"\n 7) Information regarding sales and collection";
    cout<<"\n 8) Exit";

    cout<<"\n\n Please Enter your Choice ! ";

    cin>>choice;

    switch(choice)
    {
         case 1:
              cout<<"\n\nEnter the number of rooms you want ";
              cin>>quant;
              if(qrooms-srooms>>quant){
                   srooms=srooms+quant;
                   total_rooms= total_rooms + quant*1200;
                   cout<<"\n\n\t\t"<<quant<<" rooms have been alloted to u";

              }
              else{
                   cout<<"\n\t only "<<qrooms-srooms<<" rooms remaining in hotel ";
              }
              break;
         case 2:
              cout<<"\n\nPasta Quantity ";
              cin>>quant;
              if(qpasta-spasta>>quant){
                   spasta=spasta+quant;
                   total_pasta= total_pasta + quant*250;
                   cout<<"\n\n\t\t"<<quant<<"  Pasta is the order! ";

              }
              else{
                   cout<<"\n\t only "<<qpasta-spasta<<" Pasta remaining in hotel ";
              }
              break;
        case 3:
              cout<<"\n\nBurger Quantity ";
              cin>>quant;
              if(qburger-sburger>>quant){
                   sburger=sburger+quant;
                   total_burger= total_burger + quant*120;
                   cout<<"\n\n\t\t"<<quant<<" Burger remaining in hotel";

              }
              else{
                   cout<<"\n\t only "<<qburger-sburger<<" Burger remaining in hotel ";
              }
              break;
        case 4:
              cout<<"\n\nNoodles Quantity ";
              cin>>quant;
              if(qnoodles-snoodles>>quant){
                   snoodles=snoodles+quant;
                   total_noodles= total_noodles + quant*250;
                   cout<<"\n\n\t\t"<<quant<<" noodles remaining in hotel";

              }
              else{
                   cout<<"\n\t only "<<qnoodles-snoodles<<" Noodles remaining in hotel ";
              }
              break;
        case 5:
              cout<<"\n\nShakes Quantity ";
              cin>>quant;
              if(qshakes-sshakes>>quant){
                   sshakes=sshakes+quant;
                   total_shakes= total_shakes + quant*120;
                   cout<<"\n\n\t\t"<<quant<<" shakes remaining in hotel";

              }
              else{
                   cout<<"\n\t only "<<qshakes-sshakes<<" shakes remaining in hotel ";
              }
              break;
        case 6:
              cout<<"\n\nChicken Roll Quantity ";
              cin>>quant;
              if(qchicken-schicken>>quant){
                   schicken=schicken+quant;
                   total_chicken= total_chicken + quant*120;
                   cout<<"\n\n\t\t"<<quant<<" Chicken Roll remaining in hotel";

              }
              else{
                   cout<<"\n\t only "<<qchicken-schicken<<" Chicken Roll remaining in hotel ";
              }
              break;
        case 7:
             cout<<"\n\t\tDetails of  Sales and Collection";
             cout<<"\n\n Number of room we had: "<<qrooms;
             cout<<"\n\n Number of room we gave for rent: "<<srooms;
             cout<<"\n\n Remaining rooms : "<<qrooms-srooms;
             cout<<"\n\n Total rooms collection for the day :  "<<total_rooms;

             cout<<"\n\n Number of pasta we had: "<<qpasta;
             cout<<"\n\n Number of pasta we gave for rent: "<<spasta;
             cout<<"\n\n Remaining pasta : "<<qpasta-spasta;
             cout<<"\n\n Total pasta collection for the day :  "<<total_pasta;


             cout<<"\n\n Number of noodles we had: "<<qnoodles;
             cout<<"\n\n Number of Noodles we gave for rent: "<<snoodles;
             cout<<"\n\n Remaining Noodles : "<<qrooms-srooms;
             cout<<"\n\n Total Noodles collection for the day :  "<<total_noodles;

             cout<<"\n\n Number of burger we had: "<<qburger;
             cout<<"\n\n Number of burger we gave for rent: "<<snoodles;
             cout<<"\n\n Remaining burger : "<<qburger-sburger;
             cout<<"\n\n Total burger collection for the day :  "<<total_burger;

             cout<<"\n\n Number of shakes we had: "<<qshakes;
             cout<<"\n\n Number of shakes we gave for rent: "<<sshakes;
             cout<<"\n\n Remaining shakes : "<<qshakes-sshakes;
             cout<<"\n\n Total shakes collection for the day :  "<<total_shakes;

             cout<<"\n\n Number of chicken we had: "<<qchicken;
             cout<<"\n\n Number of chicken we gave for rent: "<<schicken;
             cout<<"\n\n Remaining chicken : "<<qchicken-schicken;
             cout<<"\n\n Total chicken collection for the day :  "<<total_chicken;

             cout<<"\n\n\n Total Collection for the day: "<<total_rooms+total_burger+total_chicken+total_noodles+total_shakes+total_pasta;

        case 8:
             exit(0);
             default:
                 cout<<"\n Please select the numbers mentioned above! " ;



    }
    goto m;


}
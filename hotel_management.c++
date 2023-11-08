#include<iostream>
using namespace std;

int main(){
int quant;
int choice;
//quantity

int qrooms=0, qpasta=0,qburger=0,qnoodles=0,qshake=0,qchicken=0;
//food itens sold
int srooms=0,spasta=0,sburger=0,snoodles=0,sshake=0,schicken=0;
//total price of items
int trooms=0,tpasta=0,tburger=0,tnoodles=0,tshake=0,tchicken=0;

cout<<"\n\t Quantity of items we have";
cout<<"\n Room available:";
cin>>qrooms;
cout<<"\n Quantity of pasta:";
cin>>qpasta;
cout<<"\n Quantity of burger:";
cin>>qburger;
cout<<"\n Quantity of noodles:";
cin>>qnoodles;
cout<<"\n Quantity of shake:";
cin>>qshake;
cout<<"\n Quantity of chicken Roll:";
cin>>qchicken;

m:
cout<<"\n\t\t\t\t Please select from the menu options ";
cout<<"\n\n1) Rooms";
cout<<"\n2) Pasta";
cout<<"\n3) Burger";
cout<<"\n4) Noodles";
cout<<"\n5) Shake";
cout<<"\n6) Chicken roll";
cout<<"\n7) Information ";
cout<<"\n8) Exit";

cout<<"\n\n Please Enter your choicee! ";
cin>>choice;

switch (choice)
{
case 1:
    cout<<"\n\n Enter the number of rooms you required: ";
    cin>> quant;
    if(qrooms-srooms >= quant){
        srooms=srooms+quant;
        trooms=trooms+quant*1200;
        cout<<"\n\n\t\t"<<quant<<"room/rooms have been alloted to you!";
    }
    else
    cout<<"\n\tOnly"<<qrooms-srooms<<"Rooms remaining in hotel";
case 2:
    cout<<"\n\n Enter the Pasta Quantity: ";
    cin>> quant;
    if(qpasta-spasta >= quant){
        spasta=spasta+quant;
        tpasta=tpasta+quant*300;
        cout<<"\n\n\t\t"<<quant<<" Pasta is the order! ";
    }
    else
    cout<<"\n\tOnly"<<qpasta-spasta<<"pasta remaining in hotel";
case 3:
    cout<<"\n\n Enter the Burger Quantity: ";
    cin>> quant;
    if(qburger-sburger >= quant){
        sburger=sburger+quant;
        tburger=tburger+quant*200;
        cout<<"\n\n\t\t"<<quant<<" Burger is the order! ";
    }
    else
    cout<<"\n\tOnly"<<qburger-sburger<<"Burger remaining in hotel";
case 4:
    cout<<"\n\n Enter the Noodles Quantity: ";
    cin>> quant;
    if(qnoodles-snoodles >= quant){
        snoodles=snoodles+quant;
        tnoodles=tnoodles+quant*400;
        cout<<"\n\n\t\t"<<quant<<" Noodles is the order! ";
    }
    else
    cout<<"\n\tOnly"<<qnoodles-snoodles<<"Noodles remaining in hotel";
case 5:
    cout<<"\n\n Enter the Shake Quantity: ";
    cin>> quant;
    if(qshake-sshake >= quant){
        sshake=sshake+quant;
        tshake=tshake+quant*150;
        cout<<"\n\n\t\t"<<quant<<" Shake is the order! ";
    }
    else
    cout<<"\n\tOnly"<<qshake-sshake<<"Shake remaining in hotel";
case 6:
    cout<<"\n\n Enter the Chicken-roll Quantity: ";
    cin>> quant;
    if(qchicken-schicken >= quant){
        schicken=schicken+quant;
        tchicken=tchicken+quant*500;
        cout<<"\n\n\t\t"<<quant<<" Chicken-roll is the order! ";
    }
    else
    cout<<"\n\tOnly"<<qchicken-schicken<<"Chicken-roll remaining in hotel";
    
    case 7:
        cout<<"Details of  sales and collection";
        cout<<"\n\n Number of rooms we had :"<<qrooms;
        cout<<"\n\n Number of rooms we gave for rent :"<<srooms;
        cout<<"\n\n Number of rooms remaning :"<<qrooms-srooms;
        cout<<"\n\n Total rooms collection for the day: "<<trooms;
        //pasta
        cout<<"\n\n Number of pasta we had :"<<qrooms;
        cout<<"\n\n Number of pasta we sold :"<<srooms;
        cout<<"\n\n Number of pasta remaning :"<<qrooms-srooms;
        cout<<"\n\n Total pasta collection for the day: "<<trooms;
        //burger
        cout<<"\n\n Number of burger we had :"<<qburger;
        cout<<"\n\n Number of burger we sold :"<<sburger;
        cout<<"\n\n Number of burger remaning :"<<qburger-sburger;
        cout<<"\n\n Total burger collection for the day: "<<tburger;
        //noodles
        cout<<"\n\n Number of noodles we had :"<<qnoodles;
        cout<<"\n\n Number of noodles we sold :"<<snoodles;
        cout<<"\n\n Number of noodles remaning :"<<qnoodles-snoodles;
        cout<<"\n\n Total noodles collection for the day: "<<tnoodles;
        //shake
        cout<<"\n\n Number of shake we had :"<<qshake;
        cout<<"\n\n Number of shake we sold :"<<sshake;
        cout<<"\n\n Number of shake remaning :"<<qshake-sshake;
        cout<<"\n\n Total shake collection for the day: "<<tshake;
        //chicken roll
        cout<<"\n\n Number of Chicken roll we had :"<<qchicken;
        cout<<"\n\n Number of Chicken roll we sold :"<<schicken;
        cout<<"\n\n Number of Chicken roll remaning :"<<qchicken-schicken;
        cout<<"\n\n Total Chicken roll collection for the day: "<<tchicken;
        case 8:
        exit(0);
default:
    cout<<"\n Please select the number metioned above!";
}
goto m;
}
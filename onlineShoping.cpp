#include <iostream>
#ifdef _WIN32
#include <windows.h> // For Windows systems
#else
#include <cstdlib>   // For non-Windows systems
#endif

using namespace std;

float onlineShopping();


void clearScreen() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

int main() {
    char startValue, doValue;
    again:
    do {
        cout << "\n\n\t\t\t\t\t\tPlease press 'S' to start shopping: ";
        cin >> startValue;

        if (startValue == 'S' || startValue == 's') {
            float totalAmount = onlineShopping();
            if(totalAmount>0){
            cout << "\n\t\t\t\t\t\tTotal Bill Amount is: " << totalAmount << endl;
            }
        } else {
            cout<<"\n\t\t\t\t\t\tYou have entered the wrong value." << endl;
            goto again;
        }

        cout <<"\n\t\t\t\tDo you want to do shopping again? If yes, press 'Y'. If no, press 'N': ";
        cin >> doValue;
    } while (doValue == 'Y' || doValue == 'y');

    cout << "\n\t\t\t\t\t\tThank you for shopping. Goodbye!" << endl;

    return 0;
}

float onlineShopping() {
    char choice, item;
    int quantity;
    float billAmount = 0.0;
    clearScreen();
    cout<<"\n\t\t\t\t\t\t**********WELCOME TO ONLINE SHOPING**********"<<endl;
    cout<<"\t\t\t\t\t\t-------Please Follow the instructions--------"<<endl;
    cout<<"\t\t\t\t\t\t(1) Please enter M to order mobile phones"<<endl;
    cout<<"\t\t\t\t\t\t(2) Please enter L to order laptops"<<endl;
    cout<<"\t\t\t\t\t\t(3) Please enter D to order desktops"<<endl;
    cout<<"\t\t\t\t\t\t(4) Please enter S to order Speakers"<<endl;
    cout<<"\t\t\t\t\t\t(5) Please enter H to order Headphones"<<endl;
    cout<<"\n\t\t\t\t\t\tEnter Your Choice->";
    cin>>choice;

    if(choice=='m' || choice=='M'){
        mobile:
        cout<<"\n\t\t\t\t\t\t\tMobile Details"<<endl<<endl;
        cout<<"\t\t\t\t\t\t(1) Apple  => Price : 40000"<<endl;
        cout<<"\t\t\t\t\t\t(2) Vivo   => Price : 20000"<<endl;
        cout<<"\t\t\t\t\t\t(3) Oppo   => Price : 25000"<<endl;
        cout<<"\t\t\t\t\t\t(4) Redmi  => Price : 30000"<<endl;
        cout<<"\t\t\t\t\t\t(5) Realme => Price : 17000"<<endl;
        cout<<"\t\t\t\t\t\t(6) MI     => Price : 40000"<<endl;

        cout<<"\n\n\t\t\t\t\t\tEnter Your Choice-->";
        cin>>item;
        
        if(item=='1'){
            cout<<"\t\t\t\t\t\tYou have chossed Apple Phone\n\n\t\t\t\t\t\tEnter the Quantity that you want to buy-->";
            cin>>quantity;
            billAmount+=quantity*40000;
        }else if(item=='2'){
            cout<<"\t\t\t\t\t\tYou have chossed Vivo Phone\n\n\t\t\t\t\t\tEnter the Quantity that you want to buy-->";
            cin>>quantity;
            billAmount+=quantity*20000;
        }else if(item=='3'){
            cout<<"\t\t\t\t\t\tYou have chossed Oppo Phone\n\n\t\t\t\t\t\tEnter the Quantity that you want to buy-->";
            cin>>quantity;
            billAmount+=quantity*25000;
        }else if(item=='4'){
            cout<<"\t\t\t\t\t\tYou have chossed Redmi Phone\n\n\t\t\t\t\t\tEnter the Quantity that you want to buy-->";
            cin>>quantity;
            billAmount+=quantity*25000;
        }else if(item=='5'){
            cout<<"\t\t\t\t\t\tYou have chossed Realme Phone\n\n\t\t\t\t\t\tEnter the Quantity that you want to buy-->";
            cin>>quantity;
            billAmount+=quantity*17000;
        }else if(item=='6'){
            cout<<"\t\t\t\t\t\tYou have chossed MI Phone\n\n\t\t\t\t\t\tEnter the Quantity that you want to buy-->";
            cin>>quantity;
            billAmount+=quantity*40000;
        }else{
            cout<<"\nt\t\t\t\t\tYou have choosed Invalid option";
            goto mobile;
        }
    }else if(choice=='l' || choice=='L'){
        Laptop:
        cout<<"\n\t\t\t\t\t\t\tLaptop Details"<<endl<<endl;
        cout<<"\t\t\t\t\t\t(1) Laptop1  => Price : 40000"<<endl;
        cout<<"\t\t\t\t\t\t(2) Laptop2  => Price : 20000"<<endl;
        cout<<"\t\t\t\t\t\t(3) Laptop3  => Price : 25000"<<endl;
        cout<<"\t\t\t\t\t\t(4) Laptop4  => Price : 30000"<<endl;
        cout<<"\t\t\t\t\t\t(5) Laptop5  => Price : 17000"<<endl;
        cout<<"\t\t\t\t\t\t(6) Laptop6  => Price : 40000"<<endl;

        cout<<"\n\n\t\t\t\t\t\tEnter Your Choice-->";
        cin>>item;
        
        if(item=='1'){
            cout<<"\t\t\t\t\t\tYou have chossed Laptop1\n\n\t\t\t\t\t\tEnter the Quantity that you want to buy-->";
            cin>>quantity;
            billAmount+=quantity*40000;
        }else if(item=='2'){
            cout<<"\t\t\t\t\t\tYou have chossed Laptop2\n\n\t\t\t\t\t\tEnter the Quantity that you want to buy-->";
            cin>>quantity;
            billAmount+=quantity*20000;
        }else if(item=='3'){
            cout<<"\t\t\t\t\t\tYou have chossed Laptop3\n\n\t\t\t\t\t\tEnter the Quantity that you want to buy-->";
            cin>>quantity;
            billAmount+=quantity*25000;
        }else if(item=='4'){
            cout<<"You have chossed Laptop4\n\n\t\t\t\t\t\tEnter the Quantity that you want to buy-->";
            cin>>quantity;
            billAmount+=quantity*25000;
        }else if(item=='5'){
            cout<<"\t\t\t\t\t\tYou have chossed Laptop5\n\n\t\t\t\t\t\tEnter the Quantity that you want to buy-->";
            cin>>quantity;
            billAmount+=quantity*17000;
        }else if(item=='6'){
            cout<<"\t\t\t\t\t\tYou have chossed Laptop6\n\n\t\t\t\t\t\tEnter the Quantity that you want to buy-->";
            cin>>quantity;
            billAmount+=quantity*40000;
        }else{
            cout<<"\t\t\t\t\t\tYou have choosed Invalid option";
            goto Laptop;
        }
    }else if(choice=='D' || choice=='d'){
        desktop:
        cout<<"\n\t\t\t\t\t\t\tDesktop Details"<<endl<<endl;
        cout<<"\t\t\t\t\t\t(1) Desktop1  => Price : 40000"<<endl;
        cout<<"\t\t\t\t\t\t(2) desktop2  => Price : 20000"<<endl;
        cout<<"\t\t\t\t\t\t(3) Desktop3  => Price : 25000"<<endl;
        cout<<"\t\t\t\t\t\t(4) Desktop4  => Price : 30000"<<endl;
        cout<<"\t\t\t\t\t\t(5) Desktop5  => Price : 17000"<<endl;
        cout<<"\t\t\t\t\t\t(6) Desktop6  => Price : 40000"<<endl;

        cout<<"\n\n\t\t\t\t\t\tEnter Your Choice-->";
        cin>>item;
        
        if(item=='1'){
            cout<<"\t\t\t\t\t\tYou have chossed Desktop1\n\n\t\t\t\t\t\tEnter the Quantity that you want to buy-->";
            cin>>quantity;
            billAmount+=quantity*40000;
        }else if(item=='2'){
            cout<<"\t\t\t\t\t\tYou have chossed Desktop2\n\n\t\t\t\t\t\t\tEnter the Quantity that you want to buy-->";
            cin>>quantity;
            billAmount+=quantity*20000;
        }else if(item=='3'){
            cout<<"\t\t\t\t\t\tYou have chossed Desktop3\n\n\t\t\t\t\t\t\tEnter the Quantity that you want to buy-->";
            cin>>quantity;
            billAmount+=quantity*25000;
        }else if(item=='4'){
            cout<<"\t\t\t\t\t\tYou have chossed Desktop4\n\n\t\t\t\t\t\t\tEnter the Quantity that you want to buy-->";
            cin>>quantity;
            billAmount+=quantity*25000;
        }else if(item=='5'){
            cout<<"\t\t\t\t\t\tYou have chossed Desktop5\n\n\t\t\t\t\t\t\tEnter the Quantity that you want to buy-->";
            cin>>quantity;
            billAmount+=quantity*17000;
        }else if(item=='6'){
            cout<<"\t\t\t\t\t\tYou have chossed Desktop6\n\n\t\t\t\t\t\t\tEnter the Quantity that you want to buy-->";
            cin>>quantity;
            billAmount+=quantity*40000;
        }else{
            cout<<"\t\t\t\t\t\tYou have choosed Invalid option";
            goto desktop;
        }
    }else if(choice=='s' || choice=='S'){
        Speaker:
        cout<<"\n\t\t\t\t\t\t\tSpeakers Details"<<endl<<endl;
        cout<<"\t\t\t\t\t\t(1) Speaker1  => Price : 40000"<<endl;
        cout<<"\t\t\t\t\t\t(2) Speaker2  => Price : 20000"<<endl;
        cout<<"\t\t\t\t\t\t(3) Speaker3  => Price : 25000"<<endl;
        cout<<"\t\t\t\t\t\t(4) Speaker4  => Price : 30000"<<endl;
        cout<<"\t\t\t\t\t\t(5) Speaker5  => Price : 17000"<<endl;
        cout<<"\t\t\t\t\t\t(6) Speaker6  => Price : 40000"<<endl;

        cout<<"\n\n\t\t\t\t\t\tEnter Your Choice-->";
        cin>>item;
        
        if(item=='1'){
            cout<<"\t\t\t\t\t\tYou have chossed Speaker1\n\n\t\t\t\t\t\tEnter the Quantity that you want to buy-->";
            cin>>quantity;
            billAmount+=quantity*40000;
        }else if(item=='2'){
            cout<<"\t\t\t\t\t\tYou have chossed Speaker2\n\n\t\t\t\t\t\tEnter the Quantity that you want to buy-->";
            cin>>quantity;
            billAmount+=quantity*20000;
        }else if(item=='3'){
            cout<<"\t\t\t\t\t\tYou have chossed Speaker3\n\n\t\t\t\t\t\tEnter the Quantity that you want to buy-->";
            cin>>quantity;
            billAmount+=quantity*25000;
        }else if(item=='4'){
            cout<<"\t\t\t\t\t\tYou have chossed Speaker4\n\n\t\t\t\t\t\tEnter the Quantity that you want to buy-->";
            cin>>quantity;
            billAmount+=quantity*25000;
        }else if(item=='5'){
            cout<<"\t\t\t\t\t\tYou have chossed Speaker5\n\n\t\t\t\t\t\tEnter the Quantity that you want to buy-->";
            cin>>quantity;
            billAmount+=quantity*17000;
        }else if(item=='6'){
            cout<<"\t\t\t\t\t\tYou have chossed Speaker6\n\n\t\t\t\t\t\tEnter the Quantity that you want to buy-->";
            cin>>quantity;
            billAmount+=quantity*40000;
        }else{
            cout<<"\t\t\t\t\t\tnYou have choosed Invalid option";
            goto Speaker;
        }
    }else if(choice=='h' || choice=='H'){
        Headphone:
        cout<<"\n\t\t\t\t\t\t\tHeadphone Details"<<endl<<endl;
        cout<<"\t\t\t\t\t\t(1) Headphone1  => Price : 40000"<<endl;
        cout<<"\t\t\t\t\t\t(2) Headphone2  => Price : 20000"<<endl;
        cout<<"\t\t\t\t\t\t(3) Headphone3  => Price : 25000"<<endl;
        cout<<"\t\t\t\t\t\t(4) Headphone4  => Price : 30000"<<endl;
        cout<<"\t\t\t\t\t\t(5) Headphone5  => Price : 17000"<<endl;
        cout<<"\t\t\t\t\t\t(6) Headphone6  => Price : 40000"<<endl;

        cout<<"\n\n\t\t\t\t\t\tEnter Your Choice-->";
        cin>>item;
        
        if(item=='1'){
            cout<<"\t\t\t\t\t\tYou have chossed Headphone1\n\n\t\t\t\t\t\tEnter the Quantity that you want to buy-->";
            cin>>quantity;
            billAmount+=quantity*40000;
        }else if(item=='2'){
            cout<<"\t\t\t\t\t\tYou have chossed Headphone2\n\n\t\t\t\t\t\tEnter the Quantity that you want to buy-->";
            cin>>quantity;
            billAmount+=quantity*20000;
        }else if(item=='3'){
            cout<<"\t\t\t\t\t\tYou have chossed Headphone3\n\n\t\t\t\t\t\tEnter the Quantity that you want to buy-->";
            cin>>quantity;
            billAmount+=quantity*25000;
        }else if(item=='4'){
            cout<<"\t\t\t\t\t\tYou have chossed Headphone4\n\n\t\t\t\t\t\tEnter the Quantity that you want to buy-->";
            cin>>quantity;
            billAmount+=quantity*25000;
        }else if(item=='5'){
            cout<<"\t\t\t\t\t\tYou have chossed Headphone5\n\n\t\t\t\t\t\tEnter the Quantity that you want to buy-->";
            cin>>quantity;
            billAmount+=quantity*17000;
        }else if(item=='6'){
            cout<<"\t\t\t\t\t\tYou have chossed Headphone6\n\n\t\t\t\t\t\tEnter the Quantity that you want to buy-->";
            cin>>quantity;
            billAmount+=quantity*40000;
        }else{
            cout<<"\t\t\t\t\t\tYou have choosed Invalid option";
            goto Headphone;
        }
    
        
    }else{
        cout<<"\n\t\t\t\t\t\t\t You have choosed wrong option";
    }
    return billAmount;

} 
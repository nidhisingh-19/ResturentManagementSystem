#include <iostream>
#include<conio.h>

using namespace std;

int main()
{
    cout << "\t\t\t\t\t\tResturent Project" << endl;
    //items = cake, pizza, burger,ice-cream, sandwich
    int purchase_pizza=0, purchase_burger= 0, purchase_sandwich=0,purchase_icecream, purchase_cake = 0; //price replace purchase
    int sell_pizza=0, sell_burger=0, sell_sandwich =0, sell_icecream=0, sell_cake=0;
    int f_pizza=0, f_burger=0, f_sandwich=0, f_icecream=0,f_cake=0;
    int choice,q;

    cout << "\n\n\t\tPurchase Items:";
    cout << "\n\n\nNumber of Pizza :" ;
    cin >> purchase_pizza;
    cout << "Number of Burger :" ;
    cin >> purchase_burger;
    cout << "Number of Sandwich :" ;
    cin >> purchase_sandwich;
    cout << "Number of Ice-Cream :" ;
    cin >> purchase_icecream;
    cout << "Number of Cake :" ;
    cin >> purchase_cake;
    p:
    system("cls");


    cout <<" \n\t\t\t Control Panel";
    cout << "\n 1. Pizza";
    cout << "\n 2. Burger";
    cout << "\n 3. Sandwich";
    cout << "\n 4. Ice-Cream";
    cout << "\n 5. Cake";
    cout << "\n\n Details..";
    cout << "\n\nExit.";

    cout << "\n\n Enter Choice:";
    cin >> choice;

    switch(choice)
    {

    case 1:
        cout << "\n\n Enter Pizza Quantity";
        cin >>q ;
        if(purchase_pizza-sell_pizza >=q)
        {
            sell_pizza += q;
            f_pizza = q*120;
            cout << "\n\n\t\t\t " << q << ends  << "Pizza Sell , Thankyou for Purchasing :) .";



        }
        else{
            cout << "\n\n\t\t\t Sorry" << purchase_pizza - sell_pizza << "Remaining Pizza in Resturent";
        }

        break;
    case 2:
        cout << "\n\n Enter Burger Quantity";
        cin >>q ;
        if(purchase_burger-sell_pizza >=q)
        {
            sell_burger += q;
            f_burger = q*90;
            cout << "\n\n\t\t\t " << q  << ends  << "Burger Sell , Thankyou for Purchasing :) .";



        }
        else{
            cout << "\n\n\t\t\t Sorry" << purchase_burger  - sell_burger<< "Remaining Pizza in Resturent";
        }

        break;
    case 3:
        cout << "\n\n Enter Sandwich  Quantity";
        cin >>q ;
        if(purchase_sandwich-sell_sandwich >=q)
        {
            sell_sandwich += q;
            f_sandwich = q*70;
            cout << "\n\n\t\t\t " << q  << ends  << "Sandwich Sell , Thankyou for Purchasing :) .";



        }
        else{
            cout << "\n\n\t\t\t Sorry" << purchase_sandwich - sell_sandwich  << "Remaining Sandwich in Resturent";
        }

        break;
    case 4:
        cout << "\n\n Enter Ice-Cream Quantity";
        cin >>q ;
        if(purchase_icecream-sell_icecream >=q)
        {
            sell_icecream += q;
            f_icecream = q*100;
            cout << "\n\n\t\t\t " << q << ends << "Ice-Cream Sell , Thankyou for Purchasing :) .";



        }
        else{
            cout << "\n\n\t\t\t Sorry" <<  purchase_icecream - sell_icecream<< "Remaining Ice-Cream in Resturent";
        }

        break;
    case 5:
        cout << "\n\n Enter Cake Quantity";
        cin >>q ;
        if(purchase_cake-sell_cake >=q)
        {
            sell_cake += q;
            f_cake = q*250;
            cout << "\n\n\t\t\t " << q<< ends << "Cake Sell , Thankyou for Purchasing :) .";



        }
        else{
            cout << "\n\n\t\t\t Sorry" << purchase_cake -sell_cake << "Remaining Pizza in Resturent";
        }

        break;
    case 6:
          cout << "\n\n\t\t Details Panel";
          cout << "\n Purchase Pizza Quantity :" << purchase_pizza;
          cout << "\n Sales Pizza Quantity :" << sell_pizza;
          cout << "\n Remaining Pizza Quantity :" << purchase_pizza - sell_pizza;
          cout << "\nTotal Pizza Price in a  Day :" << f_pizza;

         // cout << "\n\n\t\t Details Panel";
          cout << "\n\n\n Purchase Burger Quantity :" << purchase_burger;
          cout << "\n Sales Burger Quantity :" << sell_burger;
          cout << "\n Remaining Burger Quantity :" << purchase_burger - sell_burger;
          cout << "\n Total Pizza Price in a  Day :" << f_burger;

        //  cout << "\n\n\t\t Details Panel";
          cout << "\n\n\n Purchase Sandwich Quantity :" << purchase_sandwich;
          cout << "\nSales Sandwich Quantity :" << sell_sandwich;
          cout << "\n Remaining Sandwich Quantity :" << purchase_sandwich- sell_sandwich;
          cout << "\n Total Sandwich Price in a  Day :" << f_sandwich;

          //cout << "\n\n\t\t Details Panel";
          cout << "\n\n\n Purchase Ice-Cream Quantity :" << purchase_icecream;
          cout << "\n Sales Ice_Cream Quantity :" << sell_icecream;
          cout << "\n Remaining Ice-Cream Quantity :" << purchase_icecream - sell_icecream;
          cout << "\n Total Ice-Cream Price in a  Day :" << f_icecream;

         // cout << "\n\n\t\t Details Panel";
          cout << "\n\n\n Purchase Cake Quantity :" << purchase_cake;
          cout << "\n Sales Cake Quantity :" << sell_cake;
          cout << "\n  Remaining Cake Quantity :" << purchase_cake - sell_cake;
          cout << "\n Total Pizza Price in a  Day :" << f_cake;


          cout << "\n\n Total Profit of Day :" << f_pizza+f_burger+f_sandwich+f_icecream+f_cake;


        break;

        case 7:
            exit(0);
        default :
            cout << "Invalid Choice.. !!Please Try Again.";


    }
    getch();
    goto p;












    return 0;
}

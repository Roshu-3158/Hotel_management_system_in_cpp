#include <iostream>
using namespace std;
int main()
{
    char name[50];
    char adrs[100];
    int i = 1, num, a, b, n, y, price, gst = 0, total = 0,quant=0;
    char ch[50];
    cout<<"\n                        ____________ Menu Card  _________________\n\n";

    cout<<"\n                       1) All Cold-drinks (200ml)  - 25rs\n\n                2) Pizza        - 200rs        9) Burger       - 100rs\n\n                3) Sandwitch    - 60rs         10) Chicken 65   - 60rs \n\n                4) Pasta        - 40rs         11) Noodles      - 60rs\n\n                5) Misal pav    - 50rs         12) Pav Bhaji    - 85rs\n\n                6) Chicken Rice  - 80rs        13) Soup         - 45rs\n\n                7) Samosa       - 30rs         14) Dosa         - 60rs\n\n                8) Salad        - 50rs         15) Paneer Masala -120rs\n ";

    printf("\n ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");

    cout<<"\n CUSTOMER INFORMATION :\n ";
    cout<<"\n Customer Name: "<<endl;
    cin>>name;

    cout<<"\n Customer Address: ";
    cin>>adrs;
    cout<<"\n ******************************************************************************* \n\n";

    cout<<"\n Enter the name of items: ";
    cin>>ch;

    cout<<"\n Enter the number of item: ";
    cin>>n;


    cout<<"\n Enter the Quantity of items: ";
    cin>>quant;
    
    switch (n)
    {
    case 1:
        n = 25;
        gst = (n / 100) * 18;
        total = n + gst;
        break;

    case 2:
        n = 200;
        gst = (n / 100) * 18;
        total = n + gst;
        break;

    case 3:
        n = 60;
        gst = (n / 100) * 18;
        total = n + gst;
        break;

    case 4:
        n = 40;
        gst = (n / 100) * 18;
        total = n + gst;
        break;

    case 5:
        n = 50;
        gst = (n / 100) * 18;
        total = n + gst;
        break;

    case 6:
        n = 80;
        gst = (n / 100) * 18;
        total = n + gst;
        break;

    case 7:
        n = 30;
        gst = (n / 100) * 18;
        total = n + gst;
        break;

    case 8:
        n = 50;
        gst = (n / 100) * 18;
        total = n + gst;
        break;

    case 9:
        n = 100;
        gst = (n / 100) * 18;
        total = n + gst;
        break;

    case 10:
        n = 60;
        gst = (n / 100) * 18;
        total = n + gst;
        break;

    case 11:
        n = 60;
        gst = (n / 100) * 18;
        total = n + gst;
        break;

    case 12:
        n = 85;
        gst = (n / 100) * 18;
        total = n + gst;
        break;

    case 13:
        n = 45;
        gst = (n / 100) * 18;
        total = n + gst;
        break;

    case 14:
        n = 60;
        gst = (n / 100) * 18;
        total = n + gst;
        break;

    case 15:
        n = 120;
        gst = (n / 100) * 18;
        total = n + gst;
        break;
    }

    cout<<"\n\n |***************************** Hotel shindeshahi ***********************************|\n";

    cout<<"\n customer name:"<<name;

    cout<<"\n customer address: \n"<<adrs;
    
    cout<<"\nItem       Quantity    Price     Gst     Total\n";
    cout<< ch<<"\t  "<<quant<<"\t  "<<n<<" \t  "<<gst<<" \t  "<<total*quant;

    cout<<"\nThank you! do visit again :)\n";   

    cout<<"\n ============================================================================= \n";
    return 0;
}

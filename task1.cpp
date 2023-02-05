#include<iostream>
using namespace std;
main()
{
    string name;
    float quantity;
    float total;
    string fruit[4] = {"peach","apple","guava","watermelon"};
    int price[4] = {60,70,40,30};
    cout << "Enter the name of fruit...";
    cin >> name;
    cout << "Enter the quantity of fruits in KG's...";
    cin >> quantity;
    for(int n=0;n<4;n++)
    {
        if(name==fruit[n])
        {
            total=price[n]*quantity;
        }
    }
    cout << "Total price is.." << total;
}
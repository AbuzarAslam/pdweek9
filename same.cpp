#include<iostream>
using namespace std;
main()
{
    string name[4];
    int count = 0;
    for(int n=0;n<4;n++)
    {
        cout << "Enter any element...";
        cin >> name[n];
    }
    for(int n=0;n<4;n++)
    {
       if(name[0]==name[n])
       {
        count = count +1;
       }
    }
    if(count==4)
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }
    
}
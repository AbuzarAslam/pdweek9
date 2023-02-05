#include<iostream>
using namespace std;
main()
{
    int size;
    cout << "Enter the size of array...";
    cin >> size;
    int count=0;
    int number[size];
    for(int n=0;n<size;n++)
    {
        cout << "Enter any number...";
        cin >> number[n];
    }
    for(int n=0;n<size;n++)
    {
        if(number[n]%10==7 || number[n]/10==7)
        {
            count=count+1;
        }
    }
    if(count>0)
    {
        cout << "Boom!";
    }
    else
    {
        cout << "There is no 7";
    }
}
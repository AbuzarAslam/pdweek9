#include<iostream>
using namespace std;
main()
{
    int size;
    int num;
    int number;
    cout << "Enter the size of array...";
    cin >> size;
    int array[size];
    for(int n=0;n<size;n++)
    {
        cout << "Enter number...";
        cin >> array[n];
    }
    cout << "Enter number of times even-odd transformation need to be done....";
    cin >> num;
    for(int n=0;n<size;n++)
    {
        if(array[n]%2==0)
        {
            number=array[n]+num*(-2);
            cout << number << " ";
        }
        if(array[n]%2!=0)
        {
            number=array[n]+num*2;
            cout << number << " ";
        }
    }
}
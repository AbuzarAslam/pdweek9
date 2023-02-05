#include<iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the number of the color...." << endl;
    cin >> num;
    int count=0;
    string array[num];
    for(int idx=0 ; idx<num ;idx++)
    {
        cout << "Enter the colour..." << endl;
        cin >> array[idx];
    }
    int time1;
    time1 = num * 2;
    for(int idx=0 ; idx < num ;idx++)
    {
        if(array[idx]!=array[idx + 1])
        {
            count++;
        }
    } 
   int time2;
   time2=time1 + ( count -1 );
   cout << "time required  " << time2 ;
}

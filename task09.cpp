#include<iostream>
using namespace std;
main()
{
    string moves[10]={"shimmy","shake","pirouette","slide","box stop","headspin","dosado","pop","lock","arabesque"};
    string num;
    cout <<"Enter the digit of the pin...." << endl;
    getline(cin,num);
    int count = num.length();
    int count2=0;
    if(count>4 || count<4)
    {
        cout<<"Invalid Input";
    }
       for(int idx=0;idx<4;idx++)
       {
          int value1 = num[idx]-'0';
          if(value1>=0 && value1<10)
          {
             count2++;
          }
       }
     if(count2!=4)
     {
        cout<<"Invalid input";
     }    
    else
    {   
          for(int idx=0;idx<4;idx++)
         {
           int count1 = num[idx]-'0'+idx;
            if(count1>9)
            {
             count1 = count1-10;
             cout<<moves[count1]<<" ";
            }
           else
           {
          cout<<moves[count1]<<" ";
           }
         }
    
       

    }
}

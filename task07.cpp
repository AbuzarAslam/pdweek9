#include<iostream>
using namespace std;
main()
{
    string  string1;
    cout <<"Enter any string.... " << endl;
    getline(cin,string1);
    int count1 = string1.length();
    string  string2;
    cout <<"Enter any string...." << endl;
    getline(cin,string2);
    int count2=string2.length();
    int count=0;
    int count3=0;
    for(int i=0 ;i<count1;i++)
    {
     for(int idx=0 ; idx<count2 ; idx++)
       {
          if(string1[i]==string2[idx])
          {
            
             count = count + 1;
                break;
          }
       }
       
    }
    cout << count << endl;
}

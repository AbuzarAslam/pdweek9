#include<iostream>
using namespace std;
main()
{
    string name;
    float total;
    string movies[5] = {"Gladiator", "StarWars", "Terminator", "TakingLives", "TombRider"};
    cout << "Enter the name of movie.....";
    cin >> name;
    for(int n=0;n<5;n++)
    {
        if(name==movies[n]&&n%2==0)
        {
            total=500-(500*10/100.0);
        }
        else if(name==movies[n]&&n%2!=0)
        {
            total=500-(500*5/100.0);
        }
    }
    cout << "Total price is..." << total;
}
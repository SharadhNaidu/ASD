#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "Enter the number of the day : ";
    int n;
    cin >> n;

    switch(n)
    {
        case 1 :
            cout << "sunday";
            break;
        case 2 :
            cout << "Monday";
            break;
        case 3 :
            cout << "Tuesday";
            break;
        case 4 :
            cout << "wednesday";
            break;
        case 5 :
            cout << "thursday";
            break;
        case 6 :
            cout << "friday";
            break;
        case 7 :
            cout << "saturday";
            break;
        default :
            cout << "Enter a number from 1-7 you dumbfck";
            break;     
    }


    
    return 0;
}
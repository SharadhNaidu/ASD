#include <bits/stdc++.h>
using namespace std;
int main()
{
    int age ;
    cin >> age ;
    if (age >= 18) 
    {
        cout << "you are an adult boy.";
    }
    else if (age > 18 || age >=16 )
    {
        cout << "wait gang you are yet to be an adult";
    }
    else
    {
        cout << "go have a life kid.";
    }
    return 0;
}
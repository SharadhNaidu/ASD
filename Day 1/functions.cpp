#include <bits/stdc++.h>
using namespace std;
void printName(string name)
{
    cout << "Hey " << name << endl ;
}

int sum(int a , int b)
{
    int sum = a + b;
    return sum;
}
int main()
{
    cout << "enter Your name : ";
    string name ;
    cin >> name;
    printName(name);
    int a , b;
    cout << "enter the numbers a and b :" <<endl;
    cin >> a >> b;
    int result = sum(a , b);
    cout << result;
    return 0;
    /*
    pass by value  we will just pass a parameter , like we will just send a copy of the existing variable 
    and this wont chnage the value of the real variable .

    pass by reference : sp if we use &in front of the variable name during the declration of the function then it is pass by value for\
    example {void sum(int &a , int &b) } so this take the variables address as reference so if the variable value is changes in the function
    the original value of the variable will also change.
    */
}
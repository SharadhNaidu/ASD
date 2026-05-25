#include <bits/stdc++.h>
using namespace std ;
int main()
{
    string name = "SharadhNaidu";
    //for loop
    for (int i = 0 ; i < name.size() ; i++)
    {
        cout << name[i] << endl;
    }
    //whille loop
    int i = 0;
    while (i < name.size())
    {
        cout << name[i] ;
        i++;
    }
    cout << endl;
    int j = name.size();
    do 
    {
        cout << name[j-1];
        j--;
    }
    while (j >= 1);
    return 0;
}
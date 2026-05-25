#include<bits/stdc++.h>
using namespace std;
int main()
{
    //array elements are stored in consecutive memory addresses but we cant be sure of where the zeroth element is stored 
    int arr[5];
    arr[0] = 0;
    arr[1] = 1;
    arr[2] = 2;
    arr[3] = 3;
    arr[4] = 4;
    cout << arr[0] << " " << arr[1] << " "  << arr[2] << " "  << arr[3] << " "  << arr[4] << endl;
    int a[5];
    cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4] ;
    cout << a[0] << " " << a[1] << " "  << a[2] << " "  << a[3] << " "  << a[4] << endl;
    //2D arrays
    int b[3][3];
    //2D arrays are just like matrix even the position is (rows,column).
    //if we dont initialize it throws a garbage value.
    b[0][0] = 0;
    b[0][1] = 1;
    b[0][2] = 2;
    b[1][0] = 3;
    b[1][1] = 4;
    b[1][2] = 5;
    b[2][0] = 6;
    b[2][1] = 7;
    b[2][2] = 8;
    cout << b[0][0] << b[0][1] << b[0][2] << b[1][0] << b[1][1] << b[1][2] << b[2][0] << b[2][1] << b[2][2] << endl;
    
    //.size() function in cpp
    // String is just array of characters
    string s = "SharadhNaidu";
    int len = s.size();
    cout << s[len-2];
    return 0;
    
}
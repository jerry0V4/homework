#include<iostream>
using namespace std;

int f( int a, int b )
{
    if( b==0 )
        return a;
    return f( b, a%b );
}

int main()
{
    int a, b;
    cout<<"輸入兩個數";
    cin>>a>>b;
    cout << f(a,b) << endl;

    return 0;
}

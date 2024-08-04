#include<iostream>
using namespace std;
int main()
{
    bool p=true;
    bool q=false;
    bool r=true;
    bool t=false;
    cout<<(p==r==q==t);
    cout<<(t==q==p==r);
    cout<<(p==q==r==t);
}
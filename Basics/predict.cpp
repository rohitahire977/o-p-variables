#include<iostream>
using namespace std;
int main()
{
int p=3,q=6;
p-=q+=p;//here hierachy is from right to left.
cout<<p<<" "<<q;//a+=b - a=a+b.
}
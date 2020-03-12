#include<iostream>
using namespace std;
int factorial(int n);
int main()
{
int a;
cout<<"Enter number:";
cin>>a;
cout<<"factorial is:"<<factorial(a);
return 0;
}
int factorial(int n)
{
if(n==0)
return 1;
return n*factorial(n-1);
}

#include<iostream>
using namespace std;

int main()
{

    int n;
    cin>>n;
     int sum=0;
    int rem,div;
    while(n>0)
    {
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    cout<<sum;
}

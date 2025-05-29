#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,i,factors=0;
    cin>>n;
    for(i=2;i<=sqrt(n);i++){
        if(n%i==0){
            factors++;
            break;
        }
    }
    if(factors==0)
        cout<<"prime";
    else
        cout<<"not prime";
}
#include<iostream>
using namespace std;
class Day7
{
    public:
    int add(int a,int b) {return a+b;}
};
int main()
{
    Day7 h;
    int m=h.add(10,59);
    cout<<m;
    return 0;
}
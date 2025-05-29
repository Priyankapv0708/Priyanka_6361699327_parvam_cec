#include<iostream>
using namespace std;
class A
{
    public:
        A(){ 
           cout<<"stop it.....!!!!"<<endl;
           surprise();
           }
void surprise(){cout<<"this is secret"<<endl;}
};
int main(){
    A obj;
    obj.surprise();
}
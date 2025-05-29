#include<iostream>
using namespace std;
class Day7
{
   public:void display()
   {cout<<"it will show outut"<<endl;} 
};
int main()
{
    Day7 obj;
    obj.display();
    Day7*abc=new Day7;
    abc->display();
    delete abc;
    obj.display();
    abc->display();
}
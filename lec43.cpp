#include<iostream> 
using namespace std;
class Base1{
       public:
        void display(){
            cout<<"you are cool"<<endl;
        }
 };
 class Base2{
       public:
        void display(){
            cout<<"you are trendy"<<endl;
        }
 };
class Derived : public Base1,public Base2{
    int a;
    public:
       void diplay(){
        Base2 :: display();
       }
};
int main(){
    Derived d;
    d.display();
    return 0;
}
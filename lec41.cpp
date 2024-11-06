#include<iostream>
using namespace std;
class Base1
{
     protected:
            int base1;
            public: 
                   void set_base1(int a){
                 base1=a;
            }


};
class Base2
{
     protected:
            int base2;
            public: 
                   void set_base2(int b){
                 base2=b;
            }


};
class Derived: public Base1, public Base2
{
    public:
           void display(){
            cout<<"the value of base 1 is"<<base1<<endl;
            cout<<"the value of base 2 is"<<base2<<endl;
            cout<<"the sum of base 1 and base 2 is "<<base1+base2<<endl;

           }
           };

int main (){
    Derived keshav;
    keshav.set_base1(23);
    keshav.set_base2(12);
    keshav.display();
    return 0;

}
            
            


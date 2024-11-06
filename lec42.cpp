#include<iostream>
#include<cmath>
using namespace std;
class SimpleCalculator {
    int a,b;
    public:
    void getDataSimple(){
        cout<<"enter the value of a"<<endl;
        cin>>a;
      cout<<"enter the value of b"<<endl;
      cin>>b;
}
  void performOperationSimple(){
    cout<<"the summation is"<<a+b<<endl;
    cout<<"the substraction is"<<a-b<<endl;
    cout<<"the multiplication is"<<a*b<<endl;
    cout<<"the division is"<<a/b<<endl;
     }

};
class ScientificCalculator {
    int a,b;
    public:
           void getDataScientific(){
           cout<<"enter the value of a"<<endl;
           cin>>a;
           cout<<"enter the value of b"<<endl;
            cin>>b;
           }

            void performOperationScientific(){
             cout<<"the value of cos(a)"<<cos(a)<<endl;
             cout<<"the value of sin(a)"<<sin(a)<<endl;
             cout<<"the value of sin(b)"<<sin(b)<<endl;
             cout<<"the value od exp(a)"<<exp(a)<<endl;
     }

};
// multiple inheritance 
//public mode 
class HybridCalculator : public SimpleCalculator, public ScientificCalculator{

};

int main() 
{ 
    HybridCalculator calc;
    calc.getDataSimple();
    calc.performOperationSimple();
    calc.getDataScientific();
    calc.performOperationScientific();
    return 0;

}
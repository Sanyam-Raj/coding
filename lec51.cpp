#include<iostream>
using namespace std;
class Despacito{
    int real, imaginary;
    public:
           void getData (){
            cout<<"the real part is"<<real<<endl;
            cout<<"the real part is"<<imaginary<<endl;

           }
           void setData(int a,int b){
            real = a;
            imaginary= b;

           }
};
int main() {
    Despacito *ptr= new Despacito;
   // (*ptr).setData(3,4);
   // (*ptr).getData();
   ptr->setData(1,4);
   ptr->getData();
    
    
    return 0;
}
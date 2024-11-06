#include <iostream>
using namespace std;
 class  Room
 {

 
 public:

     int  sum(int a,int b){
         return a+b;
             }


   
    

 };


int main (){
    int a,b;
    cout<<"enter the value "<<endl;
    cin>>a;
    cout<<"enter the value "<<endl;
    cin>>b;
Room r1;
cout<<"the sum is ";
cout<<r1.sum(a,b);
   // r1.sum(3,4);
   // cout<<sum(3,4)
    return 0;

}



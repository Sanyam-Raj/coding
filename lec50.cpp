#include<iostream>
using namespace std;
int main(){
    int a=4;
    int*ptr=&a;
    cout<<"the value of a is"<<*(ptr)<<endl;
    
// new operator
//float*p=new float(40.5);
int*p= new int(45);
cout<<"the value of adress p is"<<*p<<endl;

int*arr= new int[4];
arr[0]=20;
arr[1]=20;
arr[2]=20;
arr[3]=20;
//delete[] arr;
cout<<"the value of arr[0]"<<arr[0]<<endl;
cout<<"the value of arr[1]"<<arr[1]<<endl;
cout<<"the value of arr[2]"<<arr[2]<<endl;
cout<<"the value of arr[3]"<<arr[3]<<endl;

return 0;

}
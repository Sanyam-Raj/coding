#include<iostream>
using namespace std;
class Mall{
    int id;
    float price;
    public:
           void setData(int a,int b){
            id=a;
            price=b;
         }
         void getData(){
            cout<<"the id of the item"<<id<<endl;
            cout<<"the of price the item"<<price<<endl;
        }
};
int main(){
    int size=3;
    Mall*ptr=new Mall[size];
    Mall*ptrTemp = ptr ;
    int p,i;
    float q;
    for (i=0;i<size;i++)
    {
    cout<<"enter the price ans id of the item "<<i+1<<endl;
    cin>>p>>q;
    ptr->setData(p,q);
    ptr++;
    }
    for(i=0;i<size;i++)
    {
    cout<<"the item no is"<<i+1<<endl;
    prtTemp->getData();
    ptrTemp++;
}

return 0;
}


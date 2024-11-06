#include<iostream>
using namespace std ;
int count =0;
class num{
    public:
    num(){
        count++;
        cout<<"at this time constructor run"<<count<<endl;
    }
    ~num(){
        cout<<"at this point distructor called"<<count<<endl;
        count--;
    }
};
int main(){
    cout<<"we are inside our main function"<<endl;
    cout<<"creating two more object"<<endl;
    num n1;
    {
        cout<<"entering the block"<<endl;
        cout<<"creating the 2 more object"<<endl;
        num n2 ,n3;
        cout<<"exit he block"<<endl;

    }
    cout<<"back to main"<<endl;
    return 0;
}

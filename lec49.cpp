#include<iostream>
using namespace std;
class Test
         {
            int a;
            int b;
     public:
            Test(int i, int j): a(i), b(j)
            {
            cout<<"constructor initialize"<<endl;
            cout<<"the value of a is "<<a<<endl;
            cout<<"the value of b is "<<b<<endl;
                     }
         };
         int main ()
         {
            Test t(4,6);
            return 0;
         }

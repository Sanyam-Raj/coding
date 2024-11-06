#include<iostream>
using namespace std;
class Base {
    int b;
    protected:
              int a;
    
};
class Derived:protected Base{
};
int main() {
    Base b;
    Derived d;
    return 0;
}
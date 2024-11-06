#include <iostream>
#include <list>

using namespace std;
void display(list <int> &lst){
    list<int>::iterator it;
    for(it=lst.begin(); it!=lst.end(); it++)
    {
        cout<<*it<<" ";
    }
    {
        cout<<endl;
    }
}
int main(){
    list<int> list1;// list with 0 length
    list1.push_back(9);
    list1.push_back(2);
    list1.push_back(5);
    list1.push_back(4);
    display(list1);

    list<int>list2(4);
    list<int>::iterator iter ;
    iter=list2.begin ();
    *iter=45;
    iter++;
    *iter=5;
    iter++;
    *iter=7;
    iter++;
    display(list2);
    list1.merge(list2);
    cout<< "mergeing list 1 and list 2:";
    list1.sort();
    display(list1);

    return 0;
}


#include<iostream>
#include<functional>
#include<algorithm>

using namespace std;
int main(){
    int arr[]={3,1,6,5,10};
    sort(arr,arr+5,greater<int>());
    for(int i=0; i<6; i++)
    
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}

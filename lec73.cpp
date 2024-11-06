/*#include<iostream>
#include<map>
#include<string>
 
using namespace std;
 
int main(){
 
    // Map is an associative array
    map<string, int>  marksMap;
    marksMap["Atul"] = 58;
    marksMap["Rohit"] = 57;
    marksMap["Kishlay"] = 78;
    marksMap["Aditya"] = 65;
    marksMap["Sachin"] = 53;
 
    map<string,int> :: iterator iter;
    for (iter = marksMap.begin(); iter != marksMap.end(); iter++)
    {
        cout<<(*iter).first<<" "<<(*iter).second<<"\n";
    }
    
 
    return 0;
}*/
#include<iostream>
#include<map>
#include<string>

using namespace std; 

int main(){
     map<string, int> marksScore;
     marksScore["love"] = 99;
     marksScore["you"] = 90;
     marksScore["again"] = 100;

      map<string,int> :: iterator iter;
      for (iter = marksScore.begin(); iter!= marksScore.end(); iter++)
     {

     cout<<(*iter).first<<" "<<(*iter).second<<"\n";
}
      return 0;
}
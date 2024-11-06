#include<iostream>
using namespace std;
class Student{
    protected:
              int roll_no;
    public:
           void set_number(int a){
            roll_no=a;
           }
            void print_number(void){
                cout<<"your roll no is"<<roll_no<<endl;
            }

 };
 class Test : virtual  public Student{
    protected:
            float maths, physics;
    public:
           void set_marks(float m1, float m2){
            maths= m1;
            physics= m2;
           }
            void print_marks(){
                cout <<"your result:"<<endl;
                cout<<"maths:"<<maths<<endl;
                 cout<<"physics:"<<physics<<endl;

            }
 };
 class Sports: virtual public Student{
    protected:
              float score;
    public :
            void set_score(float sc ){
                score= sc;
          }
          void print_score(void){
            cout<<"your score is:"<<score<<endl;

          }
 };
 class Result:public Test,public Sports{
    private:
    float total;
    public:
           void display(void){
        total= maths + physics + score;
        print_number();
        print_marks();
        print_score();
        cout<<"your total score is"<<total<<endl;
            }
 };
int main(){
    Result shivam;
    shivam.set_number(44);
    shivam.set_marks(44,88);
    shivam.set_score(444);
    shivam.display();
    
    return 0;
}
 
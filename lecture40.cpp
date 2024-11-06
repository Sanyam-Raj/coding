#include <iostream>
using namespace std;
class Student{
    protected :
               int roll_number;
    public:
           void set_roll_number(int);
           void get_roll_number();
};
void Student :: set_roll_number (int r){
    roll_number=r;
}
void Student :: get_roll_number (){
    cout<<"your rol no is"<<roll_number<<endl;

}
class Exam: public Student{
    protected:
              float maths;
              float english;

    public :
            void set_marks (float,float);
            void get_marks (void);
};
void Exam::set_marks(float m1,float m2){
      maths =m1;
      english=m2;
    
}
void Exam::get_marks ()
{
    cout<<"the marks in maths is"<<maths<<endl;
    cout<<"the marks in physics is"<<english<<endl;
}
class Result: public Exam {
    float percentage;
    public:
        void display_result()
        {
            get_roll_number();
            get_marks();

            cout<<"your per9centage is"<<(maths+english)/2<<endl;
            
        }
};

int main() {
    Result harry;
    harry.set_roll_number(420);
    harry.set_marks(94,94);
    harry.display_result();
    return 0;

}
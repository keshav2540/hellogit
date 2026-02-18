/*Syntax of parameterized constructor
- Passing values during object creation
- Example with multiple parameters
- Explicit constructors= if we write explicit key word implicit(=) coversion is not allow
💡 Practice: Create a Book class with parameterized constructor for title & author*/
#include <iostream>
using namespace std;
class student{ public:
    string name;
   int  rollno;
    student(string name,int rollno){ //default constuctor have not any parameter
        cout<<"parameterized constructor is executed";
      this->  name=name;
      this->  rollno=rollno;
    }
  explicit  student(int rollno){ //explicit roke ja constructor
      this->  rollno=rollno;
    }
};

int main() { student s1("keshav",2345);
cout<<endl<<s1.name<<" "<< s1.rollno;
    // student s2=213;//explicit rokta ye implicit ho rha ye
    // cout<<endl<<s2.rollno;
    return 0;}
/*Syntax of default constructor
- Automatic call when object is created,np parameter,can use ti initialize values
- Example with initialization
- Constructor delegation +one constuctor call other constuctor;
💡 Practice: Create a Student class with default constructor initializing default values.
*/

#include <iostream>
using namespace std;
class student{ public:
    string name;
   int  rollno;
    // student(){ //default constuctor have not any parameter
    //     cout<<"default constructor is exicuted";
    //     name="keshva";
    //     rollno=24307;
    // }
     student(): student("ajay",876){ //for clean code and constructor delegation
    }
     student(string name,int rollno){ //default constuctor have not any parameter
        cout<<"parameterized constructor is executed";
      this->  name=name;
      this->  rollno=rollno;
    }
};

int main() { student s1;

    cout<<endl<<s1.name<<" "<< s1.rollno;
    return 0;
}

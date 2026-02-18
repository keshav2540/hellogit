
/*- Default copy constructor
- Shallow copy= just copies member values as they are(default constuctor ans =oprertor in alwaya done shallow copy)
if the class has a pointer ,only address is copied ,so both object point on same location you can see by location analysis 
when odject modify and delete memory the other obj is affected
 vs Deep copy=allocate in new memory
- Example with pointers
- Assignment operator (operator= deep copy)
this deep and shallow concept apply only pointer not primitive data type its always make deep copy ]
*/


#include <iostream>
using namespace std;
class student{ public:
    string *name;
    student(string name) :name(new string(name)) {}
   /* deep copy i defing constructor */
  student( const student &s){
   this->name=new string (*s.name);
/*if we not write this uper line  default copy construtor which is called but i write this deep copy constuctoe is also called 
   this->name=s.name;*/
  }
//   student& operator=(const student& s) {
//     if (this != &s) {        // 1. If object is not assigning to itself
//         delete[] name;           // 2. Delete old memory
//         name = new string(*s.name);  // 3. Create new memory
//     }
//     return *this;                // 5. Return current object
// }

    void update(string nam){
        *name=nam;
    }  
     void display(){
        cout<<*name<<" "<<name<<endl;
     }
     ~student(){
        delete name;
     }
};

int main() {
    student s1("keshav");
    student s2("hello"); //pahle bnanan pedega fir assign kar do samesa shallow copy hi banega
    //if i do s2=s1 bacause new obj create ho rha ye
     s2=s1;
     student s3(s2);//deep copy
    s1.display();
    s2.display();
    s1.update("kinya ram");
    s1.display();
    s2.display();
    s3.display();
    s1.display();
    s2.display();
    return 0;
}

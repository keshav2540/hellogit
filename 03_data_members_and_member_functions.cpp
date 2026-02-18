/*Day 3: Data Members & Member Functions  [File: 03_data_members_functions.cpp]
- Instance variables=every odj has own copy
staic variables ek hi bar banate ye
const jinki value change nhi hoti
- Member functions inside vs outside class
if fun is define inside the class by default he is inline
for make function we use inline key word
- Scope resolution operator ::
- Inline vs non-inline functions
💡 Practice: Create a Rectangle class with area & perimeter functions.*/


#include <iostream>
using namespace std;
class student{ public:
    string name;
    int rollno;
  static int section ; 
    const float pi=3.14;
};
class test{
    public:
    int cube(int i) {return i*i*i;} //by default inline
    int sqare(int i);
};

inline int test::sqare(int i){
    return i*i;
}

int main() {
    student c1,c2;
    c1.name="keshav";
    c1.rollno=24307;
    c1.section=4;
    // c1.pi=12344; not change const type
     c2.name="amit";
    c2.rollno=24305;
    c2.section=6;
    cout<< c1.name<<endl;
      cout<< c1.rollno<<endl;
        cout<< c1.section<<endl;
        cout<< c2.name<<endl;
      cout<< c2.rollno<<endl;
        cout<< c2.section<<endl;
           cout<< c1.section<<endl; // same as c2 section
     test t1;
     cout<<t1.cube(2)<<" "<<t1.sqare(3);
    return 0;
}

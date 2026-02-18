#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
struct student{  // no need to write acess specifier
    string name;
    float cgpa;
    int rollno;
    student(){ // its a constuctor we can make it three type 1 is default 2 is perameterise 3rd is copy
       cgpa=9;
    }
 void display(){
    cout<<name<<cgpa<<rollno<<endl;
 }
};
int main() {
    student s1; // we can make multiple indentifier 
    s1.name="keshav";
    s1.rollno=24307;
    s1.display();
    return 0;
}
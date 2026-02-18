/*Class & Object (Basics)
- Defining a class
class is blueprint like a blank form
- Creating objects
object is the real thing,fill form
- Accessing members (. operator)
 we acess from this all member(atributes and fun) of fun
- Memory layout of object
every obj have make a spreate(own) copy of atributes member fun is store once
- Anonymous objects
an obj is created with out  name foe one time use in one line
💡 Practice: Make a Car class with attributes and create 3 objects.*/

#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
class car{public:
    string name;
    string company;
    int year;
    car(string n,string c, int y){
        name=n;
        company=c;
        year=y;
    }
    void display(){
        cout<<name<<" "<<company<<" "<<year<<endl;
    }
    void slowMemoryoLocation(){
        cout<<&name<<" "<<&company<<" "<<&year<<endl;
    }
};

int main() {
    car c1("nano","tata",2014);
    c1.display();
    c1.name="nanova";
     c1.display();
    car c2("swift"," maruti",2025);
    c1.slowMemoryoLocation();
    c2.slowMemoryoLocation();
    car("volvo","volvo",2026).slowMemoryoLocation();// Anonymous objects
    car("volvo","volvo",2026).display();
    return 0;}

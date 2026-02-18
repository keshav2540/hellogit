
/*Access Specifiers  [File: 04_access_specifiers.cpp]
- Public, Private, Protected( only child class use data but not dirct acess)
- Default access level in class(private) & struct(public)
- Example with restricted access
- Importance of protected in inheritance
💡 Suggestion: Make a class with private constructor (Singleton intro).*/

#include <iostream>
using namespace std;  
struct p{ int x,y;};
struct complexnum{
    int x,y;
};
class person{
   long long  int phoneNumber;
    protected:
    int rollNo=2490;
    public:
    string name;
    person(int phoneNumber,string name,int rollNo){ this->  rollNo=rollNo;
   this->  name=name;
 this-> phoneNumber=phoneNumber;
 this->  rollNo=rollNo;
    }
    person()
    {

    }
    void print(){ // work like a getter
        cout<<name<<" "<<phoneNumber<<" "<<rollNo<<" "<<phoneNumber<<endl;
    }
};
class student: public person {
public:
string section;
 student(int r,string n,string s){
//    phonenumber=phoneNumber noy acess its private properties
 section=s;
     rollNo=r;
     name=n;
}
  void print(){
        cout<<name<<" "<<section<<" "<<rollNo<<endl;
    }
};

int main() {
    person p1(1234567890,"me",9867);
    p1.print();
    // cout<<p1.phoneNumber;    restricted access
    student s1(24307,"keshav","A4");
    s1.print();
    s1.section;
    
    complexnum c1;
    c1.x=1;
    c1.y=2;
    cout<<c1.x<<" + i"<<c1.y<<endl;
return 0;
}

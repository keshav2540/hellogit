#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

class car{
    public:
    string name;
    string company;
    int height ;
    car(){ //Same class can have multiple constructors.
// Each constructor must have a different parameter list
// Compiler chooses the right constructor at compile time
        name="nano";
        company="tata";
        height=3;
    }
    car(string name,string company,int height){ // constructor over loading
     this->   name=name;
     this-> company=company ;
     this->  height=height;
    };
     car(string company,int height,string name){ 
     this->   name=name;
     this-> company=company ;
     this->  height=height;};
void printclass(){
        cout<< this->name <<" "<<this->company<<" "<<this->height<<endl;
    }
};
 int main(){
    car c1("nexion","TATA",5);
    car c2("tata",6,"nano");
    car c3=c2; // copy constructor
    c1.printclass();
    c2.printclass();
    c3.printclass();
 }


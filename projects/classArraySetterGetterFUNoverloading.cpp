#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
class car{
    string name;
    string company;
   public:  
    int height ;
    float seat;
    car(string name,string company,int height){
     this->   name=name;
     (*this).company=company ;
     this->  height=height;
     seat=9;
    }
    void printgetter(){    //it work like a getter
        cout<< this->name <<" "<<this->company<<" "<<this->height<<" "<<this->seat<<endl;
    }
    void setter(string nam){ //setter and we not need thisp ointer
        name=nam;
    }
    void setter(int h){ //its called fun overloading
        height=h;
    }
     void setter(float seat,int height,string name);
};
inline  void car::setter(float seat,int height,string name){
   this-> seat=seat;
 this->name=name;
   this->height=height;
 }

 
 void print(car c){
    cout<<c.height<<endl; // only we can access public member outside class 
 }
int main(){ car c1[3]={car("Nano", "Tata", 3),  car("Alto", "Maruti", 4), car("i20", "Hyundai", 5) };
      for(int i=0;i<3;i++) c1[i].printgetter();
    //   c1[1].name="honda"; it not work bacause its private we want use for this a setter
    // basicaly when we use setter and getter we can change value and print value of private member 
    c1[1].setter("honda");
    c1[1].setter(7);
    c1[1].setter(15,900,"keshav");
      for(int i=0;i<3;i++) c1[i].printgetter();
    return 0;
}
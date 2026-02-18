#include <bits/stdc++.h>
using namespace std;
class car{
    public:
    string name;
    string company;
    int height ;
    int seat;
    car(){
        name="nano";
        company="tata";
        height=3;
        seat=8;
    }
void print(){
    cout<<name<<" "<<company<<" "<<height<<" "<<seat<<endl;
}};

int main() {
    //static object (this is store in stack memory) auto delete 
    car c1;
    c1.name="nano";
    c1.height=6;
    //dynamic object(this is store in heap memory) delete karna jaruri ye
    car * c2=new car();
    return 0;
}
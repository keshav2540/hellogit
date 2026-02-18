/*cover in this->
- Features of OOPs (Encapsulation, Inheritance, Polymorphism, Abstraction)
- Why OOPs is needed
- Real-life case studies (Banking, Student system)
💡 Suggestion: Write a program comparing procedural vs OOP for student data.
enacapsulatio is the process to hiding data using acess specifier public,private and protected;
inheritace alloe reuse of  existing code by creteing a new class fromm old class we acess all public member of parent class->child class
polymorphism=same fun name but diffrent behaviour
compile time(fun overloading,oprator over loading)
runtime(fun over ridding using virtual)
abstraction is the process of hiding the internal implementation and show only essntial fun to the user pure virtual fun 

using namespace std;
class person{
     public:
    string name;
     virtual void changename(){
        name="karan";
    }
    virtual void display(){
        cout<<name<<endl;    }
};
class student : public person{
     string stuId;
    public:
      int rollNo;
     void changename(){
        name="kinya ram";
    }
        student(){
        name="keshav nagar";
        stuId="24EUCCS052";
        rollNo=24307;      
        }
      void display(){
        cout<<name<<" "<< stuId<<" "<<rollNo<<endl;    }
};

class techer : public person{
    public:
     int salary;
     string techerId;
      techer(int x,string y, string z){
        salary=x;
        techerId=y;
        name=z;}
        void display(){
        cout<<name<<" "<<salary<<" "<<techerId<<endl;    }
};

 int main() { //student s1;
    // s1.name="keshav";
    // s1.rollNo=24399;
    // s1.stuId="24EUCCS052";// NOT ACCESS PRIVATE MEMBER WE USE SETTER AND GETER FOR THIS
    // cout<<s1.name<<" "<<s1.rollNo<<endl;
    techer t1(250000,"manoj123","manoj sharma");
    t1.display();
    person*p;
    student s1;
    p=&s1;
      p-> display();
      p-> changename();
      p->display();
    return 0;
}

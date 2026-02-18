/*Day 8: Destructor  [File: 08_destructor.cpp]
used to clean resoures when object goes out of scope

- Syntax (~ClassName)
- When destructor is called=
 When object goes out of scope.
 When 'delete' is used on a pointer object.
 When program ends (for global/static objects).
- Destructor vs delete
Destructor: Cleans up resources inside the class.
- delete: Operator that destroys an object created with new 
     (internally calls destructor + frees memory).
- Order of constructor & destructor calls
 Constructors: Called top-down (base → derived).
- Destructors: Called bottom-up (derived → base).
💡 Practice: Create linked list node class with destructor freeing memory.
*/

#include <iostream>
using namespace std;
class demo{
    public:
    demo(){
        cout<<"iam constructor";
    }
    ~demo(){
        cout<<"iam distructor";
    }
};
class node{public:
    int data;
    node*next;
    node( int val){
        data=val;
        next=NULL;
    }
    ~node(){
        if(next!=NULL){
            delete next;
            next=NULL;
            cout<<"distroy ";
        }
    }
};

int main() {
    demo c;
    node*head=new node(10);
    head->next=new node(20);
    head->next->next=new node(20);
    cout<<endl<<" main is end "<<endl;
    delete head;
    return 0;
}

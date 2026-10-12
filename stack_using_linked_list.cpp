#include<iostream>
using namespace std;

class node{
    public:
        int data;
        node *next;

    node(int x){
        data =x;
        next=NULL;
    }
};

class stack{
    private:
        node *top;
    
    public:
        stack(){
            top=NULL;
        }

    int empty(){
        if(top==NULL){
            return(1);
        }
        else{
            return(0);
        }
    }

    void push(int x){
        node *p= new node(x);
        p->next=top;
        top=p;
    }

    int pop(){
        int x = top->data;
        node *p = top;
        top= top->next;
        delete p;
        return(x);
    }

    void display(){
        node*q=top;
        while(q!=NULL){
            cout<<endl<<q->data;
            q=q->next;
        }
    }

    int peek(){
        return(top->data);
    }
};

int main(){
    stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);


    cout<<"stack content after push operation"<<endl;
    s.display();
    


    if(s.empty()){
        cout<<"stack is empty "<<endl;
    }
    else{
        cout<<"\npopped out element is "<<s.pop()<<endl;
    }

    if(s.empty()){
        cout<<"stack is empty "<<endl;
    }
    else{
        cout<<"popped out element is "<<s.pop()<<endl;
    }

    if(s.empty()){
        cout<<"stack is empty "<<endl;
    }
    else{
        cout<<"popped out element is "<<s.pop()<<endl;
    }

    if(s.empty()){
        cout<<"stack is empty "<<endl;
    }
    else{
        cout<<"popped out element is "<<s.pop()<<endl;
    }

    if(s.empty()){
        cout<<"stack is empty "<<endl;
    }
    else{
        cout<<"popped out element is "<<s.pop()<<endl;
    }

    if(s.empty()){
    cout<<"stack is empty "<<endl;
    }
    else{
        cout<<"popped out element is "<<s.pop()<<endl;
    }

    cout<<"stack content after pop "<<endl;
    s.display();

    return(0);

}

/*

PS D:\tejasdamale> cd "d:\tejasdamale\" ; if ($?) { g++ stack_using_linked_list.cpp -o stack_using_linked_list } ; if ($?) { .\stack_using_linked_list }
stack content after push operation

50
40
30
20
10
popped out element is 50
popped out element is 40
popped out element is 30
popped out element is 20
popped out element is 10
stack is empty 
stack content after pop 
PS D:\tejasdamale> 

*/

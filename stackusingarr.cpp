#include<iostream>
using namespace std;

#define MAX 5

class stack{
    private:
        int a[MAX];
        int top;
    
    public:
        stack(){
            top=-1;
        }

        int full(){
            if(top==MAX-1){
                return(1);
            }
            else{
                return(0);
            }
        }

        int empty(){
            if(top==-1){
                return(1);
            }
            else{
                return(0);
            }
        }

        void push(int x){
            top++;
            a[top]=x;
        }

        int pop(){
            int x=a[top];
            top--;
            return(x);
        }

        int peek(){
            return(a[top]);
        }

        void display(){
            for(int i = top ; i>=0; i--){
                cout<<a[i]<<endl;
            }
        }
};

int main(){
    stack s;
    if(s.full()){
        cout<<"stack is full"<<endl;
    }
    else{
        s.push(10);

    }

    if(s.full()){
        cout<<"stack is full"<<endl;
    }
    else{
        s.push(20);

    }


    if(s.full()){
        cout<<"stack is full"<<endl;
    }
    else{
        s.push(30);

    }


    if(s.full()){
        cout<<"stack is full"<<endl;
    }
    else{
        s.push(40);

    }

    if(s.full()){
        cout<<"stack is full"<<endl;
    }
    else{
        s.push(50);

    }


    cout<<"stack content after push operation"<<endl;
    s.display();
    


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
PS D:\tejasdamale> cd "d:\tejasdamale\" ; if ($?) { g++ stackusingarr.cpp -o stackusingarr } ; if ($?) { .\stackusingarr }
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
stack content after pop 
PS D:\tejasdamale> 
*/
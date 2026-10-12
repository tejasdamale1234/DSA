#include<iostream>
using namespace std;

class node{
    public:
        int data;
        node *next;
    
    node(int x){
        data = x;
        next = NULL;
    }
};

class queue{
    private:
        node * front;
        node * rear;

    public:
        queue(){
            front=NULL;
            rear=NULL;
        }

    int empty(){
        if(front==NULL){
            return(1);
        }
        else{
            return(0);
        }
    }

    void enqueue(int x){
        node *p = new node(x);
        if(front==NULL){
            front=p;
            rear=p;
        }
        else{
            rear->next=p;
            rear=p;
        }
    }

    int dequeue(){
        int x= front->data;
        node * p = front;
        front = front->next;
        delete p;
        return(x);
    }

    int peek(){
        return(front->data);
    }
    void display(){
        node *q = front;
        while(q!=NULL){
            cout<<"\t"<<q->data;
            q=q->next;
        }
    }
};

int main(){
    queue q;

///enqueue operation

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);



    q.display();


    /* dequeue operation */

    cout<<endl;

    if(q.empty()){
        cout<<"queue is empty "<<endl;
    }
    else{
        cout<<"dequeue element is "<<q.dequeue()<<endl;
        q.display();
        cout<<endl;
    }


    if(q.empty()){
        cout<<"queue is empty "<<endl;
    }
    else{
        cout<<"dequeue element is "<<q.dequeue()<<endl;
        q.display();
        cout<<endl;
    }


    if(q.empty()){
        cout<<"queue is empty "<<endl;
    }
    else{
        cout<<"dequeue element is "<<q.dequeue()<<endl;
        q.display();
        cout<<endl;
    }


    if(q.empty()){
        cout<<"queue is empty "<<endl;
    }
    else{
        cout<<"dequeue element is "<<q.dequeue()<<endl;
        q.display();
        cout<<endl;
    }


    if(q.empty()){
        cout<<"queue is empty "<<endl;
    }
    else{
        cout<<"dequeue element is "<<q.dequeue()<<endl;
        
        cout<<endl;
    }    


    if(q.empty()){
        cout<<"queue is empty "<<endl;
    }
    else{
        cout<<"dequeue element is "<<q.dequeue()<<endl;
        
        cout<<endl;
    }


    
    return(0);

}


/*

PS D:\tejasdamale> cd "d:\tejasdamale\" ; if ($?) { g++ queue_using_linkedlist.cpp -o queue_using_linkedlist } ; if ($?) { .\queue_using_linkedlist }
        10      20      30      40      50
dequeue element is 10
        20      30      40      50
dequeue element is 20
        30      40      50
dequeue element is 30
        40      50
dequeue element is 40
        50
dequeue element is 50

queue is empty 
PS D:\tejasdamale> 

*/
#include<iostream>
using namespace std;

#define MAX 5
class queue{
    private:
        int a[MAX];
        int front;
        int rare;

    public:

        queue(){
            front =  -1 ;
            rare = -1 ;
        }

        int empty(){
            if(front == -1 && rare == -1){
                return(1);
            }
            else{
                return(0);
            }
        }

        int full(){
            if(rare==MAX-1){
                return(1);
            }
            else{
                return(0);
            }
        }

        void enqueue(int x){
            if(front==-1 && rare ==-1){
                front++;
                rare++;
            }
            else{
                rare++;
            }
            a[rare]=x;
        }

        int dequeue(){
            int x= a[front];

            if(front == rare){
                front=-1;
                rare=-1;
            }
            else{
                front++;
            }
            return(x);
        }

        int peek(){
            return(a[front]);
        }

        void display(){
            for(int i = front ; i<=rare; i++){
                cout<<a[i]<<"       ";
            }
        }

};

int main(){
    queue q;
    
    if(q.full()){
        cout<<"queue is full"<<endl;
    }
    else{
        q.enqueue(10);
    }

    if(q.full()){
        cout<<"queue is full"<<endl;
    }
    else{
        q.enqueue(20);
    }

    if(q.full()){
        cout<<"queue is full"<<endl;
    }
    else{
        q.enqueue(30);
    }  

    if(q.full()){
        cout<<"queue is full"<<endl;
    }
    else{
        q.enqueue(40);
    }

    if(q.full()){
        cout<<"queue is full"<<endl;
    }
    else{
        q.enqueue(50);
    }



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
PS D:\tejasdamale> cd "d:\tejasdamale\" ; if ($?) { g++ queueusingarr.cpp -o queueusingarr } ; if ($?) { .\queueusingarr }
10       20       30       40       50       
dequeue element is 10
20       30       40       50       
dequeue element is 20
30       40       50       
dequeue element is 30
40       50       
dequeue element is 40
50       
dequeue element is 50

queue is empty 
PS D:\tejasdamale> 
*/
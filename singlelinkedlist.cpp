#include<iostream>
using namespace std;

class node{
    public:
        int data;
        node *next;

        node(int x){
            data=x;
            next = NULL;

        }

};

class linkedlist{
    private:
        node *head;
    public:
            linkedlist(){
                head = NULL;
            }

            void insert(int x ){
                node *p = new node(x);
                if(head==NULL){
                    head=p;
                }else{
                    node *q = head;
                    while(q->next!=NULL){
                        q=q->next;
                    }
                    q->next=p;
                }
                }
            
            void display(){
                    node *q=head;

                    while(q!=NULL){
                        cout<<q->data<<"=>";
                        q=q->next;
                    }
            }
            void remove(int x){
                node *p=NULL;
                if(head->data==x){
                    p=head;
                    head= head ->next;
                    delete p;
                    return;
                }

                node *q=head;
                while(q->next!=NULL){
                    if(q->next->data==x){
                        p=q->next;
                        q->next=p->next;
                        delete p;
                        return;
                    }
                    q=q->next;
                }
                cout<<"data not found in list ";
            }
};

int main(){
linkedlist list;
list.insert(10);
list.insert(20);
list.insert(30);
list.insert(40);
list.display();
list.remove(30);
cout<<endl;
list.display();
return(0);
}


/*
> cd "d:\tejasdamale\" ; if ($?) { g++ singlelinkedlist.cpp -o singlelinkedlist } ; if ($?) { .\singlelinkedlist }
10=>20=>30=>40=>
10=>20=>40=>
PS D:\tejasdamale> 
*/
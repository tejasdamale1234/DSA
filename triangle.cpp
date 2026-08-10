#include<iostream>
using namespace std;
class triangle
{
    public:
    float height;
    float base;
    float calculatearea()
    {

        return(0.5*height*base);
    }
};
int main()
{
    triangle t1;
    t1.height=10;
    t1.base=20;
    cout<<"area of t1="<<t1.calculatearea()<<endl;

    triangle t2;
    t2.height=5;
    t2.base=10;
    cout<<"area of t2="<<t2.calculatearea();

return 0;
}

/*
output :-
PS D:\tejasdamale> cd "d:\tejasdamale\" ; if ($?) { g++ triangle.cpp -o triangle } ; if ($?) { .\triangle }
area of t1=100
area of t2=25
*/
#include<iostream>
using namespace std;
class rectangle
{
    public:
    float length;
    float breadth;
    float calculatearea()
    {

        return(length*breadth);
    }
};
int main()
{
    rectangle r1;
    r1.length=10;
    r1.breadth=20;
    cout<<"area of r1="<<r1.calculatearea();

    rectangle r2;
    r2.length=5;
    r2.breadth=10;
    cout<<"area of r2="<<r2.calculatearea();

return 0;
}

/*
output:-
PS D:\tejasdamale> cd "d:\tejasdamale\" ; if ($?) { g++ reactangle.cpp -o reactangle } ; if ($?) { .\reactangle }
area of r1=200area of r2=50
*/
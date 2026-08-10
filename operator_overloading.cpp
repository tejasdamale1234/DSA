#include<iostream>
using namespace std;
class complex{
    private:
    float real;
    float imag;

    public:
    complex()
    {
        real=0;
        imag=0;
    }
    complex(float r, float i)
    {
        real=r;
        imag=i;
    }
    
    void display(void)
    {
        cout<<real<<"+"<<imag<<"i"<<endl;

    }

    complex operator+(complex c){

        float r= real +c.real;
        float i = imag + c.imag;
        return complex(r,i);
    }

    complex operator-(complex c){

        float r= real-c.real;
        float i = imag-c.imag;
        return complex(r,i);
    }

    complex operator*(complex c){
        float r = real*c.imag;
        float i=imag*c.imag;
        return complex(r,i);
    }
};

int main(){
    complex c1(2.0,3.0);
    cout<<"complex no. is"<<endl;
    c1.display();

    complex c2(5.0,7.0);
    cout<<"complex no. is "<<endl;
    c2.display();

    complex c3(8.0,9.0);
    cout<<"complex no. is "<<endl;
    c3.display();


    complex sum=c1+c2;
    cout<<"sum is"<<endl;
    sum.display();

    complex sub = c2-c1;
    cout<<"sub is"<<endl;
    sub.display();

   complex multi = c1*c2;
   cout<<"multiplication is "<<endl;
   multi.display();




    return 0;
}

/*
PS D:\tejasdamale> cd "d:\tejasdamale\" ; if ($?) { g++ temp.cpp -o temp } ; if ($?) { .\temp }
complex no. is
2+3i
complex no. is 
5+7i
complex no. is 
8+9i
sum is
7+10i
sub is
3+4i
multiplication is 
14+21i
PS D:\tejasdamale> 

*/
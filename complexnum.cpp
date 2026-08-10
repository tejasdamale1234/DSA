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

    complex add(complex c){

        float r= real +c.real;
        float i = imag + c.imag;
        return complex(r,i);
    }

    complex sub(complex c){

        float r= real-c.real;
        float i = imag-c.imag;
        return complex(r,i);
    }

    complex multiplies(complex c){
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


    complex sum=c1.add(c2);
    cout<<"sum is"<<endl;
    sum.display();

    complex sum2 = sum.add(c3);
    cout<<"sum is"<<endl;
    sum2.display();

    complex sub = c2.sub(c1);
    cout<<"sub is"<<endl;
    sub.display();

    complex multiplies=c1.multiplies(c2);
    return 0;
}

/*
PS D:\tejasdamale> cd "d:\tejasdamale\" ; if ($?) { g++ complexnum.cpp -o complexnum } ; if ($?) { .\complexnum }
complex no. is
2+3i
complex no. is 
5+7i
complex no. is 
8+9i
sum is
7+10i
sum is
15+19i
sub is
3+4i
*/
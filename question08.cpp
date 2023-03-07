#include<iostream>
#include<cmath>
using namespace std;
class proof
{
public:
void setvalue(int a,int b)
{
this->a=a;
this->b=b;
}
protected:
int a;
int b;
};
class compute:public proof
{
int size;
public:
void check()
{
a=a*a;
b=b*b;
size=sqrt(a+b);


if(size*size==a+b)
{
    cout<<"triangle is possible "<<endl;
}
else
{
    cout<<"traingle is not possible"<<endl;
}
}
};
int main()
{
compute s1;
s1.setvalue(8,6);
s1.check();
    return 0;
}
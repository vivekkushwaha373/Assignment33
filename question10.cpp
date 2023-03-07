#include<iostream>
using namespace std;
class shape
{
protected:
double a,b;
public:
void get_data(double x,double y=0)
{
    a=x;
    b=y;
}
virtual void display_area()
{

} 
};
class square:public shape
{
public:
void display_area()
{
    cout<<"area of square is : "<<a*a<<endl;
}
};
class parallelogram: public shape
{
public:
void display_area()
{
    cout<<"area of parallelogram is: "<<a*b<<endl;
}
};
int main()
{
square c1;
parallelogram c2;
shape *v1;
v1=&c1;
v1->get_data(2);
v1->display_area();
v1=&c2;
v1->get_data(3,4);
v1->display_area();
    return 0;
}
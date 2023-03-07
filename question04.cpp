#include<iostream>
using namespace std;
class shape
{
public:
double x,y;
public:
get_data()
{
cin>>x>>y;
}
virtual void display_area()
{
    cout<<"Area is :";
}
};

class rectangle: public shape
{
public:
void display_area()
{
cout<<"Area of rectangle is : "<<x*y<<endl;
}
};

class triangle:public shape
{
public:
void display_area()
{
cout<<"Area of triangle is : "<<(x*y)/2.0<<endl;
}
};
int main()
{
    shape *s1,*s2;
    triangle c1;
    rectangle c2;
    s1=&c1;
    s2=&c2;
    cout<<"Enter the dimensions of triangle : ";
    s1->get_data();
    cout<<"Enter the dimensions of rectangle : ";
    s2->get_data();
    s1->display_area();
    s2->display_area();
    return 0;
}
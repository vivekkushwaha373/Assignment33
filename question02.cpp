#include<iostream>
#define pi 3.14
using namespace std;
class shape
{
public:
double x,y;
public:
get_data(int a,int b=0)
{
x=a;
y=b;
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
class circle: public shape
{
  public:
  void display_area()
  {
    cout<<"Area of circle is: "<<pi*x*x;
  }
};
int main()
{
    shape *s1,*s2,*s3;
    triangle c1;
    rectangle c2;
    circle C;
    s1=&c1;
    s2=&c2;
    s3=&C;
    int a,b;
    cout<<"Enter the dimensions of triangle : ";
    cin>>a>>b;
    s1->get_data(a,b);
    cout<<"Enter the dimensions of rectangle : ";
    cin>>a>>b;
    s2->get_data(a,b);
    cout<<"Enter the dimensions of circle: ";
    cin>>a;
    s3->get_data(a);
    s1->display_area();
    s2->display_area();
    s3->display_area();
    return 0;
}
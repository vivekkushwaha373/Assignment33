#include<iostream>
using namespace std;
class Volume
{
protected:
double a,b;
public:
void get_data(double x,double y=0)
{
    a=x;
    b=y;
}
virtual void display_volume()
{

} 
};
class cube:public Volume
{
public:
void display_volume()
{
    cout<<"volume of cube is: "<<a*a*a<<endl;
}
};
class sphere: public Volume
{
public:
void display_volume()
{
    cout<<"volume of sphere is: "<<(4*a*a*a*3.14)/3<<endl;
}
};
int main()
{
cube c1;
sphere c2;
Volume *v1;
v1=&c1;
v1->get_data(2);
v1->display_volume();
v1=&c2;
v1->get_data(3);
v1->display_volume();
    return 0;
}
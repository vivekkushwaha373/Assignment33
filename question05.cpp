#include<iostream>
using namespace std;

class Photon
{
protected:
double wavelength;
public:
void setdata(int n)
{
   wavelength=n;
}

};
class calculate_photon:public Photon
{
   public:
   void display()
   {
    cout<<"Photon Energy is : "<<19.8/wavelength<<"*10^-26 joule";
   }
};
int main()
{
 calculate_photon s1;
 int w;
 cout<<"Enter the wavelength: ";
 cin>>w;
 s1.setdata(4);
 s1.display();
    return 0;
}
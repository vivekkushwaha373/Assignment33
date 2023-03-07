#include<iostream>
using namespace std;
class Matrix
{
  protected:
  int a[3][3],b,c,d;
};
class calculate_determinant:public Matrix
{
    public:
    void get_data()
    {
      for(int i=0;i<3;i++)
      {
        for(int j=0;j<3;j++)
        {
         
         cin>>a[i][j];

        }
      }      
    }
    void determinent()
    {
      cout<<"Determinent is: ";
      cout<<a[0][0]*(a[1][1]*a[2][2]-a[1][2]*a[2][1])-a[0][1]*(a[1][0]*a[2][2]-a[1][2]*a[2][0])+a[0][2]*(a[1][0]*a[2][1]-a[1][1]*a[2][0]);
      
    }
};
int main()
{
calculate_determinant s1;
s1.get_data();
s1.determinent();
return 0;
}
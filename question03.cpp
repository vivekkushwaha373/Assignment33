#include<iostream>
using namespace std;
class student
{
char str[20];
int rollno;
int i=0;
public:
student(char*a,int b)
{
 rollno=b;
 for(i=0;a[i]!='\0';i++)
 {
    str[i]=a[i];
 }
 str[i]='\0';
}
void display()
{
    cout<<"name is: "<<str<<endl;
    cout<<"roll no is: "<<rollno<<endl;
}
friend void getdata(student*);
};
void getdata(student *S)
{

cout<<"Enter the name again: ";
cin>>S->str;
cout<<"Enter the roll no: ";
cin>>S->rollno;
}
int main()
{
    student c1("vivek",8),c2("rahul",9);
    c1.display();        
    c2.display();
    getdata(&c1);
    getdata(&c2);
    c1.display();        
    c2.display();
    return 0;
}
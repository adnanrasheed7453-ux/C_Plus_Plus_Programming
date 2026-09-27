#include<iostream>
using namespace std;
int main()
{
int marks;
cout<<"Enter your marks"<<endl;
cin>>marks;
if(marks>=85)
{
cout<<"A grade";
}
else if(marks>=80)
{
cout<<"A- grade";	
}
else if(marks>=75)
{
cout<<"B grade";
}
else if(marks>=70)
{
cout<<"B- grade";
}
else if(marks>=65)
{
cout<<"C grade";
}
else if(marks>=60)
{
cout<<"C- grade";
}
else if(marks>=55)
{
cout<<"D grade";
}
else if(marks>=50)
{
cout<<"D- grade";
}
else
{
cout<<"Fail";
}
return 0;
}

#include <iostream>
using namespace std;
int main()
{
	int basic_salary,over_time,Hourly_rate;
	cout<<"Enter basic salary";
	cin>>basic_salary;
	cout<<"Enter_over_time";
	cin>> over_time;
	cout<<"Enter_Hourly_rate";
	cin>>Hourly_rate;
	int total_hours;
	cin>>total_hours;
	over_time= (total_hours-240)*Hourly_rate;
	cout<<"Total salary is "<<over_time;
	
}


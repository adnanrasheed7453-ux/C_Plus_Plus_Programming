#include <iostream>
using namespace std;

int main() {
	int sal;
	float tex , total;
	cout<<"enter salary "<<endl;
	cin>>sal;
	if (sal >=50000){
		tex = sal * 20/100;
		cout<<"your salary after tex is : "<<sal - tex<<endl;
	}
	else if (sal <=30000){
		total = sal * 10/100;
		cout<<"your salary after tex is : "<<sal - total<<endl;
	}
	else if (sal <=10000){
		total = sal * 5/100 ;
		cout<<"your salary after tex is : "<<sal - total<<endl;
	}
	else {
		cout<<"no amount in tex"<<sal;
	}
}

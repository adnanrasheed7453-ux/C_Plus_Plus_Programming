#include <iostream>
using namespace std;

int main(){
    int roll;
    cin>>roll;
    int first=roll;
    while(first>=10){
        first=first/10;
    }
    int last=roll%10;
    for(int i=1;i<=first;i++){
        for(int j=1;j<=last;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}

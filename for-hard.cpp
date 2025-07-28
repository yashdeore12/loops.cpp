#include<iostream>
using namespace std;
int main(){

int sum=0;
int n;
cin>>n;

for(;n>0;n=n/10){
    sum=sum+(n%10);
}

cout<<"sum is equal to "<<sum<<endl;







}

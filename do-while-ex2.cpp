#include<iostream>
using namespace std;
int main(){
int number;
int a;
int b;
 do{
cout<<endl<<"*********************************"<<endl;
cout<<"1. addition"<<endl;
cout<<"2.subtraction"<<endl;
cout<<"3. division"<<endl;
cout<<"4. multiplication"<<endl;
cout<<"other: type any other number to exit program"<<endl;
cout<<"enter your choice   ";
cin>>number;
cout<<"enter two number seperated by space : ";
cin>>a>>b;
switch (number)
{
case 1:
cout<<"addition is "<<a+b;

  
  break;
  case 2:
  cout<<"subtration is "<<a-b;
  break;
  case 3:
  cout<<"division is "<<a/b;
  break;
  case 4:
  cout<<"multiplication is "<<a*b;


default:
 cout<<"succesfully exited program";
  break;
}

}


 
while(number<5 && number>0);
}

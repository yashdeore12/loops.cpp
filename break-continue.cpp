#include<iostream>
using namespace std;
int main(){

int i=0;

while(i<5){

cout<<"meow"<<endl;
i++;
if(i==3){break;}   //this is used to end the loop before it reaches the termination condition 
//break is only used in loop and switch case statement 
}
int m=0;


while(1){


  cout<<"infinite loop"<<endl;
  m++;
  if(m==10){
    break;  //here it is used to break the infinte loop 
  }

}


// continue statement 
for(int p=1;p<=10;p++){

  if(p==7){continue;}
//it will skip 7. not go below line and return again to first line 
cout<<p<<endl;
}











}

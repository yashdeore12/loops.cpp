#include<iostream>
using namespace std;
int main(){
//ojective- 1. skip -1 and stop at -99

  int data[]={1,10,-1,5,6,-1,7,-99,8,10};

  for(auto n: data){//used to auto detect type of data type , and : is used in ranged based loop
  

    if(n==-99){break;}
    if(n==-1){continue;}
    cout<<n<<endl;
    

  }










}




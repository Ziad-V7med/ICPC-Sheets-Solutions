#include <iostream>
using namespace std; 

int main(){
 int x,y; cin>>x>>y;
 int a,b; 
 if(x>y){
   a=x; b=y;
 }
 else{
   a=y; b=x; 
 }

 if(b+3>a){
   cout<<"Yes"<<endl;
 }
 else{
   cout<<"No"<<endl; 
 }
    return 0; 

}


 

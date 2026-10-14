#include <iostream>
using namespace std; 

int main(){
 int a,b,c; cin>>a>>b>>c; 
 int x,y,z; 
    if(a>=b && a>=c){
      z=a;
      if(b>=c){
         y=b; x=c; 
      } 
      else {
         y=c; x=b; 
      }
    } 

    else if (b>=a && b>=c)
    {
      z=b;
      if(a>=c){
         y=a; x=c; 
      }
      else{
         y=c; x=a; 
      } 
    }

    else if (c>=a && c>=b)
    {
      z=c; 
      if(a>=b){
         y=a; x=b; 
      }
      else{
         y=b; x=a; 
      } 
   }

   cout<<z+y<<endl;  
    return 0; 

}


 
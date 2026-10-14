#include <iostream>
using namespace std; 

int main(){
   int a,b; cin>>a>>b; 
  char op; cin>>op; 
  if (op=='+')
  {
    cout<<a+b<<endl; 
  }
  if(op=='-'){
    cout<<a-b<<endl; 
  }
  if (op=='*')
  {
    cout<<a*b<<endl;
  }
  if (op=='/'){
    cout<<a/b<<endl; 
  }
  
  
   
    return 0; 
    
}

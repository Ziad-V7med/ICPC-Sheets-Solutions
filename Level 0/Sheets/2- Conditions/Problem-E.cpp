#include <iostream>
using namespace std; 

int main(){
 char x; cin>>x;
 if (x>=65 && x<=90){
  cout<<"capital "<<(int)x -65<<endl; 
 }
 else if (x>=97 && x<=122){
  cout<<"small "<<(int)x -97<<endl; 
 }
 else if(x>=48 && x<=57){
    cout<<"digit "<<endl; 
 }
 else {
      cout<<"symbol "<<endl;
 }
   
    return 0; 
    
}



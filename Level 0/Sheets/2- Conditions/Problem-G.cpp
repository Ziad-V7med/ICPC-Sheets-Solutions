#include <iostream>
using namespace std; 

int main(){
   int n; cin>>n;
   if(n/10 <1){
      cout<<"000"<<n<<endl; 
   }
   else if(n/10<10 && n/10){
      cout<<"00"<<n<<endl; 
   }
   else if(n/100<10 && n/100>=1){
      cout<<"0"<<n<<endl; 
   }
   else {
      cout<<n<<endl; 
   }
    return 0; 

}


 
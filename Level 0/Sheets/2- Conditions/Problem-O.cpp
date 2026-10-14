#include<iostream>
using namespace std; 

int main(){
    int a,b,c; cin>>a>>b>>c;
    int min=0; 
    if(b<c){
        min=b;
    }
    else{
        min=c; 
    }
    
    if(a>min){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl; 
    }
    
    return 0; 
}
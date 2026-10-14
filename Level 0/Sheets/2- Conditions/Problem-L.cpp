#include <iostream>
using namespace std; 

int main(){
 int a,b,c;
 cin>>a>>b>>c;
 if(a+b<=c || a+c<=b || b+c<=a){
    cout<<"Invalid"<<endl; 
    return 0; 
}
else if(a==b && b==c){
    cout<<"Equilateral"<<endl; 
    return 0; 
}
else if(a==b || a==c || b==c){
    cout<<"Isosceles"<<endl; 
    return 0; 
}
 else{
    cout<<"Scalene"<<endl; 
 }
    return 0; 

}


 



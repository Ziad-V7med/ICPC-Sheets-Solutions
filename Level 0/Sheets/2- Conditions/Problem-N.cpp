#include <iostream>
using namespace std;

int main() {
    int n,a,b,c;
    cin>>n>>a>>b>>c;

    int mx=-1;
    char ans='-';

    if(a<n&&a>mx) {
        mx=a;
        ans='A';
    }

    if(b<n&&b>mx) {
        mx=b;
        ans='B';
    }

    if(c<n&&c>mx) {
        mx=c;
        ans='C';
    }

    if(mx==-1)
        cout<<-1;
    else
        cout<<ans<<endl; 

    return 0;
}
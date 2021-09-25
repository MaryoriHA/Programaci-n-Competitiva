#include <iostream>
using namespace std;
int main(){
    int n =0;
    cin>>n;
    for(int i=0; i<n; i++){
        int a,b;
        cin>>a>>b;
        int r,r2;
        r=a/3;
        r2=b/3;
        cout<<r*r2<<"\n";
 
    } 
    return 0;
}
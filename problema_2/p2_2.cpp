#include<iostream>
using namespace std;
int main(){
    int n,t,v;
    cin>>v;
    for(int i=0;i<v;i++){
        cin>>n;
        t=(((((n*567)/9)+7492)*235)/47)-498;
        int n=t%100;
        cout<<abs(n/10)<<"\n";
    
    }
    return 0;
}
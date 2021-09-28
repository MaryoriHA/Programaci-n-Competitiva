#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    for(int a=1;a<=t; a++){
        int n;
        int mille=0,juice=0;
        cin>>n;
        int num;
        while(n--){
            cin>>num;
            mille+= (num/30)*10+10;
            juice+= (num/60)*15+15;
        }
        if(mille==juice){
            cout<<"Case "<<a<<": "<<"Mile Juice "<<juice<<"\n";
        }
        if(mille<juice){
            cout<<"Case "<<a<<": "<<"Mile "<<mille<<"\n";
        }
        if(mille>juice) 
            cout<<"Case "<<a<<": "<<"Juice "<<juice<<"\n";
    }
    return 0;
}
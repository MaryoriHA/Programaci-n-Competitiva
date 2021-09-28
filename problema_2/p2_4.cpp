#include <iostream>
using namespace std;
int seRepite(string pal){
    int sum = 0;
    int sum2=0;
    for(int j=0; j<pal.length(); j++){
            if(pal[j]=='O'){
              sum2++;
              sum+=sum2;
              }
            else{
                sum2=0;}
    }
    return sum;
}
int main(){
    string l;
    int n;
    cin>>n;
    while(n>0){
        cin>>l;
        cout<<seRepite(l)<<"\n";
        n--;
    }
    return 0;
}
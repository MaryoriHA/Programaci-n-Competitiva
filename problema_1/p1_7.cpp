#include <iostream>
using namespace std;
int main(){
    int in;
    cin>>in;
    int init=0;
    while(in>0 && in<1001){
       int l1,l2,c1,c2;
       cin>>l1>>l2;
       for(int i=0;i<in;i++){
           cin>>c1>>c2;
           if(c1==l1||c2==l2){
               cout<<"divisa"<<"\n";
           }
           else if(c1<l1){
               if(c2<l2){
                   cout<<"SO"<<"\n";
               }
               else 
               cout<<"NO"<<"\n";
           }
           else{
               if(c2<l2){
                   cout<<"SE"<<"\n";
               }
               else 
               cout<<"NE"<<"\n";
           }
       }
       cin>>in;
    }
    return 0;
}
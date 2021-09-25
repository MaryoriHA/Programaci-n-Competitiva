#include <iostream>
using namespace std;
int main(){
    string texto;
    int init=0;
    while(getline(std::cin, texto)){
    for(int i=0; i<texto.size(); i++){
        if(texto[i]==34 && init==0){
               cout<<"``";
               init=1;
        }
       else if(texto[i]==34 && init==1){
               cout<<"''";
               init=0;
        }
        else cout<<texto[i];
    }
    
    cout<<"\n";
    }
    return 0;
}
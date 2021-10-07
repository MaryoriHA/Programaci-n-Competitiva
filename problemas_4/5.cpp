#include <iostream>
#include <vector>

using namespace std;
int main() {
    int T,m,a,Q,a_,b_;
    vector<int> cad;
    string entrada;
    string aux;
    char c;
    cin>>T;
    for(int r = 0; r < T; r++){
        cad.clear();
        int p=0;
        cin>>m;
        for(int i =0; i<m; i++){
            cin>>a;
            cin>>aux;
            for(int j = 0; j < a; j++){
                entrada+=aux;
            }
        }
        
        for(int i = 0; i < entrada.size(); i++){
              string numero = entrada.substr(i,1);
              cad.push_back(atoi(numero.c_str()));
        }
        cin>>Q;
        for(int x = 0; x <Q; x++){
            cin>>c>>a_>>b_;
            if(c=='F'){
               for(int j=a_;j<=b_;j++){
                   cad[j]=1;
               }
            }
            else if(c=='E'){
                for(int j=a_;j<=b_;j++){
                   cad[j]=0;
               }
            }
            else if(c=='I'){
               for(int j=a_;j<=b_;j++){
                  if(cad[j]==1)
                     cad[j]=0;
                  else cad[j]=1;
               }
            }
            else if(c=='S'){
                p++;
                if(p==1)cout<<"Case "<<r+1<<":\n";
                int bucaneros=0;
                
               for(int j=a_;j<=b_;j++){
                  if(cad[j]==1)
                    bucaneros++;
               }
               cout<<"Q"<<p<<": "<<bucaneros<<"\n";
            }
        }
    
    }
    return 0;
}
#include <iostream>
using namespace std;

int main(){
    int m,n,num=1;
    char c;
    cin>>m>>n;
    while(m!=0&&n!=0){
    int matriz[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>c;
            if(c== '*'){
                matriz[i][j]=-100;
            }
            if(c== '.'){
                matriz[i][j]=0;
            }
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(matriz[i][j]<0&& i==0){
                     matriz[i+1][j]++;
                if( j==0){
                     matriz[i][j+1]++;
                     matriz[i+1][j+1]++;
                }
                else if( j==n-1){
                     matriz[i][j-1]++;
                     matriz[i+1][j-1]++;
                }
                else{
                     matriz[i][j-1]++;
                     matriz[i][j+1]++;
                     matriz[i+1][j-1]++;
                     matriz[i+1][j+1]++;
                }
            }
            else if(matriz[i][j]<0&& i==m-1){
                matriz[i-1][j]++;
                if(j==0){
                     matriz[i][j+1]++;
                     matriz[i-1][j+1]++;
                }
                else if( j==n-1){
                     matriz[i][j-1]++;
                     matriz[i-1][j-1]++;
                }
                else{
                     matriz[i][j-1]++;
                     matriz[i][j+1]++;
                     matriz[i-1][j-1]++;
                     matriz[i-1][j+1]++;
                }
            }
            
            else if(matriz[i][j]<0&& j==0 && i!=0 && i != m-1){
                matriz[i+1][j]++;
                     matriz[i-1][j]++;
                     matriz[i][j+1]++;
                     matriz[i+1][j+1]++;
                     matriz[i-1][j+1]++;
            }
            else if(matriz[i][j]<0&& j==n-1 && i!=0 && i != m-1){
                matriz[i+1][j]++;
                     matriz[i-1][j]++;
                     matriz[i][j-1]++;
                     matriz[i+1][j-1]++;
                     matriz[i-1][j-1]++;
            }
            else if(matriz[i][j]<0){
                    matriz[i+1][j]++;
                     matriz[i-1][j]++;
                     matriz[i][j-1]++;
                     matriz[i+1][j-1]++;
                     matriz[i-1][j-1]++;
                     matriz[i][j+1]++;
                     matriz[i+1][j+1]++;
                     matriz[i-1][j+1]++;
            }
        }
    }
    
        cout<<"Field #"<<num<<": \n";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(matriz[i][j]<0)
               cout<<"* ";
            else
               cout<< matriz[i][j];
        }
        cout<< endl;
    }
    cin>>m>>n;
    num++;
    }
    return 0;
}

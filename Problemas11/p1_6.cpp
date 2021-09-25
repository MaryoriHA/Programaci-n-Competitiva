#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int t,nS,mx,mn,num;
    cin>>t;
    for(int i=0;i<t;i++)
    {  mn=99;mx=0;
        cin>>nS;
        for(int j=0;j<nS;j++){
            cin>>num;
            
            if (num < mn)
                mn = num;
            if (num > mx)
                mx = num;
        }
        cout<<(mx-mn)*2<<"\n";
    }
}
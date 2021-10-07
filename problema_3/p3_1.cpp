#include<iostream>
using namespace std;

#define MAX        30001

using namespace std;

int parent[MAX];
int ranks[MAX];


void init(int n)
{
    for(int i = 0; i < n; i++)
    {
        parent[i] = i;
        ranks[i] = 1;
    }
}

int find(int x)
{
    if(x != parent[x])
        parent[x] = find(parent[x]);
    return parent[x];
}

void set_union(int x, int y)
{
    int rx = find(x);
    int ry = find(y);
    if(rx == ry) 
        return;
    if(ranks[rx] > ranks[ry])
    {
        ranks[rx] += ranks[ry];
        parent[ry] = rx;
    }
    else
    {
        ranks[ry] += ranks[rx];
        parent[rx] = ry;
    }
}

int main(){
    int n,m,v;
    int a,b;
    cin>>v;
    for(int i=0;i<v;i++){
        cin>>n>>m;
        init(n);
        for(int j=0;j<m;j++){
           cin>>a>>b;
           set_union(a,b);
        }  
        int max=0;
        for(int j=0;j<n;j++){
           if(max<ranks[j])
              max=ranks[j];
        } 
        cout<<max<<"\n";
    }
    
    return 0;
}
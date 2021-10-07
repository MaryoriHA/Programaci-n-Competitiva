#include <iostream>
#include <cstdio>

#define MAX        30002

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
int main() {
    int n,m,s,v,e;
    int zeroParent, tot;
    
    while(cin>>n>>m) {
        tot = 0;
        if(!n&!m) break;
        init(n);
        for(int i=0;i<m;i++){
            cin >> s;
            for(int j=1;j<=s; j++){
               cin>>v;
               if(j==1)
                   e = v;
               else
                  set_union(e, v); 
            }
        }
        zeroParent =  find(0);
        for(int j=0; j<n; j++)
            if(find(j) == zeroParent)
               tot++;
        cout<<tot<<"\n";
    }
    return 0;
}
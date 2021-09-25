#include<iostream>
using namespace std;
int main()
{
    int p,p1,p2,p3;
 
    while(cin>>p>>p1>>p2>>p3)
    {  int sum;
        if (p == 0 && p1 == 0 && p2 == 0 && p3 == 0)
            return 0;
        sum = 720;
        if (p > p1)
            sum += (p - p1) * 9;
        else
            sum += (p + 40 - p1) * 9;
        sum += 360;
        if (p1 > p2)
            sum += (p2 + 40 - p1) * 9;
        else
            sum += (p2 - p1) * 9;
        if (p2 > p3)
            sum += (p2 - p3) * 9;
        else
            sum += (p2 + 40 - p3) * 9;
        cout<<sum<<"\n";
    }
 
}
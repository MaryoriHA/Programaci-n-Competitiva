#include <iostream>
using namespace std;
int main()
{
    int n,sum,s;
    while(cin>>n)
    {
        if(n==0)
           break;
        if (n<10)
        cout<<n<<"\n";
        else
        {
           while(n>9)
           {
                sum=0;
                while(n!=0)
                {
                    sum+=(n%10);
                    n/=10;
                }
                n=sum;
           }
           cout<<n<<"\n";
        }
    }
    return 0;
}
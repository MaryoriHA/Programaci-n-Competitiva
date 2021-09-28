#include <iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	char l;
	int m, n;
	int r = 0;
	for(int i = 0; i < t; ++i){
        cin>>l>>m>>n;
		r = 0;
		if(l == 'r'){
			r = min(m, n);
		}
		else if(l == 'Q'){
			r = min(m, n);
		}
		else if(l == 'k'){
			r = (((m + 1)/2) * ((n + 1)/2)) + (((m)/2) * ((n)/2));
		}
		else if(l == 'K'){
			r = (((m + 1)/2) * ((n + 1)/2));
		}
        cout<<r<<"\n";
	}
}
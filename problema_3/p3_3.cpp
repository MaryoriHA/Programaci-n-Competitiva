#include <bits/stdc++.h>
using namespace std;
int main( ){
     stack<char> term;
     string input;
     int n;
     cin>>n;
     
     for( int j=0; j<n; j++ ){
         bool fail=false;
         cin>>input;
         for( int i=0; i<input.length(); i++ ){
           if( input[i]=='('||input[i]=='['){
                term.push(input[i]);
                }
           if( input[i]==')'||input[i]==']'){
                if(term.empty()){
                     fail=true;
                      break;
                }
                char ch=term.top();
                term.pop();
               if(ch == '(' && input[i] != ')'){
                    fail=true;
                    break;
                }
                else if(ch == '[' && input[i] != ']'){
                    fail=true;
                    break;
                }
          }
         }
         if(!term.empty()){
              fail=true;
         }
         if(fail==false) 
           cout<<"Yes \n";
         else cout<<"No \n";
     }
    return 0;
}
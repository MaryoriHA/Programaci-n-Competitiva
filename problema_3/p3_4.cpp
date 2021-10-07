#include <iostream>
#include <vector>
using namespace std;
int main(){
    string input;
    while(cin>>input){
        vector<char> output;
        int len = input.size();
        for (int i = len - 1; i >= 0; --i)
          if (input[i] == '[')
            for (int j = i + 1; input[j] != ']' && input[j] != '[' && j < len; ++j)
              output.push_back(input[j]);
        for (int i = 0; input[i] != '[' && input[i] != ']' && i < len; ++i)
         output.push_back(input[i]);
        for (int i = 0; i < len; ++i)
          if (input[i] == ']')
            for (i = i + 1; input[i] != '[' && i < len; ++i)
              if (input[i] != ']') 
               output.push_back(input[i]);
        for(int j=0;j<output.size();j++){
            cout<<output[j];
        }
        cout<<"\n";
    }

    return 0;
}
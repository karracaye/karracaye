#include <bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin>>str;
    for(int i = 0; i < str.length()-1; i++){
        if(str[i]!=str[i+1]){
            cout<<str[i];
        } else {
            continue;
        }
    }
    cout<<str[str.length()-1];
    

}

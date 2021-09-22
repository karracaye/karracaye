#include <bits/stdc++.h>
using namespace std;
int main(){
    //char letter = 'a';
    string new_let[] = {"@","8","(","|)","3","#","6","[-]","|","_|","|<","1","[]\\/[]",
                     "[]\\[]","0","|D","(,)","|Z","$","']['","|_|","\\/","\\/\\/","}{",
                     "`/","2"};
    string str;
    char x;
    getline(cin,str,'\n');
    int len = str.length();
        for(int i=0;i<len;i++){
            x = str[i];
            x = toupper(x);
            if(x>=65 && x<=90) cout<<new_let[x-65];
            else cout<<x;
        }
    
}

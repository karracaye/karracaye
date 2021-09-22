#include <bits/stdc++.h>
using namespace std;
int main(){
    double tc, sum=0,score;
    int count=0;
    cin>>tc;
    for(int i=1;i<=tc;i++){
        cin>>score;
        if(score < 0 || score > 4) continue;
        else {
            count++;
            sum+=score;
        }
    }
    double total = sum/count;
    cout<<total;
}

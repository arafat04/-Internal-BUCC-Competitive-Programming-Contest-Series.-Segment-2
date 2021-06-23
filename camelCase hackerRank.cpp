#include<bits/stdc++.h>
using namespace std;

int main(){
    //CamelCase HackerRank
    string s;
    cin>>s;
    int count=0;
    for(int i=0;i<s.length();i++){
        if((int)s[i]>=65&&(int)s[i]<=90){
            count++;
        }
        
    }
    cout<<count+1<<"\n";

    return 0;
}

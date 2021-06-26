#include<bits/stdc++.h>
using namespace std;

int main(){

    int T,l,h,w;
    cin>>T;
    for(int i=0;i<T;i++){

        cin>>l>>h>>w;
        if((l<=20)&&(h<=20)&&(w<=20)){
            cout<<"Case "<<i+1<<": good\n";
        }
        else{
            cout<<"Case "<<i+1<<": bad\n";
        }
    }
    return 0;
}

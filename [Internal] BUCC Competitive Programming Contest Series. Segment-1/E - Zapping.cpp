#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    while(cin>>a>>b){
        if(a==-1&&b==-1){
            break;
        }
        int first_button = abs(b-a);
        int second_button= abs(a-b);
        second_button=100 - second_button;
        if(first_button<second_button) cout<<first_button<<"\n";
        else cout<<second_button<<"\n";
    }
    return 0;
}

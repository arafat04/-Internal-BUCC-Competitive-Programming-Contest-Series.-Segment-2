#include<bits/stdc++.h>
using namespace std;

int main(){
    //11727 - Cost Cutting online judge
    int t,a,b,c,big=0;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>a>>b>>c;
        if(a>b){
            if(a>c){
                big = a;
            }
            else{
                big=c;
            }
        }
        else{
            if(b>c){
                big = b;
            }
            else{
                big=c;
            }
        }
        if(big == a){
            if(b>c){
                cout<<"Case "<<i+1<<": "<<b<<"\n";
            }
            else{
                cout<<"Case "<<i+1<<": "<<c<<"\n";
            }
        }
        else if(big == b){
            if(a>c){
                cout<<"Case "<<i+1<<": "<<a<<"\n";
            }
            else{
                cout<<"Case "<<i+1<<": "<<c<<"\n";
            }
        }
          else if(big == c){
            if(a>b){
                cout<<"Case "<<i+1<<": "<<a<<"\n";
            }
            else{
                cout<<"Case "<<i+1<<": "<<b<<"\n";
            }
        }
        big=0;
    }
    return 0;
}

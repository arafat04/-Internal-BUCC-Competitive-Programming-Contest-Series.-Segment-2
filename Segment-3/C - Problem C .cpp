#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int N,sum=0;
    cin>>N;
    if(N>0){
        sum=(N*(N+1))/2;
    }
    else if(N<=0){
        sum=(N*(N-1))/2*(-1);
        sum+=1;
    }
    cout<<sum<<"\n";
    return 0;
}

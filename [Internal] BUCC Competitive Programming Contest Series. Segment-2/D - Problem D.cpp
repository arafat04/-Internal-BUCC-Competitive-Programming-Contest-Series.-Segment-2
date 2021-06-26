#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    string a,b;
    cin>>N;
    for(int i=0;i<N;i++){

        cin>>a>>b;
        vector<long long> avector;
        vector<long long> bvector;
        for(int i=0;i<a.length();i++){

            avector.push_back(a[i]-'0');
        }
        for(int j=0;j<b.length();j++){

            bvector.push_back(b[j]-'0');
        }
        vector<long long> ans;
        long long carry=0;
        long long len = min(avector.size(),bvector.size());
        for(int k=0;k<len;k++){

            long long value = avector[k] + bvector[k]+carry;
            carry = value/10;
            ans.push_back(value%10);

        }
        if(avector.size()>len){
            for(int k=len;k<avector.size();k++){

            long long value = avector[k] + carry;
            carry = value/10;
            ans.push_back(value%10);

        }
        }
        if(bvector.size()>len){
            for(int k=len;k<bvector.size();k++){

            long long value = bvector[k] + carry;
            carry = value/10;
            ans.push_back(value%10);

            }
        }
        while(carry){
            ans.push_back(carry%10);
            carry/=10;
        }
        long long count=0;
        for(int i : ans){
            if(i!=0) count=1;
            if(count==0) continue;
            if(count!=0)cout<<i;
        }
        cout<<"\n";
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string a,b;
    cin>>n;
    for(int i=0;i<n;i++){

        cin>>a>>b;
        vector<long long> avec;
        vector<long long> bvec;
        for(int i=0;i<a.length();i++){

            avec.push_back(a[i]-'0');
        }
        for(int j=0;j<b.length();j++){

            bvec.push_back(b[j]-'0');
        }
        vector<long long> ans;
        long long carry=0;
        long long len = min(avec.size(),bvec.size());
        for(int k=0;k<len;k++){

            long long value = avec[k] + bvec[k]+carry;
            carry = value/10;
            ans.push_back(value%10);

        }
        if(avec.size()>len){
            for(int k=len;k<avec.size();k++){

            long long value = avec[k] + carry;
            carry = value/10;
            ans.push_back(value%10);

        }
        }
        if(bvec.size()>len){
            for(int k=len;k<bvec.size();k++){

            long long value = bvec[k] + carry;
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

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

vector<ll> add(vector<ll> s, vector<ll> d) {

    reverse(s.begin(),s.end());
    reverse(d.begin(),d.end());

    ll len = min(s.size(),d.size());
    vector<ll> ans;
    ll carry = 0;

    for(int i=0; i<len; i++) {

        ll value = s[i] + d[i] + carry;
        carry = value/10;
        ans.push_back(value%10);

    }

    if(s.size()>len) {

        for(int i=len; i<s.size(); i++) {

            ll value = s[i] + carry;
            carry = value/10;
            ans.push_back(value%10);

        }
    }

    if(d.size()>len) {

        for(int i=len; i<d.size(); i++) {

            ll value = d[i] + carry;
            carry = value/10;
            ans.push_back(value%10);

        }
    }

    //In the case both a and b same,then there will be a carry left.
    while(carry) {
        ans.push_back(carry%10);
        carry = carry/10;

    }

    // reversing the ans vector
    reverse(ans.begin(),ans.end());
    return ans;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin>>t;
    while(t--) {

        string a, b;
        cin>>a>>b;

        vector<ll> vector_for_a;
        vector<ll> vector_for_b;

        for(int i=0; i<a.length(); i++) {
            vector_for_a.push_back(a[i] - '0');
        }
        for(int i=0; i<b.length(); i++) {
            vector_for_b.push_back(b[i] - '0');
        }

        vector<ll> sum = add(vector_for_a,vector_for_b);

        for(int i=0; i<sum.size(); i++) {
            cout<<sum[i];
        }
        cout<<"\n";
    }
    return 0;
}

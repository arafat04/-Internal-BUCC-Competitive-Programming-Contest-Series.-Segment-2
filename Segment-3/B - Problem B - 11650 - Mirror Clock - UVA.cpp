#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>>t;
    string s;

    while(t--) {
        cin>>s;

        int hour,minute;

        hour=10*(s[0]-'0');
        hour+=s[1]-'0';
        minute = 10*(s[3]-'0');
        minute += s[4]-'0';

        if(minute==0) {

            hour=12-hour;
            if(hour==0) hour=12;

        } else {

            hour=12-1-hour;
            minute= 60-minute;
            if(hour<0)hour=12+hour;
            if(hour==0) hour=12;

        }
        if(minute==0) {

            if(hour<10)cout<<"0"<<hour<<":00"<<"\n";
            else cout<<hour<<":00"<<"\n";

        } else {

            if(hour<10)cout<<"0"<<hour<<":";
            else cout<<hour<<":";
            if(minute<10)cout<<"0"<<minute<<"\n";
            else cout<<minute<<"\n";
        }
    }

    return 0;
}

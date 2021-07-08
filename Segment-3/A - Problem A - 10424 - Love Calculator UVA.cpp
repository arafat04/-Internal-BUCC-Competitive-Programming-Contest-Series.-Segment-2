#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int getSum(string s) {

    int sum=0;
    for(int i=0; i<s.length(); i++) {

        if(toupper(s[i])>=65&&toupper(s[i])<=90) {

            sum+= toupper(s[i]) -64;

        }
    }
    return sum;
}

int addDigitsOfSum(int d) {

    int addDigit =0;
    while(d!=0) {

        addDigit+= d%10;
        d/=10;

    }
    if(addDigit>9) {
        int d=addDigit;
        addDigit=0;

        while(d!=0) {
            addDigit+=d%10;
            d/=10;

        }
    }
    return addDigit;

}

int main() {
    //ctrl x is eof
    string a,b;

    while(getline(cin,a)) {
        getline(cin,b);

        int sum_a=0,sum_b=0,add_digit_sum_a=0,add_digit_sum_b=0;

        sum_a = getSum(a);
        sum_b = getSum(b);

        add_digit_sum_a = addDigitsOfSum(sum_a);
        add_digit_sum_b = addDigitsOfSum(sum_b);

        if(add_digit_sum_a>add_digit_sum_b) cout<<fixed<<setprecision(2)<<float(add_digit_sum_b*100)/float(add_digit_sum_a)<<" %\n";
        else cout<<fixed<<setprecision(2)<<float(add_digit_sum_a*100)/float(add_digit_sum_b)<<" %\n";
    }
    return 0;
}

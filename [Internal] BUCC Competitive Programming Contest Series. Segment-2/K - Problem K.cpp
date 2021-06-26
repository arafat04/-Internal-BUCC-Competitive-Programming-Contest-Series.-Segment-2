#include<bits/stdc++.h>
using namespace std;

int main(){
    //Pangrams HackerRank
    string s;
    getline(cin,s);

    vector<int> vec;
    int count=0;

    for(int i=0;i<s.length();i++){
        int checker=0;
        char upper = toupper(s[i]);
        for(char c : vec){
            if(c==upper-'0'){
                checker=1;
                break;
            }
            else{
                checker=0;

            }
        }
        if(checker==0&&s[i]!=' ') {
          count++;
          vec.push_back(upper-'0');
        }

    }

    if(count==26)cout<<"pangram\n";
    else cout<<"not pangram\n";
    return 0;
}

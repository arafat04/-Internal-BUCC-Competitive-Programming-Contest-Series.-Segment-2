#include<bits/stdc++.h>

using namespace std;

int main(){

    string s;
    cin>>s;
    int* arr = new int[s.size()];
    int n = s.size()-1, i=0, x=s.size();
    while(x!=i){
        arr[i]=s[n]-'0';
        i++;
        n--;
    }
    for(int i=0;i<sizeof(arr);i++){
        cout<<arr[i];
    }
    return 0;

}

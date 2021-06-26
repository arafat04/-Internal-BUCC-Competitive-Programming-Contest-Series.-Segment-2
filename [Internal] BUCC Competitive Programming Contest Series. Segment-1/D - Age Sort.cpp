#include<bits/stdc++.h>
using namespace std;

int main(){
   // ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    int n;
    while(cin>>n){
        if(n==0){
            break;
        }
        else{
            int arr[n];
            int value;
            for(int i=0;i<n;i++){
                cin>>value;
                arr[i]=value;
            }
            int N = sizeof(arr) / sizeof(arr[0]);
            sort(arr, arr + N);

            for(int l=0;l<sizeof(arr);l++){
                cout<<arr[l]<<" ";
            }
            cout<<"\n";
        }
    }

    return 0;
}

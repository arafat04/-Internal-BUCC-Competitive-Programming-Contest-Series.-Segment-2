#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,value;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        int arr[n];
        for(int j=0;j<n;j++){
            cin>>value;
            arr[j]=value;

        }
        int minvalue;
        int minIndex ;
        for(int k=0;k<n-1;k++){
                minvalue = arr[k];
                minIndex = k;
                for(int l=k+1;l<n;l++){
                    if(arr[l]<minvalue){
                        minvalue = arr[l];
                        minIndex = l;
                    }
                }
                int temporary = arr[k];
                arr[k] = minvalue;
                arr[minIndex] = temporary;
        }

        cout<<2*(arr[n-1]-arr[0])<<"\n";
    }
    return 0;
}

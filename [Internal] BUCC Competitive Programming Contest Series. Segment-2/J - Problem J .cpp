#include<bits/stdc++.h>
using namespace std;

int main(){
    int T,N,value,low_count=0,highcount=0;
    cin>>T;
    for(int i =0;i<T;i++){

        cin>>N;
        int arr[N];
        for(int j=0;j<N;j++){

            cin>>value;
            arr[j]=value;
        }
        for(int k=0;k<N-1;k++){
            if(arr[k]<arr[k+1]){
                highcount++;
                continue;
            }
            else if(arr[k]>arr[k+1]){

                low_count++;
                continue;
            }

        }
        cout<<"Case "<<i+1<<": "<<highcount<<" "<<low_count<<"\n";
        low_count=0;
        highcount=0;
    }

    return 0;
}

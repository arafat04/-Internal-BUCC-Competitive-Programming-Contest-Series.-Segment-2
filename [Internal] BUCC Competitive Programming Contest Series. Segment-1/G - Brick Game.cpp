#include<bits/stdc++.h>
using namespace std;

int main(){
    int T,N;
    cin>>T;
    if(T<=100){
      for(int t=1;t<=T;t++){
        cin>>N;
        int arr [N];
        if(N>1&&N<11){
            int age;

            for(int i=0;i<N;i++){
                cin>>age;
                arr[i]= age;
            }

        }

        cout<<"Case "<<t<<": "<<arr[N/2]<<"\n";

      }
    }
    return 0;
}

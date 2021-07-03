#include<bits/stdc++.h>
using namespace std;

int main(){
  int N,value;
  cin>>N;
  cout<<"Lumberjacks:\n";
  for(int i=0;i<N;i++){

    int arr[10],count=0;
    for(int j=0;j<10;j++){
        cin>>value;
        arr[j]=value;
    }

    for(int k=0;k<9;k++){
        for(int l=k+1;l<10;l++){
            if((arr[k])>=(arr[l])){
                count =1;
                break;
            }
        }
    }
    if(count==1){

      for(int m=0;m<9;m++){
        for(int n=m+1;n<10;n++){
            if(arr[m]<=arr[n]){
                count =-1;
                break;
            }
        }
    }
    }

    if(count==0||count==1){
        cout<<"Ordered\n";
    }
    else{
        cout<<"Unordered\n";
    }
  }
    return 0;
}

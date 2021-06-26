#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,value;
    cin>>n;
    int lumberjacks=10;
    cout<<"Lumberjacks:\n";
    for(int i=0;i<n;i++){

        int arr[lumberjacks];
        int checkarr[lumberjacks];
        for(int j=0;j<lumberjacks;j++){
            cin>>value;
            arr[j] = value;
            checkarr[j] = value;
        }
        int minvalue,minIndex=0;
        for(int k=0;k<lumberjacks-1;k++){
            minvalue = arr[k];
            minIndex = k;
            for(int l=k+1;l<lumberjacks;l++){
                if(arr[l]<minvalue){
                    minvalue = arr[l];
                    minIndex = l;
                }
            }
            int temporary = arr[k];
            arr[k] = minvalue;
            arr[minIndex] = temporary;
        }

        int count = 0,x=lumberjacks-1;
        for(int m=0;m<lumberjacks;m++){
           if(arr[m]==arr[m+1]){
                count++;
                m=lumberjacks;
                break;
           }
           else{
             if(arr[m]==checkarr[m]){

                continue;

            }
            else if(checkarr[m]==arr[x]){
                x--;
                continue;
            }
            else{
                count++;
                break;
            }
           }
        }
        if(count==0){
            cout<<"Ordered";
        }
        else{
            cout<<"Unordered";
        }
        cout<<"\n";
    }
    return 0;
}

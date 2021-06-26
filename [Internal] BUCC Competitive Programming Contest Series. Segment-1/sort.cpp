#include<bits/stdc++.h>
using namespace std;

int main(){

      int minvalue,minIndex;
            for(int j=0;j<n-1;j++){
                minvalue = arr[j];
                minIndex = j;
                for(int k=j+1;k<n;k++){
                    if(arr[k]<minvalue){
                        minvalue = arr[k];
                        minIndex = k;
                    }
                }
                int temporary = arr[j];
                arr[j] = minvalue;
                arr[minIndex] = temporary;
            }
    int arr[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<n;
    return 0;
}

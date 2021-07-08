#include<bits/stdc++.h>
using namespace std;


void decToBinary(int n,int c) {
    // array to store binary number
    int binaryNum[32];

    // counter for binary array
    int i = 0;
    while (n > 0) {

        // storing remainder in binary array
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }

    // printing binary array in reverse order
    //for (int j = i - 1; j >= 0; j--)
    // cout << binaryNum[j];

    //count the number of 1
    int sum=0;
    for(int j=0; j<i; j++) {
        if(binaryNum[j]==1) {
            sum++;
        }
    }

    if(sum%2==1) {
        cout<<"Case "<<c+1<<": odd\n";
    } else {
        cout<<"Case "<<c+1<<": even\n";
    }

}

// Driver program to test above function
int main() {
    int T,n;
    cin>>T;
    for(int i=0; i<T; i++) {
        cin>>n;
        decToBinary(n,i);

    }
    return 0;
}

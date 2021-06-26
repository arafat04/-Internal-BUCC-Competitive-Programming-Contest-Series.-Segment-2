#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    double r,area_circle,area_rectangle;
    double pi = acos(-1);
    cin>>T;
    if(T<=1000){
        for(int i=0; i<T;i++){
            cin>>r;
            double d = 2*r;
            area_circle = pi*r*r;
            area_rectangle = d*d;
            cout << fixed << setprecision(2)<<"Case "<<i+1<<": "<<area_rectangle-area_circle<<"\n";

        }
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main(){

    int T,L;
    double width,green_area,radius,red_area;

    double pi = acos(-1);
    cin>>T;
    if(T<=100){
        for(int i=0;i<T;i++){
            cin>>L;

            width = (L*.6);
            green_area = L*width;
            radius = (L*.2);
            red_area = pi*radius*radius;
            printf("%.2lf %.2lf\n",red_area,green_area-red_area);
        }

    }
    return 0;
}

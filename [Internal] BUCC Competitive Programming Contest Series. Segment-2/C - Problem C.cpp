#include<bits/stdc++.h>

using namespace std;

int main(){
    int r,c;
    cin>>r>>c;
    for(int i=0;i<4*r-r;i++){
        if(i%3==1){
             for(int k=0;k<6*c-c;k++){
            if((k%5==0)||(k%5==4)){
                cout<<"O";
            }
            else if(k%5==2){
                cout<<"o";
            }
            else{
                cout<<".";
            }
        }
        }
        else{
            for(int j=0;j<6*c-c;j++){
            if(j%5==2){
                cout<<"O";
            }
            else{
                cout<<".";
            }
        }
        }
        cout<<"\n";
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main() {
            //Cumulative Sum Query SPOJ - CSUMQ
			ios::sync_with_stdio(false);
			cin.tie(NULL); cout.tie(NULL);


			int N, Q;
			cin>>N;

			vector<ll>input(N);
			vector<ll>pref(N);

			for (int i = 0; i < N; ++i)
			{
				cin>>input[i];
			}



			pref[0]=input[0];

			for (int i = 1; i < N; ++i)
			{
				pref[i]=input[i]+pref[i-1];
			}

			cin>>Q;

			for (int i = 0; i < Q; ++i)
			{
				int l,r;
				cin>>l>>r;


				ll ans=pref[r];
				if(l!=0){

					ans -=pref[l-1];
				}

				cout<<ans<<"\n";
			}

			return 0;


}

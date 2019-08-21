#include<iostream>
#define ll int64_t
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll a[n];
		ll ttl = 0;
		for(int i=0; i<n; ++i){
			cin>>a[i];
			ttl += a[i];
		}

		if(n == 1){
			cout<<1<<endl;
			continue;
		}
		
		ll lsum = 0;
		ll pos = -2;
		for(int i=0; i<n; ++i){
			lsum += a[i];
			if(ttl == lsum){
				pos = i;
				break;
			}
			ttl -= a[i];
		
		}
		cout<<pos+1<<endl;
	}
}
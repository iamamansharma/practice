// majority algorithm 
//aka boyer - moore majority vote algorithm
#include<iostream>
#include<map>
#include<algorithm>
#define ll long long

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll a[n] = {0};
		for(int i=0; i<n; ++i)
			cin>>a[i];

		ll majority_element = a[0];
		int cnt = 1;

		for(int i=1; i<n; ++i){
			if(a[i] == majority_element)
				cnt++;
			else if(cnt == 0){
				majority_element = a[i];
				cnt = 1;
			}
			else
				cnt--;
			
		}
		cnt = 0;
		for(int i=0; i<n; ++i)
			if(a[i] == majority_element)
				cnt++;
		if(cnt > n/2)
			cout<<majority_element<<endl;
		else
			cout<<-1<<endl;
	}
	return 0;
}
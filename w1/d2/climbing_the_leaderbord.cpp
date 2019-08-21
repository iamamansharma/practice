#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
#define ll long long

using namespace std;

int main(){
	int n;
	cin>>n;
	std::vector<ll> scores(n, 0);
	std::map<ll, int> mp;
	int pos = 1;
	for(int i=0; i<n; ++i){
		cin>>scores[i];
		if(mp.count(scores[i]) == 0){
			mp[scores[i]] = pos++;
		}
	}

	int m;
	cin>>m;
	std::vector<ll> alice(m, 0);
	for(int i=0; i<m; ++i)
		cin>>alice[i];

	
	sort(scores.begin(), scores.end());
	for(int i=0; i<m; ++i){
		auto it = lower_bound(scores.begin(), scores.end(), alice[i]);
		if(*it == alice[i]){
			cout<<mp[alice[i]]<<endl;
		}
		else if(*it > alice[i]){
			cout<<mp[*it]+1<<endl;
		}
		else if(*it < alice[i]){
			cout<<'*'<<mp[*it]<<endl;
			if(mp[*it] == 0)
				cout<<1<<endl;
			else
				cout<<mp[*it]-1<<endl;
		}
	}

	return 0;
}
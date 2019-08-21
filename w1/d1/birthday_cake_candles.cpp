#include<iostream>
#include<vector>
#include<algorithm>

#define ll long long
#define endl '\n'

using namespace std;

void print_vector(std::vector<ll>&v){
	for(auto x: v)
		cout<<x<<' ';
	cout<<endl;
}

int code(std::vector<ll>& v){
	sort(v.begin(), v.end());
	return (v.end() - lower_bound(v.begin(), v.end(), v.back()));
}

int main(int argc, char const *argv[])
{

	ll n;
	cin>>n;

	std::vector<ll> v(n, 0);
	for(ll i=0; i<n; ++i)
		cin>>v[i];

	cout<<code(v)<<endl;
	return 0;
}
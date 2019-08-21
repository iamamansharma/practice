#include<iostream>

using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[101] = {0};

	for(int i=0; i<n; ++i){
		int tmp;
		cin>>tmp;
		arr[tmp]++;
	}

	int max = -1;

	for(int i=0; i<101; ++i){
		if(arr[i]>max)
			max = arr[i];
	}
	cout<<n - max<<endl;
	return 0;
}
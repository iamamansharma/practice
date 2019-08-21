#include<iostream>

using namespace std;

int multiply(int *fact, int i, int size){
	int carry = 0;
	for(int j=0; j<size; ++j){
		int tmp = fact[j] * i + carry;
		fact[j] = tmp%10;
		carry = tmp/10;
	}
	while(carry){
		fact[size] = carry%10;
		carry /= 10;
		size++;
	}
	return size;
}

void factorial(int n){
	int fact[1000] = {0};
	fact[0] = 1;
	int size = 1;
	for(int i=2; i<=n; ++i){
		size = multiply(fact, i, size);
	}
	for (int i = size-1; i >= 0; --i)
	{
		cout<<fact[i];
	}
	cout<<endl;
}


int main(){
	int n;
	cin>>n;
	factorial(n);
	return 0;
}
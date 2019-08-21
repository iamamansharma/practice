#include<iostream>

using namespace std;



int main(){
    int n, k, q;
    cin>>n>>k>>q;

    int a[n] = {0};
    for(int i=0; i<n; ++i)
        cin>>a[i];

    while(q--){
        int tmp;
        cin>>tmp;
        if(tmp - k >= 0){
            cout<<a[n - k + tmp - 1]<<endl;
        }
        else
            cout<<a[size + (tmp - k)]<<endl;
    }
    return 0;
}
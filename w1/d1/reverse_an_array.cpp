#include<iostream>

using namespace std;

void print_array(int *head, int size){
	for(int i=0; i<size; ++i)
		cout<<head[i]<<' ';
	cout<<endl;
}

void reverse_array(int *head, int begin, int end){
	while(begin < end){
		swap(head[begin], head[end-1]);
		begin++;
		end--;
	}
}

int main(int argc, char const *argv[])
{
	int size_of_array;
	cin>>size_of_array;

	int array[size_of_array] = {0};
	for(int i=0; i<size_of_array; ++i)
		cin>>array[i];

	print_array(array, size_of_array);

	reverse_array(array, 0, size_of_array);

	print_array(array, size_of_array);
	return 0;
}
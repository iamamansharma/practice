#include<iostream>

using namespace std;

void print_array(int *head, int size){
	for(int i=0; i<size; ++i){
		cout<<head[i]<<' ';
	}
	cout<<endl;
}

void array_rotate(int *head, int size, int rotate_length){
	rotate_length %= size;
	int tmp_array[rotate_length] = {0};
	
	for(int i=0; i<rotate_length; ++i){
		tmp_array[i] = head[i];
	}

	for(int i=rotate_length; i<size; ++i){
		head[i-rotate_length] = head[i];
	}
	
	for(int i=0; i<rotate_length; ++i)
		head[size - rotate_length + i] = tmp_array[i];
}

int main(int argc, char const *argv[])
{
	int size_of_arrar;
	int rotate_length;
	cin>>size_of_arrar;

	int arrar[size_of_arrar] = {0};
	for(int i=0; i<size_of_arrar; ++i)
		cin>>arrar[i];
	cin>>rotate_length;

	print_array(arrar, size_of_arrar);

	array_rotate(arrar, size_of_arrar, rotate_length);

	print_array(arrar, size_of_arrar);

	return 0;
}
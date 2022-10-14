#include <iostream>
using namespace std;
const int size = 3;
int* insert(int x, int p, int arr[]);

int search_position(int x, int arr[]);
int main()
{
	int A [size] = {1, 5, 8};
	int* res = insert(4, 1, A);
	for (int i = 0; i < size+1;i++)
	{
		cout << res[i]<<" ";
	}
	cout << endl;
	cout << search_position(7, A);

	
}
int* insert(int x, int p, int arr[]) {
	int* arrTmp = new int[size + 1];
	for (int i = 0; i < size; i++)
		arrTmp[i] = arr[i];
	for (int i = size; i > p; i--)
		arrTmp[i] = arrTmp[i - 1];
	arrTmp[p] = x;
	return arrTmp;
}
int search_position(int x, int arr[]) {
	int i = 0;
	while (arr[i] < x && i < size) {
		i++;
	}
	return i;
}
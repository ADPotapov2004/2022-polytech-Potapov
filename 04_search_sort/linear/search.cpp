#include <iostream>
#include <vector>
using namespace std;
const int ARR_SIZE = 7;
int linear_search(int arr[], int n, int x, vector <int>& A) {

	int count = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] == x)
		{
			count++;
			A.push_back(i);
		}
		
	}
	return count;
	
}

int main()
{
	vector <int> A;
	int arr[ARR_SIZE] = {0,2,3,5,2,3,4};
	int res = linear_search(arr, ARR_SIZE, 2, A);
	cout << res << endl;
	for (int i=0;i<A.size(); i++)
	{
		cout << A[i] << " ";
	}
	return 0;
}

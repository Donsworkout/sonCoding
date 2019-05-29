/*
#include<iostream>
using namespace std;

int bSearch(int * arr, int start, int end, int key){
	if(start > end)
		return -1;
	int mid = (start + end) / 2;
	if(key == arr[mid]){
		return mid;
	}else if(key < arr[mid]){
		return bSearch(arr, start, mid - 1, key);
	}else{
		return bSearch(arr, mid + 1, end, key);
	}
}

int main(void){
	int arr[10] = {1,7,8,4,3,0,2,9,10,12};
	cout << bSearch(arr, 0, 9, 9) << endl;
}
*/

#include <iostream>
using namespace std;

void swap(int* a, int* b){
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

// j 라는 친구가 서서히 먹어가는 형태임
void quickSort(int start, int end, int * arr){
	if(start >= end) return;
	int i = start + 1; int j = start; int pivot = start;
	for(;i <= end; i++){
		if(arr[pivot] > arr[i]){
			j++;
			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[pivot], &arr[j]);
	quickSort(start, j-1, arr);
	quickSort(j+1, end, arr);
}

int main(void){
	int arr[8] = {5,3,6,2,7,3,8,4};
	quickSort(0, 7, arr);
	for(int i = 0; i < 8; i++){
		cout << arr[i] << " ";
	}
}

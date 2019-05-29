#include <iostream>
using namespace std;

void swap(int* a, int* b){
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void bubbleSort(int start, int end, int * arr){
	while(true){
		bool flag = false;
		for(int i = 0; i < end; i ++){
			if(arr[i] > arr[i+1]){
				swap(arr[i], arr[i+1]);
				flag = true;
			}
		}
		if(!flag){
			break;
		}
	}
}

int main(void){
	int arr[8] = {5,3,6,2,7,3,8,4};
	bubbleSort(0, 7, arr);
	for(int i = 0; i < 8; i++){
		cout << arr[i] << " ";
	}
}

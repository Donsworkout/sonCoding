/*
#include <iostream>
using namespace std;
int memo[100] = {};

int fibo(int n){
	if(n <= 1){
		return n;
	}else if(memo[n] != 0){
		return memo[n];
	}else{
		return memo[n] = fibo(n-2) + fibo(n-1);
	}
}

int main(void){
	cout << fibo(10) << endl;
	return 0;
}
*/

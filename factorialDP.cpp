/*
#include <iostream>
using namespace std;
int memo[100] = {0};

int factorial(int n){
	if(n <= 1)
		return n;
	else if(memo[n] != 0)
		return memo[n];
	else{
		return memo[n] = n * factorial(n-1);
	}
}

int main(void){
	cout << factorial(5) << endl;
	return 0;
}
*/

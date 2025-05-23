#include<stdio.h>

int countDigit(int n){
	
	if(n<0)
		return countDigit(-1*n);
	
	else if(n == 0)
	{
		printf("+0 Pop\n");
		return 0;
	}
	
	else
	{
		printf("Pushed: 1 + countDigit(%d)\n", n);
		return  1+countDigit(n/10);
	}
}
	
int main(){
	
	int res;
	
	res = countDigit(792);
	printf("Total no. of digits present in %d is: %d", 792, res);
	
	return 0;
}
#include<stdio.h>

int fib(int n){
	
	if(n<=1)
		return n;
	
	if(n<0)
		return 0;
	
	return fib(n-1) + fib(n-2);
}

void fiboSeries(int n)
{
	int f;
	if( n == -1)
		return;
	f=fib(n);
	fiboSeries(n-1);
	printf("%d ",f);
}
	
int main(){
	
	fiboSeries(5);
	
	return 0;
}
	
	

#include<stdio.h>
int max(int a, int b){
	
	if(a>b)
		return a;
	
	return b;
	
}

int KS(int profit[], int weight[], int w, int n){
	
	if(w == 0|| n==0)
		return 0;
	
	else if(weight[n-1]>w)
		return KS(profit, weight, w, n-1);
	
	else
		return max(KS(profit, weight, w, n-1), profit[n-1]+KS(profit, weight, w-weight[n-1], n-1));
	
}

int main(){
	
	int profit[]={5,2,6,10};
	int weight[]={2,3,4,7};
	int w,r;
	
	w=7;                                 /*Capacity of the knapsack */
	
	r=KS(profit, weight, w, 4);
	
	printf("Maximum profit is: %d", r);
	
	return 0;
}
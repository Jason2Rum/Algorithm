#include<stdio.h>
int getMaxProfit(int *prices,int days){
	int minPrice=prices[0];
	int maxProfit=0;
	int i=0;
	if(days<2) return 0;
	for(;i<days;i++){
		if(minPrice>prices[i]) minPrice=prices[i];
		if(maxProfit<prices[i]-minPrice) maxProfit = prices[i]-minPrice;
	}
	return maxProfit;
}

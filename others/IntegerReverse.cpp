//整数反转
#include<stdio.h> 

int reverse(int x) {
    int INT_MAX = -(1<<31)-1; 
	int INT_MIN = 1<<31;
	int rev = 0;
	int pop = 0;
	while(x!=0){
		pop = x%10;
		x/=10;
		if(rev>INT_MAX/10||(rev==INT_MAX/10&&pop>7)) return 0;
		if(rev<INT_MIN/10||(rev==INT_MIN/10&&pop<-8)) return 0;
		rev=rev*10+pop;
	}
	return rev;
	
}
int main(){
	printf("%d",reverse(1213));
	
}

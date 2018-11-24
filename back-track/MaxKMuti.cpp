/* 最大K乘积问题：设I是一个n位十进制整数。如果将I划分为k段，则可得到k个整数。这
k个整数的乘积称为I的一个k乘积。试设计一个算法，对于给定的I和k，求出I的最大k乘积*/
#include<stdio.h> 
#include<math.h>
#define k 2
#define n 3
int max=0;
int myPow(int count){
	int result=1;
	int i=0;
	for(;i<count;i++){
		result*=10;
	}
	return result;
}
void judge(int a[]){
	int temp=1;
	int i=0;
	for(;i<k;i++){
		temp*=a[i];
	}
	if(temp>max) max=temp;
}
//a为存放k个拆分的整数的数组，restBit为I被拆分后剩余的位数，arrayLength为已经拆分的个数，rest为剩余的位数 
void dfs(int a[],int arrayLength,int restNum,int restBit){
	int i=0;
		if(arrayLength==k){
			judge(a);
			return ;
		}
		for(i=restBit-1;i>=k-arrayLength-1;i--){//i表示剩下的数字  restBit=6,arrayLength=1,n=7,k=4  rest=234567
			if(k-arrayLength>restBit)
			return;
			else{
				a[arrayLength]=restNum/myPow(i);
				dfs(a,arrayLength+1,restNum%myPow(i),i);//rest%myPow(i)表示可以取前restBit-i 个数字 
			}
		}
}

int main(){
	int I;
	int a[k]={0};
	scanf("%d",&I);
	dfs(a,0,I,n);
	printf("%d",max);
	
	
}

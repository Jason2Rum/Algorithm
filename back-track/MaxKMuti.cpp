/* ���K�˻����⣺��I��һ��nλʮ���������������I����Ϊk�Σ���ɵõ�k����������
k�������ĳ˻���ΪI��һ��k�˻��������һ���㷨�����ڸ�����I��k�����I�����k�˻�*/
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
//aΪ���k����ֵ����������飬restBitΪI����ֺ�ʣ���λ����arrayLengthΪ�Ѿ���ֵĸ�����restΪʣ���λ�� 
void dfs(int a[],int arrayLength,int restNum,int restBit){
	int i=0;
		if(arrayLength==k){
			judge(a);
			return ;
		}
		for(i=restBit-1;i>=k-arrayLength-1;i--){//i��ʾʣ�µ�����  restBit=6,arrayLength=1,n=7,k=4  rest=234567
			if(k-arrayLength>restBit)
			return;
			else{
				a[arrayLength]=restNum/myPow(i);
				dfs(a,arrayLength+1,restNum%myPow(i),i);//rest%myPow(i)��ʾ����ȡǰrestBit-i ������ 
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

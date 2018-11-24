#include<stdio.h>
#include<string.h>
#include<malloc.h>
 

int comp(int a, int b){
	if (a<b) return 1;
	else return 0;
}
//A is the original array, temp is the ordered array
void mergeSort(int A[], int temp[], int left,int right){
	if(left==right) return;
	int i,curr;
	int mid = (left+right)/2;
	mergeSort(A,temp,left,mid);
	mergeSort(A,temp,mid+1,right);
	
	for( i=left;i<=right;i++){
		temp[i]=A[i]; //将仅仅两边排好序的A赋值给 temp，进行归并 ，结果写入A 
	}
	
	int i1=left; 
	int i2=mid+1;
	
	for( curr=left;curr<=right;curr++){//A的游标，将排好序的赋值给A
		if(i1==mid+1) 
		A[curr]=temp[i2++];
		else if (i2>right)
		A[curr]=temp[i1++];
		else if (comp(temp[i1],temp[i2]))
		A[curr]=temp[i1++];
		else A[curr]=temp[i2++];
		
	}
	
}

 
int main()
{
	
	int a[8]={8,23,44,1,32,4,10,44};
	int b[8];
	mergeSort(a,b,0,7);
	printf("%d ",b[0]);
	printf("%d",b[7]);

}

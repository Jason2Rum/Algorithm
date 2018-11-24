/*搭积木*/ 
#include<stdio.h>
int count=0;
int judge(int a[]){
	if(a[0]<a[1]&&a[0]<a[2]&&a[1]<a[3]&&a[1]<a[4]&&a[2]<a[4]&&a[2]<a[5]&&a[3]<a[6]&&a[3]<a[7]&&a[4]<a[7]&&a[4]<a[8]
	&&a[5]<a[8]&&a[5]<a[9]) 
	return 1;
	else 
	return 0;
}
/*tag[n]=1表述n已经被使用
arrayLength表示已经搭了的数量 */ 
void dfs(int array[],int arrLength,int tag[]){
	int i;
	if(arrLength==10&&judge(array)){
		count++;
		return;
	}
	for(i=0;i<10;i++){ 
		if(tag[i]==0){
			tag[i]=1;
			array[arrLength]=i;
		}else{
			continue;
		}
		dfs(array,arrLength+1,tag);
		tag[i]=0;
	}
}

int main(){
	int array[10]={0};
	int tag[10]={0};
	
	dfs(array,0,tag);
	printf("%d",count);
	
}


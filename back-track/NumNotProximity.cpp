/*蓝桥杯第七届第三题，填方格*/
#include<stdio.h> 
int resultCount=0;
int notProximity(int a,int b){
	if(a-1!=b&&a+1!=b) return 1;
	else return 0;
}
int judgeSquare(int a[]){
	if(notProximity(a[0],a[1])&&notProximity(a[4],a[5])&&notProximity(a[0],a[4])&&notProximity(a[1],a[5])
	&&notProximity(a[0],a[5])&&notProximity(a[1],a[4])) return 1;
	else return 0;
}
int judge(int a[]){
	return judgeSquare(&a[0])&&judgeSquare(&a[1])&&judgeSquare(&a[3])&&judgeSquare(&a[4])
	&&notProximity(a[0],a[3])&&notProximity(a[6],a[9]);//这两个一定不能漏掉 
}

void dfs(int a[],int arrLength,int tag[]){
	int i;
	if(arrLength==10){
		if(judge(a)){
			resultCount++;
		}
		return ;
		
	}
	for(i=0;i<10;i++){
		if(tag[i]==0){
			 a[arrLength]=i;
			 tag[i]=1;
			 dfs(a,arrLength+1,tag);
			 tag[i]=0;
		}
		
	}
		
}


int main(){
	int tag[10]={0};
	int array[10]={0};
	dfs(array,0,tag);
	printf("%d",resultCount);
}


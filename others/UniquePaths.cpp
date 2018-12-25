/*腾讯动态规划，不同路径问题*/ 
#include<stdio.h>
int rUniquePaths(int m, int n){//递归 

	if(m!=1&&n!=1) return uniquePaths(m-1,n)+uniquePaths(m,n-1);
	else if(m==1&&n!=1) return 1;
	else if(m!=1&&n==1) return 1;
	else return 1;
}
int uniquePaths(int m,int n){//迭代 
	int dp[100][100]={0};
	int i,j;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			if(i==0||j==0)
			dp[i][j] = 1;
			else{
				dp[i][j]=dp[i-1][j]+dp[i][j-1];
			}
		}
	}
	return dp[m-1][n-1];
}
int main(){
	printf("%d",uniquePaths(57,57));
}

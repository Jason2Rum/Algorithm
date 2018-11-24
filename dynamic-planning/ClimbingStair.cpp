/*爬楼梯问题
重点：状态转移方程为f(n)=f(n-1)+f(n-2);*/
#include<stdio.h>
int left(int leftStair){
	if(leftStair == 2) return 2;
	if(leftStair == 1) return 1;
	else return left(leftStair-2)+left(leftStair-1);
}
int main(){
	return left(10);
}
// Second solution 
int climbStairs(int n) {
    // int step=0;
    // if(n<1) return 0;
    // if(n==1) return 1;
    // if(n==2) return 2;
    // step+=climbStairs(n-1);
    // step+=climbStairs(n-2);
    // return step;
    int i,step;
    int a=1,b=2;
    if(n==1) return 1;
    if(n==2) return 2;
    if(n<1) return 0;
    
    for(i=3;i<=n;i++){
        step=a+b;
        a=b;
        b=step;
    }
    return step;
    
}

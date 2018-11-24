/*
 * 回溯算法练习 
 * 输出指定数量括号的排列数 
 * ref: https://blog.csdn.net/sinat_27908213/article/details/80599460
*/
#include<stdio.h>
int count=0;//可能性的数量 
void place(int left, int right){
    if(left==right&&left==0)
    count++;
    if(right > left)
    place(left,right-1);
    if(left>0)
    place(left-1,right);
}
int main(){
     int bracketPairNum =6;
     int leftBracketNum = bracketPairNum;
     int rightBracketNum = bracketPairNum;
     place(leftBracketNum,rightBracketNum);
     printf("%d",count);
	 return 1;
}

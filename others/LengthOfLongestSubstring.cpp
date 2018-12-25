/*无重复字符的最长子串*/ 
#include<stdio.h>
int lengthOfLongestSubstring(char* s) {
    int set[128][2]={0};//用数组模拟哈希表。二维数组，每一行第一列是是否出现过，第二列是出现的位置 
    
    int maxLength =0,left=0,right=0;//窗口左右char 
	while(s[right]!=0){
		if(set[s[right]][0]==1&&left<set[s[right]][1]+1){
			left=set[s[right]][1]+1;
		}
		set[s[right]][0]=1;
		set[s[right]][1]=right;
		right++;
		if(right-left>maxLength)maxLength=right-left;
	}
	return maxLength;
    
}//pwwkew
//abcaef
//abba
int main(){
	char a[]="abba";

	printf("%d",lengthOfLongestSubstring(a));
}


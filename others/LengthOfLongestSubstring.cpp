/*���ظ��ַ�����Ӵ�*/ 
#include<stdio.h>
int lengthOfLongestSubstring(char* s) {
    int set[128][2]={0};//������ģ���ϣ����ά���飬ÿһ�е�һ�����Ƿ���ֹ����ڶ����ǳ��ֵ�λ�� 
    
    int maxLength =0,left=0,right=0;//��������char 
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


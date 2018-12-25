#include <stdio.h>
void count(char text[][1000],int chars[],int n,int i,char zimu[]);
int main()
{
	int n = 0;
	char text[1][1000]={0};
	int num[1000];
	int chars[26]={0};
	char zimu[]="abcdefghigklmnopqrstuvwxyz";
	scanf("%s",text[1]);
	//printf("sdkfsdfsdf\n");
//	getchar();
	for(int i=0;i<1000;i++){
		if(text[0][i]==0)
		break;
		else
		count(text,chars,n,i,zimu);
	}
	for(int i=0;i<26;i++){
		printf("%c  :%d\n",zimu[i],chars[i]);
	}
}
void count(char text[][1000],int chars[],int n,int i,char zimu[])
{
	if(text[0][i]==zimu[n]){
		chars[n]++;
	}
	else
	    count(text,chars,n+1,i,zimu);
}


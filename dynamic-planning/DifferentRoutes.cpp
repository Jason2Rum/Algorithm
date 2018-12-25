#include<stdIo.h>

int uniquePaths(int m, int n) {
	if(m==1||n==1) return 1;
    int totalStep = m+n-2;
    int all=1;
    int redu =1;
    for(int i=0;i<n-1;i++){
    	all*=(totalStep-i);
    }
    for(int i=1;i<=n-1;i++){
    	redu*=i;
    }
    return all/redu;
}l
int main(){
	int i=1;
	int h=1;
	for(;i<20;i++){
		h*=i;
	}
	printf("%d",h);
}

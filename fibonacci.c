#include<stdio.h>
main(){
	int x1=0,x2=1,ans,i;
	for(i=0;i<=10;i++){
		ans=x1+x2;
		printf("\t %d",ans);
		x1=x2;
		x2=ans;
	}
}

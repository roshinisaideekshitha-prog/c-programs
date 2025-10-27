#include <stdio.h>
int main(){
	char ch;
	char sr[1000];
	char sen[10000];
	printf("enter the ch:");
	scanf(" %c" ,&ch);
	printf("enter the sr:\n");
	sacnf("%s",sr);
	getchar();
	printf("enter the sen:\n");
	sacnf("%[^\n]%*c",sen);
	printf("%c\n%\n%s",ch,sr,sen);
	return 0;

}

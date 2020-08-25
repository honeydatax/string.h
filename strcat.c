#include <stdio.h>

int strslen(char *s){
	int pos=0;
	while(s[pos]!=0){
		pos++;
	}
	return pos;
}

int strcat(char *s1,char *s2){
	int pos=0;
	char *s3;
	s3=s1+strslen(s1);
	while(s2[pos]!=0){
		s3[pos]=s2[pos];
		pos++;
	}
	s3[pos]=s2[pos];
	return pos;
}


int main(){
	char cc[50]="hello ";
	char *c="world\n";
	strcat(cc,c);
	printf("%s\n",cc);
	return 0;
}

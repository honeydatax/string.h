#include <stdio.h>

int strncopy(char *s1,char *s2,int size){
	int pos=0;
	while(pos<=size){
		s1[pos]=s2[pos];
		pos++;
	}
	return pos;
}


int main(){
	char cc[1024];
	char *c="hello world\n";
	strncopy(cc,c,5);
	cc[5]=0;
	printf("%s\n",cc);
	return 0;
}

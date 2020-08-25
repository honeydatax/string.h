#include <stdio.h>

int strcopy(char *s1,char *s2){
	int pos=0;
	while(s2[pos]!=0){
		s1[pos]=s2[pos];
		pos++;
	}
	s1[pos]=s2[pos];
	return pos;
}


int main(){
	char cc[1024];
	char *c="hello world\n";
	strcopy(cc,c);
	printf("%s\n",cc);
	return 0;
}

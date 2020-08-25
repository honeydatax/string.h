#include <stdio.h>

int findcahr(char *s,char c){
	int pos=0;
	while(s[pos]!=0 && s[pos]!=c){
		pos++;
	}
	if(s[pos]!=c)pos=-1;
	return pos;
}


int main(){
	int l=0;
	char *c="hello world\n";
	l=findcahr(c,'w');
	printf("%s %d \n",c,l);
	return 0;
}

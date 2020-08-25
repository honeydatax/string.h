#include <stdio.h>

int ucase(char *s){
	int pos=0;
	while(s[pos]!=0){
		if (s[pos]>='a' && s[pos]<='z')s[pos]=(s[pos]-'a')+'A';
		pos++;
	}
	return pos;
}


int main(){
	int l=0;
	char c[]="HeLlO WoRlD\n";
	l=ucase(c);
	printf("%s\n",&c);
	return 0;
}

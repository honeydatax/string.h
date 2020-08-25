#include <stdio.h>

int lcase(char *s){
	int pos=0;
	while(s[pos]!=0){
		if (s[pos]>='A' && s[pos]<='Z')s[pos]=(s[pos]-'A')+'a';
		pos++;
	}
	return pos;
}


int main(){
	int l=0;
	char c[]="HeLlO WoRlD\n";
	l=lcase(c);
	printf("%s\n",&c);
	return 0;
}

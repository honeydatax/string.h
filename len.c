
int strslen(char *s){
	int pos=0;
	while(s[pos]!=0){
		pos++;
	}
	return pos;
}


int main(){
	int l=0;
	char *c="hello world\n";
	l=strslen(c);
	return 0;
}

#include<stdio.h>
void string_reverse(char s[]);
void string_reverse(char s[]) {
	if(*s) {
		string_reverse(s+1);
		printf("%c", *s);
	}
}
int main(int argc, char *argv[]) {
	char s[]="Practise";
	string_reverse(s);
}

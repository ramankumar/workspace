/*
 * pangram.cpp
 *
 *  Created on: 24-Mar-2018
 *      Author: hackerbox1
 */


#include<iostream>
using namespace std;
#include<string.h>

#define NO_OF_CHARS 26
bool isAlphabet(char c) {
	if((c >='a' && c <='z') || (c>='A' && c<='Z'))
		return 1;
	else
		return 0;
}
bool pangram(char *s){
	bool charHash[NO_OF_CHARS];
	for(int i=0; i < strlen(s); i++) {
		if((s[i] >='a' && s[i] <='z'))
			charHash[s[i]-'a'] = 1;
		else if((s[i] >='A' && s[i]<='Z'))
			charHash[s[i]-'A'] = 1;
	}
	for(int i=0; i<26; i++) {
		if(charHash[i]==0)
			return 0;
	}
	return 1;
}
int main(int argc, char *argv[]) {
	char input[100];
	cout << "Enter Input string\n";
	getline( input); // @suppress("Invalid arguments")
	if(pangram(input))
		cout << "input string " << input << " is a pangram"<<endl;
	else
		cout << "input string " << input << " is not a pangram"<<endl;
}


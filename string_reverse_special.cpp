/*
 * Reverse an array without affecting special characters
 * Input:   str = "a,b$c"
 *	Output:  str = "c,b$a"
 *
 *  Created on: 24-Mar-2018
 *      Author: hackerbox1
 */
#include<iostream>
#include<string>
using namespace std;

int isSpecialChar(char c) {
	if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
			return 0;
	else
		return 1;
}
string string_reverse_special (string s);
string string_reverse_special(string s){
	for (int i=0,j=s.size()-1; i <j;) {
			if(isSpecialChar(s[i]))
				i++;
			else if(isSpecialChar(s[j]))
				j--;
			else {
				char temp = s[i];
				s[i] = s[j];
				s[j] = temp;
				i++;
				j--;
			}
	}
	return s;
}
int main(int argc, char *argv[]){
	string input;
	while(1) {
	cout << "Please enter string, type quit to exit\n";
	cin >> input;
	if (input == "quit")
		return 0;
	string_reverse_special(input);
	cout <<"Reverse string\n"<< string_reverse_special(input)<<endl;
	}
	return 0;
}

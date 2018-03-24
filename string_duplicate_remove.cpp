/*;
 * string_duplicate_remove.cpp
 * Remove all duplicates from a given string
 *  Created on: 24-Mar-2018
 *      Author: hackerbox1
 */

#include<iostream>
using namespace std;
#define NO_OF_CHAR 255
void removeDuplicatesFromString(string s) {
	bool charHash[NO_OF_CHAR];
	int len=0;
	for (int i=0; i < s.size(); i++) {
		if(charHash[s[i]] == 0) {
			charHash[s[i]] = 1;
			s[len] = s[i];
			len++;
		}
	}
	for(int i=len; i < s.size();i++)
		s[i]='\0';
	cout << "Ouput:" << s <<" len:"<<len<<	endl;
}
int main(int argc, char*argv[]) {
	string input;
	cin >> input;
	removeDuplicatesFromString(input);

}

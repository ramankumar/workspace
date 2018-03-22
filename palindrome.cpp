/* Check given string is palindrome or not */
#include<iostream>
#include<string.h>
using namespace std;
int isPalindrome(string s);
int isPalindrome(string s)
{
	int size= s.size();
	for(int i=0; i <= size/2; i++) {
		if(s[i] != s[size-1-i]) {
			cout << s[i] <<" "<< s[size -i]<< endl;
			return 0;
		}
	}
	return 1;
}
int main(int argc, char *argv[])
{
	string s;
	cout << "Enter string\n";
	cin >> s;

	cout << s << "size"<< s.size()<<endl;
	int result = isPalindrome(s);
	if(result)
		cout << s << "is a palindrome"<< endl;
	else
		cout << s << "is not a palindrome"<< endl;

		
}

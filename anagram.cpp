/*
 * anagram.cpp
 *
 *  Created on: 29-Mar-2018
 *      Author: hackerbox1
 */
#include<iostream>
using namespace std;
#include<bits/stdc++.h>

#define NO_OF_CHAR 256
bool anagram(vector <string> s, int n) {
	for(int i=0; i <n; i++) {
		sort(s[i].begin(), s[i].end());
	}
	for(int i=0; i <n ; i++)
	cout << "s["<<i<<"]:" << s[i] << endl;
	//for(int i=0; i <n; i++ )
	//	sort(s.begin(), s.end());
	for(int i=0; i <n ; i++) {
		cout<<"Angarams of "<<i+1<<" ";
		for(int j=0; j< n; j++)
		{
			if(s[i] == s[j] && (i!=j))
				cout << j+1<<",";
		}
		cout<< endl;
	}
	return true;
}
int main(int argc, char *argv[])
{
	int n;
	cout <<"Number of strings"<< endl;
	cin >> n;
	vector <string> (input);
	for(int i=0; i < n; i++)
	{
		cout << "Enter input string:"<<i << endl;
		string s;
		cin >> s;
		input.push_back(s);
	}
	anagram(input, n);
}




#include<iostream>
#include<stack>
#include<string.h>
using namespace std;
int parenthesisMatch(string input);
int parenthesisMatch(string input)
{
	stack <char> s;
	for(int i=0; i <= input.size(); i++)
	{
		if(input[i] =='(' || input[i] == '{' || input[i] == '[')
			s.push(input[i]);
		else if(!(s.empty()) && ((input[i]== ')' && s.top() == '(') || (input[i]== ']' && s.top() == '[') || (input[i]== '}' && s.top() == '{')))
			s.pop();
		else
			return 0;
	}
	if(s.empty())
		return 1;
	else
		return 0;

}
int main(int argc, char *argv[])
{
	cout << "Enter String\n";
	string input;
	cin >> input;
	int result = parenthesisMatch(input);
	if(result)
		cout << input << "balanced"<< endl;
	else
		cout << input << "not balanced" << endl;
}

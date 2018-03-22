/*A bracket is considered to be any one of the following characters: (, ), {, }, [, or ].

Two brackets are considered to be a matched pair if the an opening bracket (i.e., (, [, or {) occurs to the left of a closing bracket (i.e., ), ], or }) of the exact same type. There are three types of matched pairs of brackets: [], {}, and ().

A matching pair of brackets is not balanced if the set of brackets it encloses are not matched. For example, {[(])} is not balanced because the contents in between { and } are not balanced. The pair of square brackets encloses a single, unbalanced opening bracket, (, and the pair of parentheses encloses a single, unbalanced closing square bracket, ].

Some examples of balanced brackets are []{}(), [({})]{}() and ({(){}[]})[].

By this logic, we say a sequence of brackets is considered to be balanced if the following conditions are met:

It contains no unmatched brackets.
The subset of brackets enclosed within the confines of a matched pair of brackets is also a matched pair of brackets.
Given  strings of brackets, determine whether each sequence of brackets is balanced. If a string is balanced, print YES on a new line; otherwise, print NO on a new line.

Input Format

The first line contains a single integer, , denoting the number of strings. 
Each line  of the  subsequent lines consists of a single string, , denoting a sequence of brackets.

Constraints

, where  is the length of the sequence.
Each character in the sequence will be a bracket (i.e., {, }, (, ), [, and ]).
Output Format

For each string, print whether or not the string of brackets is balanced on a new line. If the brackets are balanced, print YES; otherwise, print NO.

Sample Input

3
{[()]}
{[(])}
{{[[(())]]}}
Sample Output

YES
NO
YES
*/

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

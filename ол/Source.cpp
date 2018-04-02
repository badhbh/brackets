#include <iostream>
#include <string>
#include <fstream>
#include <stack>
using namespace std;
int main() {
	ifstream in;
	ofstream out;
	in.open("brackets.in");
	out.open("brackets.out");
	//in.open("bracketsin.txt");
	//out.open("bracketsout.txt");
	string str;
	stack<char> pshe;
	//str[0] = '0';
	//for(int i = 0; i < 7; i++){
	while (!in.eof()) {

		//while(str[0] != '1'){
		//str[0] = '1';
		in >> str;

		//out << str;
		pshe.push(4);
		int jojo;
		jojo = str.size();
		for (int i = 0; i < jojo; i++) {
			if (str[i] == '(' || str[i] == '[') {
					pshe.push(str[i]);
				
			}
			else if (pshe.top() == '(' && str[i] == ')') {
					pshe.pop();
			}
			else if (pshe.top() == '[' && str[i] == ']') {			
					pshe.pop();				
			}
			else if (str[i] == ')' || str[i] == ']' /*&& pshe.top != '(' || pshe.top != '['*/) {
				pshe.push(str[i]);
				break;
			}
			else {
				//str[i] != '(' || str[i] != '[' || str[i] != ')' || str[i] != ']';
				str[i] = 4;
				pshe.push(str[i]);
				break;
			}
		}

		if(getline(in, str)) {
			if (pshe.top() == 4)  {
				out << "YES" << endl;
				//break;
			}
			else {
				out << "NO" << endl;
				//break;
				while (!pshe.empty()) {
					pshe.pop();
				}

			}
		}
		
		else {break;}



	}

	in.close();
	out.close();
	return 0;
}
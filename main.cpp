#include <bits/stdc++.h>

int main(){
  stack<int> stack;
  string output;
  int answer = 0;
  int counter = 0;
  int temp1 = 0;
  int temp2 = 0;
 
  cout << "Enter Expression: ";
  cin >> output;

  for(char c: output){
	if(counter == 0){ stack.push(atoi(&c));}
	
	else if(c == "+"){
	temp1 = atoi(&c);
	temp2 = stack.pop();
	int sum = temp1 + temp2;
	answer += sum;}

	else if(c == "-"){
	   temp1 = atoi(&c);
	   temp2 = stack.pop();
	   int diff = temp2 - temp1;
	   answer -= diff;
	   counter = 0;
	  } 
	counter += 1
  }

}

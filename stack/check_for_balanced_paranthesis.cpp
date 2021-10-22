#include <iostream>
#include<string>
using namespace std;
#define MAX_SIZE 101 

class Stack
{
private:
  char A[MAX_SIZE]; 
	int top;   
public:
	// constructor
	Stack()
	{
		top = -1; 
	}

 
	void Push(int x) 
	{
	  if(top == MAX_SIZE -1) { // overflow case. 
			printf("Error: stack overflow\n");
			return;
		}
		A[++top] = x;
	}
 

	void Pop() 
	{
		if(top == -1) { 
			printf("Error: No element to pop\n");
			return;
		}
		top--;
	}
 
	
	int Top() 
	{
		return A[top];
	}
 

	int Empty()
	{
		if(top == -1) return 1;
		return 0;
	}


};

bool Arepairs(char a,char b){
    if(a=='(' && b==')')return true;
    if(a=='{' && b=='}')return true;
    if(a=='[' && b == ']')return true;
    return false;
}
bool check_for_balanced_parenthesis(string s){
    Stack a;
    int len = s.size();
    for(int i=0;i<len;i++){
        if((s[i]=='(') || (s[i]=='{') || (s[i]=='[')){
            a.Push(s[i]);
        }
        else if((s[i]==')') || (s[i]=='}') || (s[i]==']')){
            
            if(a.Empty()){
              
               return false;
            }
            else if(Arepairs(a.Top(),s[i]) == false){
                return false;
            }
            else{
                a.Pop();
            }
        }
        
    }
    return a.Empty() ? true:false;
}
int main() {
  string s;
  cin>>s;
  bool result = check_for_balanced_parenthesis(s);
  if(result){
      cout<<"given string has balanced parenthesis";
  }
  else{
      cout<<"given string is not balanced";
  }
}

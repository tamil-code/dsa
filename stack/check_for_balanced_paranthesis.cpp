#include<iostream>
#include<stack>
#include<string.h>
using namespace std;

bool ArePair(char opening, char closing)
{
    if (opening == '(' && closing == ')')
        return true;
    else if (opening == '{' && closing == '}')
        return true;
    else if (opening == '[' && closing == ']')
        return true;
    return false;
}

string check_for_balanced_parenthesis(string exp){
    int n = exp.length();
    //creating a stack to check for parenthesis(using stack from stl)
    //adding the opening paranthesis in the stack
    //if a close parenthesis present then compare it with the last opening parenthesis if it match then pop the opening paranthesis from the stack
    //else not balanced
    //finally stack is empty then the expression is balanced


    stack<int>s; 
    for (int i = 0; i < n; i++)
    {
        if (exp[i] =='(' || exp[i] =='{' || exp[i]=='[')
        {  
            s.push(exp[i]);
        }
        else if (exp[i] == ')' || exp[i] == '}' || exp[i] == ']'){
            if (s.empty() == false)
            { 
              if (ArePair(s.top(),exp[i]))
              {
                  s.pop();
              }
              
            
            }
            else if (ArePair(s.top(),exp[i]) == false || s.empty())
            {
                return "false";
            }
           
            
           
            

        }
       
         //single line if else

    }
    //after traversing the expression there is still opened parenthesis in the stack which is not closed then 
    //there is no balace
    if (s.empty())
    {
        return "true";
    }
    else
    {
        return "false";
    }
}

int main()
{
    string exp;
    getline(cin,exp);
   cout<< check_for_balanced_parenthesis(exp);
}

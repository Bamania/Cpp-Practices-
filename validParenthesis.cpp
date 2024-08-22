#include <iostream>
#include <stack>
using namespace std;

bool validParentheise(string exp)
{
    stack<char> S;
    for (char c : exp)
    {

        if (c == '{' || c == '[' || c == '(')
        {

            S.push(c);
        }
        else
        {
            if (c == '}')
            {
                if (S.top() == '{')
                {
                    S.pop();
                }
            }
            if (c == ')')
            {
                if (S.top() == '(')
                {
                    S.pop();
                }
            }
            if (c == ']')
            {
                if (S.top() == '[')
                {
                    S.pop();
                }
            }
        }
    }

    if(S.empty()){
        cout << "Valid Expression" << endl;
        return true;
    } else {
        cout << "Invalid Expression" << endl;
        return false;
    }
}

int main()
{

    cout << "enter your expression" << endl;
    string expression;

    cin >> expression;
    validParentheise(expression);
}
#include <bits/stdc++.h>

using namespace std;

string isBalanced(string s) {
    string flag;
    std::stack<char> stack;
    std::set<char> open = {'{', '[', '('};
    std::set<char> close = {'}', ']', ')'};
    int runner = 0;
    int start = 1;

    if (s.size() % 2 != 0) {
        flag = "NO";
    } else {
        stack.push(
                s[runner]);
        for (int ch = start; ch < s.size(); ch++) {
            if (stack.empty()) {
                stack.push(s[start]);
            } else if (open.find(stack.top()) != open.end() &&
                       open.find(s[ch]) != open.end()) {
                stack.push(s[ch]);
            } else if (close.find(stack.top()) != close.end()) {
                flag = "NO";
            } else if (open.find(stack.top()) != open.end() &&
                       close.find(s[ch]) != close.end()) {
                if (stack.top() == '[' &&
                    s[ch] == ']') {
                    stack.push(s[ch]);
                    stack.pop();
                    stack.pop();
                } else if (stack.top() == '{' && s[ch] == '}') {
                    stack.push(s[ch]);
                    stack.pop();
                    stack.pop();
                } else if (stack.top() == '(' && s[ch] == ')') {
                    stack.push(s[ch]);
                    stack.pop();
                    stack.pop();
                } else {
                    flag = "NO";
                }
            }
            start++;
            runner++;
        }
        if (stack.empty()) {
            flag = "YES";
        }else{
            flag = "NO";
        }
    }
    return flag;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string s;
        getline(cin, s);

        string result = isBalanced(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}


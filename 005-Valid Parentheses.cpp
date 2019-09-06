class Solution {
public:
	bool isValid(string s) {
		stack<char>check;
		if (s.empty())return true;
		for (int i = 0; i < s.size(); i++) {
			if (s[i] == '(' || s[i] == '[' || s[i] == '{')check.push(s[i]);
			else {
				if (check.empty())return false;
				if (s[i] == ')'&&check.top() != '(')return false;
				if (s[i] == ']'&&check.top() != '[')return false;
				if (s[i] == '}'&&check.top() != '{')return false;
				check.pop();
			}
		}
		return check.empty();
	}
};
//ֻ�����ķ���ѹջ�������Ҳ���ŵ�ʱ���ж�
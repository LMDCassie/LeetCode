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
//Ö»°Ñ×ó²àµÄ·ûºÅÑ¹Õ»£¬¶Áµ½ÓÒ²à·ûºÅµÄÊ±ºòÅÐ¶Ï
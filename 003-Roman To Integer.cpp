class Solution {
public:
	int romanToInt(string s) {
		unordered_map<char, int> m{ {'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000} };
		int rouman_num = 0;
		for (int i = 0; i < s.length(); i++) {
			int val = m[s[i]];
			if (i == s.length() - 1 || m[s[i]] >= m[s[i + 1]])rouman_num += val;
			else rouman_num -= val;
		}
		return rouman_num;
	}
};
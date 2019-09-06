class Solution {
public:
	string longestCommonPrefix(vector<string>& strs) {
		string s= "";
		if (strs.empty())return s;
		for (int i = 0; i < strs[0].size(); i++) {
			char c = strs[0][i];
			for (int j = 1; j < strs.size(); j++) {
				if (strs[j][i] != c || i >= strs[j].size())return s;//监测到不同字符，或是已有的最长前缀比最短的字符串还长
			}
			s.push_back(c);
		}
		return s;
	}
};
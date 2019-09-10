class Solution {
public:
	int lengthOfLastWord(string s) {
		int head = 0;
		int tail = s.size() - 1;
		while (s[head] == ' ')head++;
		while (s[tail] == ' ')tail--;
		int res = 0;
		for (int i = head; i <= tail; i++) {
			if (s[i] == ' ')res = 0;
			else res++;
		}
		return res;
	}
};
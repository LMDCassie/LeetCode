class Solution {
public:
	int strStr(string haystack, string needle) {
		if (needle.size() > haystack.size())return -1;
		int needle_size = needle.size();
		int haystack_size = haystack.size();
		int i = 0;
		int j = 0;
		for (i = 0; i <= haystack_size - needle_size; i++) {
			j = 0;
			for (j = 0; j < needle_size; j++) {
				if (needle[j] != haystack[i + j])break;
			}
			if (j == needle_size)return i;
		}
		return -1;
	}
};
#include <iostream>
#include <string>

using namespace std;
using std::string;



int strStr2(string haystack, string needle) {
	int n = haystack.size();
	int m = needle.size();
	if (!m) return 0;
	for (int i = 0;i<n - m + 1;i++) {
		int j = 0;
		for (;j<m; j++) {
			if (haystack[i + j] != needle[j]) break;
		}

		if (j == m) return i;
	}

	return -1;
}

int main() {
	string haystack, needle;

	cout << "Type a string :";
	cin >> haystack;
	cout << "Type another string :";
	cin >> needle;
	cout << endl;

	cout << "Haystack: ";

	cout << haystack << endl;
	cout << "Needle: ";
	cout << needle << endl;
	int res = strStr2(haystack, needle);
	cout << "res :" << res;
	getchar();
	getchar();
	return 0;


}
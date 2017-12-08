#include <iostream>
#include <string>

using namespace std;
using std::string;



int strStr(string haystack, string needle) {
	for (int i = 0; i < haystack.size();i++) {
		int flag = 0;
		for (int j = 0; j < needle.size(); ) {
			if (haystack[i+j] == needle[j]) {
				j++;
				flag = 1;
			}
			else {
				flag = 0;
				break;
			}
		}
		if (flag == 1) {
			return i;
		}
	}

	return 0;
}

int main2() {
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
	int res = strStr(haystack, needle);
	cout << "res :" << res;
	getchar();
	getchar();
	return 0;


}
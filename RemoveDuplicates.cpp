#include <iostream>
#include <vector>

#define BUFFSIZE 1080
using namespace std;

int removeDuplicates(vector<int>& nums) {
	if (nums.empty())
		return 0;
	int i = 0;
	for ( ; i < nums.size()-1; ) {
		
		if (nums[i] == nums[i+1]) {
			vector<int>::iterator tmp = nums.begin();
			cout << nums[i] << " i = " << i <<  endl;
			nums.erase(tmp +i+1);
		}
		else {
			i++;
		}
	}

	return i+1;
}

void vectorShow(vector<int>& nums) {
	for (vector<int>::iterator iter = nums.begin(); iter != nums.end();++iter) {
		printf("%d ", *iter);
	}
	printf("\n\r");
	return ;
}


int main1() {


	int v1[BUFFSIZE] = {1,1,2};
	vector<int> nums;
	for (int i = 0; i < BUFFSIZE; ++i) {
		if (v1[i] == '\0')
			break;

		nums.push_back(v1[i]);
	}
	vectorShow(nums);
	int res = removeDuplicates(nums);
	if (res < 0) {
		printf("an error occurs\n\r");
		exit(0);
	}
	else {
		
	}
	printf("res = %d\n\r",res);
	vectorShow(nums);
	getchar();

	return 0;
}
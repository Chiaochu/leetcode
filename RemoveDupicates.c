#include <stdio.h>

int removeDuplicates(int* nums, int numsSize) {
	int i = 0;
	for (int j = 0; j < numsSize; j++) {
		if (nums[i] != nums[j]) {
			i++;
			nums[i] = nums[j];			
		}
		else {
		}
	}
	return i+1;
}

int showArr(int *nums,int numsSize) {
	printf("start showing array: %d [", numsSize);
	int i;
	for ( i = 0; i < numsSize; i++) {
		printf("%d ", nums[i]);
	}
	printf("]\r\n");

	return i;
}

int main() {
	int nums[13] = {1,2,2,2,2,2,2,3,3,3,3,3,3};
	int size = showArr(nums, 13);
	int res = removeDuplicates(nums, size);
	showArr(nums, res);


	getchar();
	return 0;
}
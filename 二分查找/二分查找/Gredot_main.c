#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int key = 3;
	int left = 0;
	int right = sizeof(arr)/sizeof(arr[0])-1; // right位置的数据可以取到
 
	while(left<=right) // right位置有数据，必须要添加=号
	{
		int mid = left+(right-left)/2;
		if(arr[mid]>key) // key小于中间位置数据，说明key可能在左半侧，需要改变右边界
		{
			right = mid-1; // right位置的数据可以取到，因此right=mid-1
		}
		else if(arr[mid]<key)// key大于中间位置数据，说明key可能在右半侧，需要改变左边界
		{
			left = mid+1; // left位置的数据可以取到，因此left=mid+1
		}
		else
		{
			printf("找到了，下标是：%d\n", mid);
      break;
		}
	}
	if(left>right)
		printf("找不到\n");
	return 0;
}
 
void swap_arr(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;
	int tmp = 0;


	while (left < right)
	{
		// 从前往后，找到一个偶数，找到后停止
		while ((left < right) && (arr[left] % 2 == 1))
		{
			left++;
		}

		// 从后往前找，找一个奇数，找到后停止
		while ((left < right) && (arr[right] % 2 == 0))
		{
			right--;
		}

		// 如果偶数和奇数都找到，交换这两个数据的位置
		// 然后继续找，直到两个指针相遇
		if (left < right)
		{
			tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
		}
	}
}
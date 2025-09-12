#include <stdio.h>

int	dicho(int x, int v[], int n)
{
	int	max;
	int	min;
	int	mid;

	max = n - 1;
	min = 0;
	mid = -1;

	while ((min <= max) && (x != v[mid]))
	{
		mid = (max + min) / 2;
		if (x < v[mid])
			max = mid - 1;
		else
			min = mid + 1;
	}
	return (x == v[mid]) ? v[mid] : -1;
}

int	main()
{
	int	arr[] = {1,2,3,4,7,9,13,15,27,98};
	int	val = dicho(2, arr, 10);
	printf("%d\n", val);
}
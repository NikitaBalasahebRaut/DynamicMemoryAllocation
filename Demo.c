#include<stdio.h>
#include<stdlib.h>

int main()
{
	int size = 0;
	int i = 0;
	int sum = 0;
	int *arr = NULL;

	printf("enter the no elements");
	scanf("%d", &size);
	arr = (int*)malloc(size * sizeof(int));

	if (arr == NULL)
	{
		printf("unable to allocate the memory");
		return -1;
	}

	printf("enter the values");
	for (i = 0; i < size; i++)
	{
		scanf("%d", &arr[i]);
	}

	printf("enterd element are");
	for (int i = 0; i < size; i++)
	{
		printf("%d", arr[i]);
	}

	//sumation of the elements
	for (i = 0; i < size; i++)
	{
		sum = sum + arr[i];
	}
	printf("addition is%d", sum);
	free(arr);
	return 0;

}


#include"array.h"
int main(void)
{
	int cnt = 0, i;
	Array a = array_creat(2);

	printf("你可以输入需要储存的整数：");

	while (scanf("%d", array_at(&a, cnt++)) == 1)
	{
		printf("当前数组长度为:%d\n", array_size(&a));
		printf("你可以继续输入数字，也可以输入其他字符来退出。\n");
	}
	printf("你一共输入了%d个数字。\n数组中数据为：\n", cnt - 1);
	for (i = 0; i < cnt - 1; i++)
		printf("%d ", *array_at(&a, i));
	printf("\n");
	array_free(&a);
	system("pause");
	return 0;
}
#include"array.h"
int main(void)
{
	int cnt = 0, i;
	Array a = array_creat(2);

	printf("�����������Ҫ�����������");

	while (scanf("%d", array_at(&a, cnt++)) == 1)
	{
		printf("��ǰ���鳤��Ϊ:%d\n", array_size(&a));
		printf("����Լ����������֣�Ҳ�������������ַ����˳���\n");
	}
	printf("��һ��������%d�����֡�\n����������Ϊ��\n", cnt - 1);
	for (i = 0; i < cnt - 1; i++)
		printf("%d ", *array_at(&a, i));
	printf("\n");
	array_free(&a);
	system("pause");
	return 0;
}
#include "array.h"
#define BLOCK 5
Array array_creat(int init_size)
{
	Array a;
	a.array = (int*)malloc(sizeof(int)*init_size);
	a.size = init_size;
	return a;
}
void array_free(Array *a)
{
	free(a->array);
	a->array = NULL;
	a->size = 0;
}
int array_size(const Array *a)
{
	return a->size;
}
int* array_at(Array *a, int index)
{
	if (index >= a->size)
		array_inflate(a, (index/BLOCK+1)*BLOCK - a->size);
	return &(a->array[index]);
}
void array_inflate(Array *a, int more_size)
{
	int *p = (int *)malloc(sizeof(int)*(a->size + more_size));
	int i;
	for (i = 0; i < a->size; i++)
		p[i] = a->array[i];
	free(a->array);
	a->array = p;
	a->size += more_size;
}
#ifndef _MERGE_SORT_
#define _MERGE_SORT_

#define real(x) (x-1)
#define MERGE_SORT(ARRAY, BEGIN, END) do { \
	merge_sort(ARRAY, BEGIN+1, END+1); \
} while(0)
void merge_sort(int *array, int begin, int end);
void merge(int *array, int begin, int middle, int end);

#endif /* _MERGE_SORT_ */

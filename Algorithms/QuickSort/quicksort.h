#ifndef _QUICKSORT_H_
#define _QUICKSORT_H_

#define realpos(x) (x-1)
#define virtpos(x) (x+1)
#define QUICK_SORT(A, INDEX, TAIL) do { \
	quicksort(A, virtpos(INDEX), virtpos(TAIL)); \
} while(0)

extern void exchange(int *former, int *latter);
extern int partition(int *array, int index, int tail);
extern void quicksort(int *array, int index, int tail);

#endif /* _QUICKSORT_H_ */

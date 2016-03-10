#ifndef _HEAPSORT_H_
#define _HEAPSORT_H_

extern void heap_sort(int *array, int size);
extern void build_heap(int *array, int size);
extern int parent(int i);
extern int left(int i);
extern int right(int i);
extern void max_heapify(int *box, int indice, int size);

#define realpos(x) (x-1)

#endif /* _HEAPSORT_H_ */

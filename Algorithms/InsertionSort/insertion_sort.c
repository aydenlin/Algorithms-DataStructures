
void insertion_sort(int *ptr, int total) {
	int i, j, middle;
	for (j = 1; j < total; j++) {
		middle = ptr[j];
		i = j - 1;
		while (i >= 0 && ptr[i] > middle) {
			ptr[i+1] = ptr[i];
			i--;
		}
		ptr[i+1] = middle;
	}
}

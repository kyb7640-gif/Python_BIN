#include <stdio.h>
int heap[100001] = {0};
int heap_size = 0;

void push(int data) {
	int i = ++heap_size;

	while (i > 1 && data < heap[i / 2]) {
		heap[i] = heap[i / 2];
		i /= 2;
	}
	heap[i] = data;
}

int pop() {
	if (heap_size == 0) return 0;
	int min = heap[1];
	int last = heap[heap_size--];
	int parent = 1;
	int child = 2;

	while (child <= heap_size) {
		if (child < heap_size && heap[child]>heap[child + 1]) {
			child++;
		}
		if (last <= heap[child]) break;

		heap[parent] = heap[child];
		parent = child;
		child *= 2;
	}

	heap[parent] = last;
	return min;
}

int main(void) {
	int N,i,num;

	scanf("%d", &N);

	for (i = 0; i < N; i++) {
		scanf("%d", &num);
		if (num == 0) {
			printf("%d\n",pop());
		}
		else {
			push(num);
		}
	}

	return 0;
}
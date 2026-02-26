#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	int K, N, i;
	int max_len = 0;
	long long high = 0;
	long long low = 1;
	long long cnt = 0;
	int j = 1;
	int line[10000] = { 0 };

	scanf("%d %d", &K, &N);

	for (i = 0; i < K; i++) {
		scanf("%d", &line[i]);
		if (line[i] > high) {
			high = line[i];
		}
	}



	while (low<=high) {
		cnt = 0;
		long long mid = (high + low) / 2;
		for (int i = 0; i < K; i++) {
			cnt += (line[i] / mid);
		}
		if (cnt >= N) {
			max_len = mid;
			low = mid + 1;
		}
		else {
			high = mid - 1;
		}
	}

	printf("%d", max_len);

	return 0;
}
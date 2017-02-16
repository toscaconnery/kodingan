#include <stdio.h>
#include <stdlib.h>

int main() {
	long long int arr[5];
	long long int min, max;
	int i;
	long long int totalmin, totalmax, total;
	min = 1000000001;
	max = 0;
	total = 0;
	for(i=0; i<5; i++) {
		scanf("%lld", &arr[i]);
		if(arr[i] < min) {
			min = arr[i];
		}
		if(arr[i] > max) {
			max = arr[i];
		}
		total = total + arr[i];		
	}
	totalmin = total - max;
	totalmax = total - min;
	
	printf ("%lld %lld\n", totalmin, totalmax);
	
	return 0;
}

#include<stdio.h>
#include<stdlib.h>

int main() {
	int s,t;
	int a,b;
	int m,n; /*apple and orange*/
	int i;
	int x;
	int apple, orange;
	
	apple = 0;
	orange = 0;
	
	scanf("%d %d", &s, &t);
	scanf("%d %d", &a, &b);
	scanf("%d %d", &m, &n);
	for(i=0; i<m; i++) {
		scanf("%d", &x);
		if((x >= s-a) && (x <= t-a)) {
			apple++;
		}
	}
	for(i=0; i<n; i++) {
		scanf("%d", &x);
		if((x <= ((b-t)*-1)) && (x >= (b-s)*-1)) {
			orange++;
		}
	}
	printf("%d\n%d\n",apple,orange);
	
	return 0;
}

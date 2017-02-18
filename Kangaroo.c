#include<stdio.h>
#include<stdlib.h>

int main() {
	int x1,x2,v1,v2;
	int i;
	int meet;
	int jarak,jarakbaru;
	scanf("%d %d %d %d",&x1, &v1, &x2, &v2);
	i = 1;
	meet = 0;
	jarak = abs(x1 - x2);
	while(i == 1) {
		if(x1 == x2) {
			i = 0;
			meet = 1;
		}
		else {
			x1 = x1 + v1;
			x2 = x2 + v2;
			jarakbaru = abs(x1 - x2);
			if(jarakbaru >= jarak) {
				meet = 0;
				i = 0;
			}
			else {
				jarak = jarakbaru;
			}
		}
	}
	if(meet == 1) {
		printf("YES\n");
	}
	else {
		printf("NO\n");
	}
	return 0;
}

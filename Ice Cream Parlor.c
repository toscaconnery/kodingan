/* 	Creator: Tosca Yoel Connery */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int m,t,i,j,n;
	int palingdekat;
	int temp1, temp2;
	int pilih1, pilih2;
	int cost[10005];
	
	scanf("%d", &t);
	while(t) {
		scanf("%d", &m);
		scanf("%d", &n);
		palingdekat = 10000;
		
		//Membaca harga
		for(i=1; i<=n; i++) {
			scanf("%d", &cost[i]);
		}
		
		//Mencari harga yang pas
		for(i=1; i<n; i++) {
			temp1 = cost[i];
			for(j=i+1; j<=n; j++) {
				temp2 = cost[j];
				if( ((m-(temp1 + temp2)) < palingdekat) && (temp1 + temp2 <= m) ) {
					palingdekat = m - (temp1 + temp2);
					pilih1 = i;
					pilih2 = j;
				}
			}
		}
		printf("%d %d\n", pilih1, pilih2);
		
		t--;
	}
	
	return 0;
}

/*	Creator: Tosca Yoel Connery */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int i,j,t;
	char kata1[10005], kata2[10005];
	int panjang;
	int funny;
	int temp1, temp2;
	
	scanf("%d", &t);
	while(t) {
		scanf("%s", kata1);
		panjang = strlen(kata1);
		
		//Membuat R
		for(i=0; i<panjang; i++) {
			kata2[panjang-i-1] = kata1[i];
		}
		
		funny = 1;
		//Menghitung nilai kesamaan
		for(i=1; i<panjang; i++) {
			temp1 = abs(kata1[i] - kata1[i-1]);
			temp2 = abs(kata2[i] - kata2[i-1]);
			if(temp1 != temp2) {
				funny = 0;
			}
		}
		if(funny) {
			printf("Funny\n");
		}
		else {
			printf("Not Funny\n");
		}
		
		t--;
	}
	
	return 0;
}

/*	Creator: Tosca Yoel Connery */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
	int i;
	int panjang;
	char kata1[100005];
	char karakter[27] = { 0 };
	int ganjil = 0;
	
	scanf("%s", kata1);
	panjang = strlen(kata1);
	
	//Menghitung jumlah dari tiap huruf
	for(i=0; i<panjang; i++) {
		karakter[kata1[i] - 96] ++;
	}
	
	for(i=1; i<=26; i++) {
		if(karakter[i] % 2 == 1) {
			ganjil++;
		}
	}
	
	if(ganjil > 1) {
		printf("NO\n");
	}
	else {
		printf("YES\n");
	}
	
	return 0;
}

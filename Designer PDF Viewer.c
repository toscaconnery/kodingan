#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int halphabet[26];
	int maxtinggi = 0;
	char word[10000];
	int luas = 0;
	int counter = 0;
	int panjang;
	int i;
	
	for(i=0; i<26; i++) {
		scanf("%d", &halphabet[i]);
	}
	
	scanf (" %[^\n]s", word);
	panjang = strlen(word);

	for(i=0; i<=panjang; i++) {
		if(halphabet[word[i] - 97] > maxtinggi) {
			maxtinggi = halphabet[word[i] - 97];
		}
		if(isalpha(word[i])) {
			counter++;
		}
		else {
			luas = luas + (counter * maxtinggi);
			maxtinggi = 0;
			counter = 0;
		}
	}
	printf("%d\n", luas);
	
	return 0;
}

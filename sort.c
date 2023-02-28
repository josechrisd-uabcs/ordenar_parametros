#include <stdio.h>

char compare_str(char* a, long unsigned int len_a, char* b, long unsigned int len_b){
	int i = 0;
	int min_len = len_a;

	if(len_a > len_b) min_len = len_b;

	while(i < min_len){
		if(a[i] > b[i]) return -1;
		if (a[i] < b[i]) return 1;
		i++;
	}

	if(len_a > len_b) return -1;
	if(len_a < len_b) return 1;

	return 0;
}

long unsigned int strlen(char* str){
	long unsigned int l = 0;
	while(str[l]) l++;
	return l;
}

void sort(char* args[], long unsigned int len){
	long unsigned int gap = len >> 1;
	long unsigned int i, j;
	while(gap){
		for (i = gap; i < len; ++i){
			char *aux = args[i];
			for(j = i; (j >= gap) && (compare_str(aux, strlen(aux), args[j - gap], strlen(args[j - gap])) > 0); j-=gap){
				args[j] = args[j - gap];
			}
			args[j] = aux;
		}
		gap = gap >> 1;
	}
}



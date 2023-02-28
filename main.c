#include <stdio.h>
#include "sort.c"

int main(int argc, char *argv[]) {
	int i = 1;
	sort(argv, argc);
	while(argv[i]) printf("%s\n", argv[i++]);
	return 0;
}


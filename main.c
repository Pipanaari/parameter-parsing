#include <stdio.h>
#include <string.h>

int main(int arg_count, char **argv){

	int change = 0;
	for(int i = 1; i < arg_count; i++){
		if(strcmp(argv[i], "add") == 0){
			printf("added\n");
			change = 1;
		}
		if(strcmp(argv[i], "status") == 0){
			printf("status\n");
			change = 1;
		}
	}
	if (change == 0){
		printf("input \"add\" or \"status\"");
		return 1;
	}
	return 0;
}

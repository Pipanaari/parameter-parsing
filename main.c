#include <stdio.h>
#include <string.h>

int main(int arg_count, char **argv){

	if(arg_count == 1){
		printf("input \"add\" or \"status\"");
		return 1;
	}

	for(int i = 1; i < arg_count; i++){
		if(strcmp(argv[i], "add") == 0){
			printf("added\n");
		}
		if(strcmp(argv[i], "status") == 0){
			printf("status\n");
		}
	}
	return 0;
}

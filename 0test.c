#include <stdio.h>
#include <assert.h>

int main(){
	int age =25;
	assert (age < 0);
	int* ptr = NULL;
	assert(ptr == NULL);
	return 0;
}

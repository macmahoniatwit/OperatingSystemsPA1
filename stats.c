#include "stats.h" // Include user header file
#include <stdlib.h> // For NULL


float two_averages(int a, int b) {
	float avg = 0;
    avg = (float)(a+b)/2.0;
	return avg;
}
float array_averages(int* array, int array_len) {
	float avg = 0;
	int sum = 0;
	if(array_len == 0){
		return 0.0;
	} if else (array == NULL){
		return -1;
	} else {
	   for (int i = 0; i < array_len; i++){
		sum +=  array[i];
		}
		avg = (float) sum/array_len;
		return avg;
		}
	return 0.0;
}

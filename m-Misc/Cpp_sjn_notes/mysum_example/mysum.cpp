/**
 * Compute the sum an array
 * @param n		:number of elements
 * @param array :input array
 * @return sum
 */
#include "dataType.h"

extern "C" // required when using c++ compiler
long long mysum(int n, int *array) {
	// return type is 64 bit integer
	long long res = 0;
	for(int i = 0; i < n; i++) {
		res += array[i];
	}
	return res;
}

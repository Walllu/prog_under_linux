#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include "randu.h"
#include "test.h"
#include "MT.h"

//For setting the max loops we do in the period test
#define LOOPS 1000000000UL

//Test our three generators with period, spectral tests.
int main(void) {

	FILE * file;

	long seed = time(NULL);

	//seed PRNGs here
	srandu(seed);
	init_genrand(seed);
	srand(seed);


	//period tests here
	printf("The Period of function randu(), with seed %ld is %ld\n", seed, test_period(randu, LOOPS));
	//printf("The Peiod of function genrand_int32(), with seed %ld is %ls\n", seed, test_period(genrand_int32, LOOPS));


	//spectral tests here
	file = fopen("randuspectral.dat", "w");
	test_spectral(randu, 100000, 3, file);
	fclose(file);
	file = fopen("MTspectral.dat", "w");
	test_spectral(genrand_int32, 100000, 3, file);
	fclose(file);
	file = fopen("randspectral.dat", "w");
	test_spectral(rand, 100000, 3, file);
	fclose(file);

	//roulette test here
	file = fopen("randuroulette.dat", "w");
	test_roulette(randu, 10000000, 36, file);
	fclose(file);
	file = fopen("MTroulette.dat", "w");
	test_roulette(genrand_int32, 10000000, 36, file);
	fclose(file);
	file = fopen("randroulette.dat", "w");
	test_roulette(rand, 10000000, 36, file);
	fclose(file);
	

	// The MT PRNG seems to be the best out of the three
	// It has low devation from the mean, on the order of 10⁻5
	// The built-in rand PRNG is second, showing higher deviation from the mean
	// Both of the above look well dispersed in the their spectral tests, 
	// showing low correlation to their output
	// The randu PRNG was the worst, showing high deviation from the mean
	// as well as clear correlation in the spectral plot, showing planes of points
	return 0; 
}


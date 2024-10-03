#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#define BLOCK_SIZE 16
#define ROUNDS 10

// Source: https://nvlpubs.nist.gov/nistpubs/FIPS/NIST.FIPS.197-upd1.pdf
// AES-128 does 10 rounds
char* encrypt(char* data, char* key){
	char* state = calloc(BLOCK_SIZE, 1);
	char i;
	//KeyExpansion(key)
	for (i = 0; i < BLOCK_SIZE; i++) {
		state[i] = data[i];
	}
	// state = addroundkey(state, keyexpansion[0...3]
	for (i = 0; i < ROUNDS - 2; i++) {
		//SubBytes(state)
		//ShiftRows(state)
		//MixColumns(state)
		// addrounkey(state, keyexpansion[4*i...(4*i) + 3]
	}
	//SubBytes(state)
	//ShiftRows(state)
	//AddRoundKey(state, Keyexpansion[4*ROUNDS, 4*Rounds + 1 ... 4* Rounds + 3]
	

	return state;
}

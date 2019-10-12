#include "stdio.h"
#include "stdlib.h"

int multiplyBy8(int v)
{
	
	return v << 3;
}

int setBit6to1(int v)
{
	
	return v | (1 << 6);
}

int setBit3to0(int v)
{
	
	return (v & ~(1 << 3));
}
	
int flipBit5(int v)
{
	
	return v ^ (1 << 5);
}
	
int ifBit7is0(int v)
{
	// TODO: check to see if bit 7 is a 0 - return 1 if true, 0 if false
	
	if (((v >> 7) & 1) == 1){
		return 0;
	}else{
		return 1;
	}
}

int ifBit3is1(int v)
{
	// check to see if bit 3 is a 1 - return 1 if true, 0 if false

	return ((v >> 3) & 1) ;
		
}

int unsignedBits0through5(int v)
{
	// return the unsigned value in bits 0 through 5
	
	return v & 63;
}

int unsignedBits6through9(int v)
{
	// return the unsigned value in bits 6 through 9

	return (v & (15 << 6)) >> 6;
}

int signedBits0through5(int v)
{
	// return the signed value in bits 0 through 5
	return v;
}

int signedBits6through9(int v)
{
	// return the signed value in bits 6 through 9
	return v;
}

int setBits4through9(int v, int setValue)
{
	// set bits 4 through 9 in v to become setValue
	
	return v;
}





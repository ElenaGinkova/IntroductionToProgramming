#include <iostream>

bool isBitUp(uint8_t num, int indx)
{
	uint8_t mask = 1;
	mask = mask << indx;
	return num & mask;
}

uint8_t bitUp(uint8_t num, int indx)
{
	uint8_t mask = 1 << indx;

	return num | mask;
}

uint8_t bitDown(uint8_t num, int indx)
{
	uint8_t mask = 1 << indx;
	mask = ~mask;

	return num & mask;
}

uint8_t toggleBit(uint8_t num, int indx)
{
	uint8_t mask = 1 << indx;

	return num ^ mask;
}


int main()
{
	return 0;
}

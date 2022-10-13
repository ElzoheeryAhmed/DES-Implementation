#include <stdio.h>
#include <iostream>

#include <time.h>

using namespace std;

void convertToBinary(unsigned long long n)
{
	if (n / 2 != 0)
	{
		convertToBinary(n / 2);
	}
	printf("%d", n % 2);
}

unsigned long long shift_left_cir(unsigned long long k, int shifts)
{
	unsigned long long m1, m2, m3;
	m3 = 0b01111111111111111111111111111;
	m1 = k;
	for (int i = 0; i < shifts; i++)
	{
		m2 = (m1 >> 27);
		m1 = (m1 << 1);
		m1 = (m1 & m3);
		m1 = (m1 ^ m2);
	}
	return m1;
}

int main()
{
	unsigned long long n = 0b1111001010100001110011001001;

	unsigned long long out = shift_left_cir(n, 3);

	convertToBinary(out);
}
/**
 * flip_bits - returns number of bits needed to flip to get a num
 * @n: number to move from
 * @m: number to move to
 * Return: number of bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int num = 1UL;
	int i = 0, counter = 0, size = sizeof(unsigned long int) * 8;

	n ^= m;
	do
	{
		if (num & n)
			counter++;
		i++;
		num = num << 1;


	}while(i < size);

	return (counter);
}

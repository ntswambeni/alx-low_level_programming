/**
 * get_endianness - checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int num = 1U;
	char *c = (char *)&num;

	return ((int)*c);
}

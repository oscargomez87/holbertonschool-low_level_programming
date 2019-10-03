/**
 * reverse_array - reverses the content of an array of integers.
 * @a: array to reverse
 * @n: size of array
 */
void reverse_array(int *a, int n)
{
	int i, tmp;
	int *start, *end;

	start = a;
	end = a;
	end = end + (n - 1);
	for (i = 0; i < n / 2; i++)
	{
		tmp = *end;
		*end = *start;
		*start = tmp;
		end--;
		start++;
	}
}

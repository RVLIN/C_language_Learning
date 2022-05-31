#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	double string_length=3000;
	int count,sum=0;
	while (string_length > 5)
	{
		count=fmod(string_length,2);
		string_length/=2;
		string_length+=count;
		sum++;
	}

	printf("%d day\n",sum);

	return 0;
}

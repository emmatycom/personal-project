#include <stdlib.h>
#include <time.h>

/* more headers goes there */

/* betty style doc for function main goes there */

int main(void)
{
	int n;

	srand(time(0));
	n = rand();
if(n > 0)
{
	printf("%d is Positive \n", n);
	}
else if(n < 0)
{
    printf("%d is Negative \n", n);
}

else
 {
     printf("%d is Zero \n", n);
}

	return (1);
}

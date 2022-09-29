#include <stdio.h>
#include <time.h>

int	main()
{
	int	n, counter, valor;
	srand(time(NULL));
	
	counter = 1;
	
	while(counter <= 10)
	{
		n = (rand(1) % 10) + 1;
		printf("Quanto e 4 x %d?\n", n);
		scanf("%d", &valor);
		counter++;
	}
	return (0);
}

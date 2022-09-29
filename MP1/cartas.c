#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const char	ACE = 'A';
const char	KING = 'K';
const char	QUEEN = 'Q';
const char	JOCKEY = 'J';

typedef	struct	Carta
{
	int	valor[13];
	int	naipe[4];
}carta;

int	main()
{
	int	k, m;
	carta	baralho[52];
	
	for(k = 1; k <= 4; k++)
	{
		for(m = 1; m <= 13; m++)
		{
			baralho[m].valor;
			if(m == 1)
			{
				m == ACE;
			}
			if(m == 11)
			{
				m == JOCKEY;
			}
			if(m == 12)
			{
				m == QUEEN;
			}
			if(m ==  13)
			{
				m == KING;
			}
			else
			{
				baralho[m].valor == m;
			}
		}
		baralho[k].naipe == k;
	}




	printf("%s", baralho);
	return (0);
}

/*
** my_aff_comb2.c for Jour01 in /home/vitiel_s/PiscineC/Jour01/my_aff_comb2
** 
** Made by VITIELLO Sullivan
** Login   <vitiel_s@etna-alternance.net>
** 
** Started on  Mon Sep 28 16:30:35 2015 VITIELLO Sullivan
** Last update Mon Sep 28 17:30:06 2015 VITIELLO Sullivan
*/

void	my_putchar(char c);

void	my_putcomb(int a)
{
  if (a >= 10)
    {
      my_putcomb(a / 10);
      my_putcomb(a % 10);
    }
  else
    my_putchar(a + '0');
}

void	my_reduceline(char a, char b)
{
  if (a < 10)
    {
      my_putchar(48);
    }
  my_putcomb(a);
  my_putchar(32);
  if (b < 10)
    {
      my_putchar(48);
    }
  my_putcomb(b);
  my_putchar(',');
  my_putchar(32);
}

void	my_aff_comb2()
{
  int	a;
  int	b;

  a = 0;
  b = 1; 
  while (a < 99)
    {
      while (b < 100)
	{
	  if (a == 98 && b == 99)
	    {
	      my_putcomb(a);
	      my_putchar(32);
	      my_putcomb(b);
	      my_putchar('\n');
	    }
	  else
	    my_reduceline(a, b);
	  b++;
	}
      a++;
      b = a + 1;
    }
}

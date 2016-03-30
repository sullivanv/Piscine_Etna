/*
** my_aff_comb.c for Jour01 in /home/vitiel_s/PiscineC/Jour01/my_aff_comb
** 
** Made by VITIELLO Sullivan
** Login   <vitiel_s@etna-alternance.net>
** 
** Started on  Mon Sep 28 14:32:27 2015 VITIELLO Sullivan
** Last update Mon Sep 28 16:13:27 2015 VITIELLO Sullivan
*/

void	my_putchar(char c);

void	my_galere(char z, char y, char x)
{
  if (z == '7' && y == '8' && x == '9')
    {
      my_putchar('7');
      my_putchar('8');
      my_putchar('9');
      my_putchar('\n');
    }
  else
    {
      my_putchar(z);
      my_putchar(y);
      my_putchar(x);
      my_putchar(',');
      my_putchar(32);
    }
}

void	my_aff_comb()
{
  char	x;
  char	y;
  char	z;

  z = 48;
  y = 49;
  x = 50;
  while (z < '8')
    {
      while (y < '9')
	{
	  while (x < ':')
	    {
	      my_galere(z, y, x);
	      x++;
	    }
	  y++;
	  x = y + 1;
	}
      z++;
      y = z + 1;
      x = y + 1;
    }
}

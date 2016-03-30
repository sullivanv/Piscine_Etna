/*
** my_put_nbr.c for Libmy in /home/vitiel_s/PiscineC/libmy_01
** 
** Made by VITIELLO Sullivan
** Login   <vitiel_s@etna-alternance.net>
** 
** Started on  Fri Oct  2 12:37:08 2015 VITIELLO Sullivan
** Last update Sat Oct  3 18:11:16 2015 VITIELLO Sullivan
*/

void	my_putchar(char c);

void	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      my_putchar(str[i]);
      i++;
    }
}

void	my_put_nbr(int nbr)
{
  if (nbr == -2147483648)
    my_putstr("-2147483648");
  else
    {
      if (nbr < 0)
	{
	  nbr = nbr * (-1);
	  my_putchar('-');
	}
      if (nbr >= 10)
	{
	  my_put_nbr(nbr / 10);
	  my_put_nbr(nbr % 10);
	}
      else
	my_putchar(nbr + 48);
    }
}

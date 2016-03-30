/*
** my_detect_format.c for Jour03 in /home/vitiel_s/PiscineC/Jour03/my_detect_format
** 
** Made by VITIELLO Sullivan
** Login   <vitiel_s@etna-alternance.net>
** 
** Started on  Wed Sep 30 16:36:04 2015 VITIELLO Sullivan
** Last update Wed Sep 30 20:16:45 2015 VITIELLO Sullivan
*/

void	my_putchar(char c);

void	my_put_format(int x, int y, int j, char *str)
{
  while (str[j] && str[j] != 32)
    {
      while (str[j] != 32 && str[j])
	{
	  my_putchar(str[j]);
	  j++;
	}
      write(1, " => ", 4);
      if (x % 13 == 0 && y == 0)
	write(1, "Mot", 3);
      else if (y % 13 == 0 && x == 0)
	write(1, "Chiffre", 7);
	else
	  write(1, "Inconnu", 7);
      if (str[j] == 32 || str[j] == '\0')
	my_putchar('\n');
      else
	j++;
    }
}

void	my_detect_format(char *str)
{
  int	i;
  int	x;
  int	y;
  int	j;

  i = 0;
  while (str[i])
    {
      x = 0;
      y = 0;
      j = i;
      while (str[i] != 32 && str[i])
	{
	  if ((str[i] > 64 && str[i] < 91) || (str[i] > 96 && str[i] < 123))
	    x = x + 13;
	  else if (str[i] > 47 && str[i] < 58)
	    y = y + 13;
	  else
	   y = y + 1;
	  i++;
	}
      if (str[i] == 32)
	i++;
      my_put_format(x, y, j, str);
    }
}

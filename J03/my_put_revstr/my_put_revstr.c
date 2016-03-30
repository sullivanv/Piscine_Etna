/*
** my_put_revstr.c for Jour03 in /home/vitiel_s/PiscineC/Jour03/my_put_revstr
** 
** Made by VITIELLO Sullivan
** Login   <vitiel_s@etna-alternance.net>
** 
** Started on  Wed Sep 30 11:04:39 2015 VITIELLO Sullivan
** Last update Wed Sep 30 16:33:11 2015 VITIELLO Sullivan
*/

void	my_putchar(char c);

void	my_put_revstr(char *str)
{
  int	i;
  int	j;
  char	c;
  int	z;

  i = 0;
  j = 0;
  while (str[i + 1] != '\0')
      i++;
  z = (i + 1) / 2;
  while (z != 0)
    {
      c = str[j];
      str[j] = str[i];
      str[i] = c;
      j++;
      i--;
      z--;
    }
  i = 0;
  while (str[i] != '\0')
    {
    my_putchar(str[i]);
    i++;
    }
}

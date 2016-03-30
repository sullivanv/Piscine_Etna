/*
** my_getnbr.c for Jour05 in /home/vitiel_s/PiscineC/Jour05/my_getnbr
** 
** Made by VITIELLO Sullivan
** Login   <vitiel_s@etna-alternance.net>
** 
** Started on  Fri Oct  2 14:41:43 2015 VITIELLO Sullivan
** Last update Fri Oct  2 15:23:38 2015 VITIELLO Sullivan
*/

int	my_getnbr(char *str)
{
  int	i;
  int	s;
  int	r;

  r = 0;
  i = 0;
  s = 0;
  while (str[i] == '+' || str[i] == '-')
    {
      if (str[i] == '-')
	s++;
      i++;
    }
  if (str[i] < 48 || str[i] > 57)
    return (0);
  while (str[i] > 47 && str[i] < 58)
    {
      r = r * 10 + (str[i] - 48);
      i++;
    }
  if (s % 2 == 1)
    return (-r);
  return (r);
}

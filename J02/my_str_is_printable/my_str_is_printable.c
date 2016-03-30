/*
** my_str_is_printable.c for Jour01 in /home/vitiel_s/PiscineC/Jour02/my_str_is_printable
** 
** Made by VITIELLO Sullivan
** Login   <vitiel_s@etna-alternance.net>
** 
** Started on  Tue Sep 29 13:27:23 2015 VITIELLO Sullivan
** Last update Tue Sep 29 13:54:10 2015 VITIELLO Sullivan
*/

int	my_str_is_printable(char str[])
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] < 32 || str[i] > 126)
	return (0);
      i++;
    }
  return (1);
}

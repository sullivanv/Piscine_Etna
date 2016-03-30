/*
** my_strlowcase.c for Jour01 in /home/vitiel_s/PiscineC/Jour02/my_strlowcase
** 
** Made by VITIELLO Sullivan
** Login   <vitiel_s@etna-alternance.net>
** 
** Started on  Tue Sep 29 12:03:08 2015 VITIELLO Sullivan
** Last update Tue Sep 29 12:12:12 2015 VITIELLO Sullivan
*/

char	*my_strlowcase(char str[])
{
  int	i;

  i = 0;
  while (str[i])
    {
      if (str[i] < 91 && str[i] > 64)
	str[i] = str[i] - 'A' + 'a';
      i++;
    }
  return (str);
}

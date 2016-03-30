/*
** my_strupcase.c for Jour01 in /home/vitiel_s/PiscineC/Jour02/my_strupcase
** 
** Made by VITIELLO Sullivan
** Login   <vitiel_s@etna-alternance.net>
** 
** Started on  Tue Sep 29 11:34:14 2015 VITIELLO Sullivan
** Last update Tue Sep 29 11:57:31 2015 VITIELLO Sullivan
*/

char	*my_strupcase(char str[])
{
  int	i;

  i = 0;
  while (str[i])
    {
      if (str[i] > 'a' && str[i] < 'z')
	str[i] = str[i] - 'a' + 'A';
      else
	i++;
    }
  return (str);
}

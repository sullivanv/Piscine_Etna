/*
** my_strcat.c for Jour04 in /home/vitiel_s/PiscineC/Jour04/my_strcat
** 
** Made by VITIELLO Sullivan
** Login   <vitiel_s@etna-alternance.net>
** 
** Started on  Thu Oct  1 14:49:33 2015 VITIELLO Sullivan
** Last update Fri Oct  2 17:52:20 2015 VITIELLO Sullivan
*/

char	*my_strcat(char *str1, char*str2)
{
  int	i;
  int	j;

  j = 0;
  i = 0;
  while (str1[i] != '\0')
    {
      i++;
    }
  while (str2[j] != '\0')
    {
      str1[i] = str2[j];
      i++;
      j++;
    }
  str1[i] = '\0';
  return (str1);
}

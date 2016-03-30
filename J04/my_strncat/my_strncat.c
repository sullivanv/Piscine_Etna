/*
** my_strncat.c for Jour04 in /home/vitiel_s/PiscineC/Jour04/my_strncat
** 
** Made by VITIELLO Sullivan
** Login   <vitiel_s@etna-alternance.net>
** 
** Started on  Thu Oct  1 15:00:17 2015 VITIELLO Sullivan
** Last update Thu Oct  1 15:06:01 2015 VITIELLO Sullivan
*/

char    *my_strncat(char *str1, char*str2, int n)
{
  int   i;
  int   j;

  j = 0;
  i = 0;
  while (str1[i] != '\0')
    {
      i++;
    }
  while (str2[j] != '\0' && j < n)
    {
      str1[i] = str2[j];
      i++;
      j++;
    }
  str1[i] = '\0';
  return (str1);
}

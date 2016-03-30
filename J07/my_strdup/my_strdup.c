/*
** my_strdup.c for Jour07 in /home/vitiel_s/PiscineC/Jour07/my_strdup
** 
** Made by VITIELLO Sullivan
** Login   <vitiel_s@etna-alternance.net>
** 
** Started on  Mon Oct  5 10:40:21 2015 VITIELLO Sullivan
** Last update Mon Oct  5 17:12:02 2015 VITIELLO Sullivan
*/

#include <stdlib.h>

int	my_strlen(char *str)
{
  int i;

  i = 0;
  while (str[i])
    {
      i++;
    }
  return (i);
}

char	*my_strdup(char *str)
{
  int	i;
  char	*ptr;

  ptr = malloc((my_strlen(str) * sizeof(*ptr)) + 1);
  if (str == 0)
    return (0);
  i = 0;
  while (str[i])
    {
      ptr[i] = str[i];
      i++;
    }
  ptr[i] = '\0';
  return (ptr);
}

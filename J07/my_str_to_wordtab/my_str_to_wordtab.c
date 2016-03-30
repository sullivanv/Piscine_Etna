/*
** my_str_to_wordtab.c for Jour07 in /home/vitiel_s/PiscineC/Jour07/my_str_to_wordtab
** 
** Made by VITIELLO Sullivan
** Login   <vitiel_s@etna-alternance.net>
** 
** Started on  Mon Oct  5 11:13:40 2015 VITIELLO Sullivan
** Last update Mon Oct  5 17:08:48 2015 VITIELLO Sullivan
*/

#include <stdlib.h>

char	**my_str_to_array(char *s, char **ptr)
{
  int	i;
  int	j;
  int	x;

  i = 0;
  j = 0;
  x = 0;
  while (s[x])
    {
      while (s[x] != 32 && s[x])
	{
	  if (s[x] >= '0' && s[x] <= '9')
	    ptr[i][j] = s[x];	
	  if ((s[x] >= 'a' && s[x] <= 'z') || (s[x] >= 'A' && s[x] <= 'Z'))
	    ptr[i][j] = s[x];
	  x++;
	  j++;
	}
      while (s[x] == 32)
	x++;
      if (s[x] != '\0')
	i++;
    }
  ptr[i][j] = '\0';
  return (ptr);
}

int	my_str_chiant(char *str, int j)
{
  int	i;

  i = 0;
  j = 1;
  while (str[i])
    {
      if (str[i] == 32)
	j++;
      while (str[i] == 32)
	i++;
      i++;
    }
  j++;
  return (j);
}

char	**my_str_to_wordtab(char *str)
{
  int	i;
  int	j;
  int	z;
  char **ptr;

  i = 0;
  z = 0;
  j = 0;
  j =  my_str_chiant(str, j);
  ptr = malloc((j * sizeof(char *) + 1));
  j = 0;
  while (str[i])
    {
      if (str[i] == ' ')
	{
	  z = i - z;
	  ptr[j] = malloc((z * sizeof(char)) + 1);
	  j++;
	}
      i++;
    }
  ptr[j] = malloc((z * sizeof(char)) + 1);
  my_str_to_array(str, ptr);
  return (ptr);
}

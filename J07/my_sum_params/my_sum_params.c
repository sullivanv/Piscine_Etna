/*
** my_sum_params.c for Jour07 in /home/vitiel_s/PiscineC/Jour07/my_sum_params
** 
** Made by VITIELLO Sullivan
** Login   <vitiel_s@etna-alternance.net>
** 
** Started on  Mon Oct  5 17:17:35 2015 VITIELLO Sullivan
** Last update Mon Oct  5 18:00:53 2015 VITIELLO Sullivan
*/

#include <stdlib.h>

int	my_num_params(int argc, char **argv)
{
  int	i;
  int	j;
  int	z;

  i = 0;
  j = 0;
  z = 0;
  while (i < argc)
    {
      while (argv[i][j])
	{
	  j++;
	}
      z = z + j;
      j = 0;
      i++;
    }
  return (z);
}

char	*my_sum_params(int argc, char **argv)
{
  int	i;
  int	j;
  int	z;
  char	*str;

  i = 0;
  j = 0;
  z = my_num_params(argc, argv);
  str = malloc(z * sizeof(char) + 1);
  z = 0;
  while (i < argc)
    {
      while (argv[i][j])
	{
	  str[z] = argv[i][j];
	  j++;
	  z++;
	}
      str[z] = '\n';
      z++;
      j = 0;
      i++;
    }
  return (str);
}

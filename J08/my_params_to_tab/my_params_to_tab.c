/*
** my_params_to_tab.c for Jour08 in /home/vitiel_s/PiscineC/Jour08/my_params_to_tab
** 
** Made by VITIELLO Sullivan
** Login   <vitiel_s@etna-alternance.net>
** 
** Started on  Tue Oct  6 10:29:22 2015 VITIELLO Sullivan
** Last update Tue Oct  6 15:26:15 2015 VITIELLO Sullivan
*/

#include "my_struct.h"
#include <stdlib.h>

int	my_strlen(char *str);
char    *my_strdup(char *str);
char    **my_str_to_wordtab(char *str);

struct	s_stock_par	*my_params_to_tab(int ac, char **av)
{
  int	i;
  struct s_stock_par	*sulli;

  sulli = malloc(ac * sizeof(*sulli) + 1);
  i = 0;
  while (i < ac)
    {
      sulli[i].size_param = my_strlen(av[i]);
      sulli[i].str = (av[i]);
      sulli[i].copy = my_strdup(av[i]);
      sulli[i].tab = my_str_to_wordtab(av[i]);
      i++;
    }
  sulli[i].str = NULL;
  return (sulli);
}

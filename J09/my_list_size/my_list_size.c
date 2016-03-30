/*
** my_list_size.c for Jour09 in /home/vitiel_s/PiscineC/Jour09/my_list_size
** 
** Made by VITIELLO Sullivan
** Login   <vitiel_s@etna-alternance.net>
** 
** Started on  Wed Oct  7 10:14:36 2015 VITIELLO Sullivan
** Last update Wed Oct  7 10:37:09 2015 VITIELLO Sullivan
*/

#include <stdlib.h>
#include "my_list.h"

int	my_list_size(t_list *begin)
{
  int	i;

  i = 1;
  while (begin->next != NULL)
    {
      begin = begin->next;
      i++;
    }
  return (i);
}

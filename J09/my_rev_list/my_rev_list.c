/*
** my_rev_list.c for Jour09 in /home/vitiel_s/PiscineC/Jour09/my_rev_list
** 
** Made by VITIELLO Sullivan
** Login   <vitiel_s@etna-alternance.net>
** 
** Started on  Wed Oct  7 10:39:46 2015 VITIELLO Sullivan
** Last update Wed Oct  7 17:57:33 2015 VITIELLO Sullivan
*/

#include "my_list.h"
#include <stdlib.h>

void	my_rev_list(t_list **begin)
{
  t_list	*prev;
  t_list	*list;
  t_list	*temp;

  temp = 0;
  prev = NULL;
  list = *begin;
  while (list != NULL)
    {
      if (list->next == NULL)
	*begin = list;
      temp = list->next;
      list->next = prev;
      prev = list;
      list = temp;
    }
}

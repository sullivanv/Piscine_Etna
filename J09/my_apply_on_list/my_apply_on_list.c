/*
** my_apply_on_list.c for Jour09 in /home/vitiel_s/PiscineC/Jour09/my_apply_on_list
** 
** Made by VITIELLO Sullivan
** Login   <vitiel_s@etna-alternance.net>
** 
** Started on  Wed Oct  7 18:00:02 2015 VITIELLO Sullivan
** Last update Wed Oct  7 18:27:19 2015 VITIELLO Sullivan
*/

#include "my_list.h"
#include <stdlib.h>

void	my_apply_on_list(t_list *begin, int (*f)())
{
  t_list	*list_ptr;

  list_ptr = begin;
  while (list_ptr != NULL)
    {
      f(list_ptr->data);
      list_ptr = list_ptr->next;
    }
}

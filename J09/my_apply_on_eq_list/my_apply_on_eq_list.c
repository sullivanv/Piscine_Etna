/*
** my_apply_on_eq_list.c for Jour09 in /home/vitiel_s/PiscineC/Jour09/my_apply_on_eq_list
** 
** Made by VITIELLO Sullivan
** Login   <vitiel_s@etna-alternance.net>
** 
** Started on  Wed Oct  7 18:31:00 2015 VITIELLO Sullivan
** Last update Wed Oct  7 18:55:58 2015 VITIELLO Sullivan
*/

#include "my_list.h"
#include <stdlib.h>

void	my_apply_on_eq_list(t_list *begin, int(*f)(), void *data_ref, int (*cmp)())
{
  t_list	*list_ptr;

  list_ptr = begin;
  while (list_ptr != NULL)
    {
      if (cmp(list_ptr->data, data_ref) == 0)
	f(list_ptr->data);
      list_ptr = list_ptr->next;
    }
}

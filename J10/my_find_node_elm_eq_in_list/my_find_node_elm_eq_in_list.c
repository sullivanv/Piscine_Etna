/*
** my_find_node_elm_eq_in_list.c for Jour10 in /home/vitiel_s/PiscineC/Jour10/my_find_node_elm_eq_in_list
** 
** Made by VITIELLO Sullivan
** Login   <vitiel_s@etna-alternance.net>
** 
** Started on  Thu Oct  8 09:34:14 2015 VITIELLO Sullivan
** Last update Thu Oct  8 09:49:47 2015 VITIELLO Sullivan
*/

#include "my_list.h"
#include <stdlib.h>

t_list	*my_find_node_elm_eq_in_list(t_list *begin, void *data_ref, int(*cmp)())
{
  t_list	*list;

  list = begin;
  while (list != NULL)
    {
      if (cmp(list->data, data_ref) == 0)
	return (list->data);
      list = list->next;
    }
  return (0);
}

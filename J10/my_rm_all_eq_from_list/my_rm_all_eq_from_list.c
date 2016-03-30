/*
** my_rm_all_eq_from_list.c for Jour10 in /home/vitiel_s/PiscineC/Jour10/my_rm_all_eq_from_list
** 
** Made by VITIELLO Sullivan
** Login   <vitiel_s@etna-alternance.net>
** 
** Started on  Thu Oct  8 10:22:50 2015 VITIELLO Sullivan
** Last update Thu Oct  8 17:43:59 2015 VITIELLO Sullivan
*/

#include "my_list.h"
#include <stdlib.h>

t_list	*my_rm_list(t_list *begin, t_list *list)
{
  t_list	*tmp;

  while (begin != list)
    {
      tmp = begin;
      begin = begin->next;
    }
  tmp->next = list->next;
  free(list);
  return (tmp);
}

void	my_rm_all_eq_from_list(t_list **begin, void *data_ref, int (*cmp)())
{
  t_list	*list;
  t_list	*temp;


  if (cmp((*begin)->data, data_ref) == 0)
    {
      (*begin) = (*begin)->next;
      list = *begin;
    }
  else
    list = *begin;
  while (list != NULL)
    {
      if (cmp(list->data, data_ref) == 0)
	{
	  temp = list->next;
	  list = my_rm_list(*begin, list);
	  list = temp;
	}
      else
	list = list->next;
    }
}

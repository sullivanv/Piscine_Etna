/*
** my_add_list_to_list.c for Jour10 in /home/vitiel_s/PiscineC/Jour10/my_add_list_to_list
** 
** Made by VITIELLO Sullivan
** Login   <vitiel_s@etna-alternance.net>
** 
** Started on  Thu Oct  8 17:45:50 2015 VITIELLO Sullivan
** Last update Thu Oct  8 19:21:00 2015 VITIELLO Sullivan
*/

#include "my_list.h"
#include <stdlib.h>

void	my_add_list_to_list(t_list **begin1, t_list *begin2)
{
  t_list	*list;

  list = *begin1;
  if (list == NULL)
    *begin1 = begin2;
  else
    {
      while (list->next != NULL)
	list = list->next;
      list->next = begin2;
      list = *begin1;
    }
}

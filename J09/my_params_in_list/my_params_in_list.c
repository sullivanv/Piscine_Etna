/*
** my_params_in_list.c for Jour09 in /home/vitiel_s/PiscineC/Jour09/my_params_in_list
** 
** Made by VITIELLO Sullivan
** Login   <vitiel_s@etna-alternance.net>
** 
** Started on  Wed Oct  7 09:35:08 2015 VITIELLO Sullivan
** Last update Wed Oct  7 10:03:08 2015 VITIELLO Sullivan
*/

#include "my_list.h"
#include <stdlib.h>

t_list	*add_item(t_list *list, char *data)
{
  t_list	*node;

  node = malloc(sizeof(*node));
  if (node == NULL)
    return (0);
  node->next = list;
  node->data = data;
  return (node);
}

t_list	*my_params_in_list(int ac, char **av)
{
  t_list	*list;
  int	i;

  i = 0;
  list = NULL;
  while (i < ac)
    {
      list = add_item(list, av[i]);
      i++;
    }
  return (list);
}

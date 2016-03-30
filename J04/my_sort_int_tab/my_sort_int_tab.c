/*
** my_sort_int_tab.c for Jour04 in /home/vitiel_s/PiscineC/Jour04/my_sort_int_tab
** 
** Made by VITIELLO Sullivan
** Login   <vitiel_s@etna-alternance.net>
** 
** Started on  Thu Oct  1 09:13:28 2015 VITIELLO Sullivan
** Last update Thu Oct  1 13:17:07 2015 VITIELLO Sullivan
*/

void	my_sort_int_tab(int *tab, int size)
{
  int	i;
  int	c;

  c = 0;
  i = 0;
  while (i < size)
    {
      if(i + 1 != size)
	{
	  if (tab[i + 1] < tab[i])
	    {
	      c = tab[i];
	      tab[i] = tab[i + 1];
	      tab[i + 1] = c;
	      i = 0;
	    }
	  else
	    i++;
	}
      else
	i++;
    }
}

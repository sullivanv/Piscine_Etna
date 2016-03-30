/*
** my_fill_tab.c for Jour01 in /home/vitiel_s/PiscineC/Jour02/my_fill_tab
** 
** Made by VITIELLO Sullivan
** Login   <vitiel_s@etna-alternance.net>
** 
** Started on  Tue Sep 29 11:03:27 2015 VITIELLO Sullivan
** Last update Tue Sep 29 11:15:43 2015 VITIELLO Sullivan
*/

int	*my_fill_tab()
{
  static int	tab[100];
  int	i;

  i = 0;
  while (i < 100)
    {
      tab[i] = (i + 1);
      i++;
    }
  return (tab);
}

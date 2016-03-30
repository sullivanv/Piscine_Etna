/*
** my_tablen.c for Jour01 in /home/vitiel_s/PiscineC/Jour02/my_tablen
** 
** Made by VITIELLO Sullivan
** Login   <vitiel_s@etna-alternance.net>
** 
** Started on  Tue Sep 29 10:33:02 2015 VITIELLO Sullivan
** Last update Tue Sep 29 17:49:40 2015 VITIELLO Sullivan
*/

int	my_tablen(char tab[])
{
  int	i;

  i = 0;
  while (tab[i])
    {
      i++;
    }
  return (i);
}

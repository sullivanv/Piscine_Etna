/*
** my_nb_len.c for Jour01 in /home/vitiel_s/PiscineC/Jour01/my_nb_len
** 
** Made by VITIELLO Sullivan
** Login   <vitiel_s@etna-alternance.net>
** 
** Started on  Mon Sep 28 14:21:06 2015 VITIELLO Sullivan
** Last update Mon Sep 28 14:29:43 2015 VITIELLO Sullivan
*/

int	my_nb_len(int n)
{
  int	i;

  i = 1;
  while (n > 9 || n < -9)
    {
      n = n / 10;
      i++;
    }
  return (i);
}

/*
** my_rev_alpha.c for Jour01 in /home/vitiel_s/PiscineC/Jour01/my_rev_alpha
** 
** Made by VITIELLO Sullivan
** Login   <vitiel_s@etna-alternance.net>
** 
** Started on  Mon Sep 28 13:52:42 2015 VITIELLO Sullivan
** Last update Mon Sep 28 13:55:08 2015 VITIELLO Sullivan
*/

void	my_putchar(char c);

void	my_rev_alpha()
{
  char	i;

  i = 122;
  while (i > 96)
    {
      my_putchar(i);
      i--;
    }
}

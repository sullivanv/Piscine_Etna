/*
** my_aff_alpha.c for Jour01 in /home/vitiel_s/PiscineC/Jour01/my_aff_alpha
** 
** Made by VITIELLO Sullivan
** Login   <vitiel_s@etna-alternance.net>
** 
** Started on  Mon Sep 28 13:45:20 2015 VITIELLO Sullivan
** Last update Mon Sep 28 13:51:15 2015 VITIELLO Sullivan
*/

void	my_putchar(char c);

void	my_aff_alpha()
{
  char	i;

  i = 97;
  while (i < 123)
    {
      my_putchar(i);
      i++;
    }
}

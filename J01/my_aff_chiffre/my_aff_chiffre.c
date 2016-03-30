/*
** my_aff_chiffre.c for Jour01 in /home/vitiel_s/PiscineC/Jour01/my_aff_chiffre
** 
** Made by VITIELLO Sullivan
** Login   <vitiel_s@etna-alternance.net>
** 
** Started on  Mon Sep 28 14:05:12 2015 VITIELLO Sullivan
** Last update Mon Sep 28 14:09:36 2015 VITIELLO Sullivan
*/

void	my_putchar(char c);

void	my_aff_chiffre()
{
  char	c;

  c = 48;
  while (c < 58)
    {
      my_putchar(c);
      c++;
    }
}

/*
** my_prev_char.c for Jour01 in /home/vitiel_s/PiscineC/Jour01/my_prev_char
** 
** Made by VITIELLO Sullivan
** Login   <vitiel_s@etna-alternance.net>
** 
** Started on  Mon Sep 28 10:58:01 2015 VITIELLO Sullivan
** Last update Mon Sep 28 18:40:44 2015 VITIELLO Sullivan
*/

void	my_putchar(char c);

char	my_prev_char(char c)
{
  if (c == 65 || c == 97)
    {
      return (c + 25);
    }
  else if ((c > 65 && c <= 90) || (c > 97 && c < 123))
    {
      return (--c);
    }
  else
    {
      return (' ');
    }
}

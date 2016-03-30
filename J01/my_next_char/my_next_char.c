/*
** my_next_char.c for Jour01 in /home/vitiel_s/PiscineC/Jour01/my_next_char
** 
** Made by VITIELLO Sullivan
** Login   <vitiel_s@etna-alternance.net>
** 
** Started on  Mon Sep 28 10:14:29 2015 VITIELLO Sullivan
** Last update Mon Sep 28 12:12:04 2015 VITIELLO Sullivan
*/

void	my_putchar(char c);

char	my_next_char(char c)
{
  c++;
  if (c == 91 || c == 123)
    {
      c = c - 26;
    }
  if ((c < 65 || c > 122) || (c > 90 && c < 97))
    {
      return (' ');
    }
  else
    {
      return (c);
    }
}

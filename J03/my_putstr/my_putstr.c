/*
** my_putstr.c for Jour03 in /home/vitiel_s/PiscineC/Jour03/my_putstr
** 
** Made by VITIELLO Sullivan
** Login   <vitiel_s@etna-alternance.net>
** 
** Started on  Wed Sep 30 16:32:31 2015 VITIELLO Sullivan
** Last update Wed Sep 30 16:32:37 2015 VITIELLO Sullivan
*/

void	my_putchar(char c);

void	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (*(str + i))
    {
      my_putchar(*(str + i));
      i++;
    }
}

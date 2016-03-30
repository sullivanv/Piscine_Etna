/*
** my_aff_tab.c for Jour01 in /home/vitiel_s/PiscineC/Jour02/my_aff_tab
** 
** Made by VITIELLO Sullivan
** Login   <vitiel_s@etna-alternance.net>
** 
** Started on  Tue Sep 29 09:09:41 2015 VITIELLO Sullivan
** Last update Tue Sep 29 09:20:17 2015 VITIELLO Sullivan
*/

void	my_putchar(char c);

void	my_aff_tab(char str[])
{
  int	i;

  i = 0;
  while (str[i])
    {
      my_putchar(str[i]);
      i++;
    }
}

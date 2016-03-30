/*
** my_aff_tab_num.c for Jour01 in /home/vitiel_s/PiscineC/Jour02/my_aff_tab_num
** 
** Made by VITIELLO Sullivan
** Login   <vitiel_s@etna-alternance.net>
** 
** Started on  Tue Sep 29 09:32:29 2015 VITIELLO Sullivan
** Last update Tue Sep 29 11:27:37 2015 VITIELLO Sullivan
*/

void	my_putchar(char c);

void	my_aff_tab_num(int tab[], int size)
{
  int	i;

  i = 0;
  while(i < size)
    {
      my_putchar(tab[i] + 48);
      my_putchar('\n');
      i++;
    }
}

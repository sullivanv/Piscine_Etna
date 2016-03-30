/*
** my_trspos_tab.c for Jour03 in /home/vitiel_s/PiscineC/Jour03/my_trspos_tab
** 
** Made by VITIELLO Sullivan
** Login   <vitiel_s@etna-alternance.net>
** 
** Started on  Wed Sep 30 13:59:10 2015 VITIELLO Sullivan
** Last update Wed Sep 30 15:34:32 2015 VITIELLO Sullivan
*/

void	my_putchar(char c);

void	my_trspos_tab(int c, int l, int tab[l][c])
{
  int	x;
  int	y;

  x = 0;
  while (x < c)
    {
      y = 0;
      while (y < l)
	{
	  my_putchar(tab[y][x] + 48);
	  y++;
	}
      my_putchar('\n');
      x++;
    }
}

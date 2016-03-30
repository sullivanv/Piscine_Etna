/*
** my_swap.c for Jour03 in /home/vitiel_s/PiscineC/Jour03/my_swap
** 
** Made by VITIELLO Sullivan
** Login   <vitiel_s@etna-alternance.net>
** 
** Started on  Wed Sep 30 10:38:48 2015 VITIELLO Sullivan
** Last update Wed Sep 30 10:46:10 2015 VITIELLO Sullivan
*/

void	my_swap(int *a, int *b)
{
  int	c;

  c = *a;
  *a = *b;
  *b = c;
}

/*
** my_rev_params.c for Jour03 in /home/vitiel_s/PiscineC/Jour03/my_rev_params
** 
** Made by VITIELLO Sullivan
** Login   <vitiel_s@etna-alternance.net>
** 
** Started on  Wed Sep 30 15:52:01 2015 VITIELLO Sullivan
** Last update Wed Sep 30 16:30:02 2015 VITIELLO Sullivan
*/

void	my_putchar(char c);

void	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      my_putchar(str[i]);
      i++;
    }
}

void	my_rev_params(int nbr, char **argv)
{
  while (nbr > 0)
    {
      my_putstr(argv[nbr - 1]);
      my_putchar('\n');
      nbr--;
    }
}

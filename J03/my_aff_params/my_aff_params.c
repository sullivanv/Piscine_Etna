/*
** my_aff_params.c for Jour03 in /home/vitiel_s/PiscineC/Jour03/my_aff_params
** 
** Made by VITIELLO Sullivan
** Login   <vitiel_s@etna-alternance.net>
** 
** Started on  Wed Sep 30 15:37:36 2015 VITIELLO Sullivan
** Last update Wed Sep 30 15:47:44 2015 VITIELLO Sullivan
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

void	my_aff_params(int nbr, char **argv)
{
  int	i;

  i = 0;
  while (i < nbr)
    {
      my_putstr(argv[i]);
      my_putchar('\n');
      i++;
    }
}

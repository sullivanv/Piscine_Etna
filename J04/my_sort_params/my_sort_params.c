/*
** my_sort_params.c for Jour04 in /home/vitiel_s/PiscineC/Jour04/my_sort_params
** 
** Made by VITIELLO Sullivan
** Login   <vitiel_s@etna-alternance.net>
** 
** Started on  Thu Oct  1 15:12:29 2015 VITIELLO Sullivan
** Last update Thu Oct  1 16:21:12 2015 VITIELLO Sullivan
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

void	my_puts_params(int nb, char **arg)
{
  int	i;

  i = 0;
  while (i < nb)
    {
      my_putstr(arg[i]);
      my_putchar('\n');
      i++;
    }
}

void	my_sort_params(int nb, char **arg)
{
  int	i;
  int	j;
  char	*str;

  i = 0;
  j = 0;
  str = "                                                                     ";
  while(i < nb)
    {
      if (i + 1 != nb && arg[i + 1][j] < arg[i][j])
	{
	  str = arg[i];
	  arg[i] = arg[i + 1];
	  arg[i + 1] = str;
	  i = 0;
	}
      else
	i++;
    }
  my_puts_params(nb, arg);
}

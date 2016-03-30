/*
** do-op.c for Jour07 in /home/vitiel_s/PiscineC/Jour08/do-op
** 
** Made by VITIELLO Sullivan
** Login   <vitiel_s@etna-alternance.net>
** 
** Started on  Tue Oct  6 15:32:46 2015 VITIELLO Sullivan
** Last update Tue Oct  6 17:23:48 2015 VITIELLO Sullivan
*/

void	my_put_nbr(int nbr);
int	my_getnbr(char *str);
void	my_putstr(char *str);

int	my_check(char **av)
{
  int	i;

  i = 0;
  while ((av[1][i] == 43) || (av[1][i] == 45))
    {
      i++;
    }
  if (av[1][i] < '0' || av[1][i] > '9')
    return (1);
  i = 0;
  while ((av[3][i] == 43) || (av[3][i] == 45))
    {
	  i++;
    }
  if (av[3][i] < '0' || av[3][i] > '9')
    return (1);
  if ((av[2][0] == '+') || (av[2][0] == '%') || (av[2][0] == '*') ||
      (av[2][0] == '/') || (av[2][0] == '-'))
    return (0);
  return (1);
}

int	my_result(char **av)
{
  if (av[2][0] == '+')
    return (my_getnbr(av[1]) + my_getnbr(av[3]));
  if (av[2][0] == '-')
    return (my_getnbr(av[1]) - my_getnbr(av[3]));
  if (av[2][0] == '*')
    return (my_getnbr(av[1]) * my_getnbr(av[3]));
  if (av[2][0] == '%')
    return (my_getnbr(av[1]) % my_getnbr(av[3]));
  if (av[2][0] == '/')
    return (my_getnbr(av[1]) / my_getnbr(av[3]));
  else
    return (0);
}

int	my_doop(int ac, char **av)
{
  if (ac != 4)
    return (0);
  if ((av[2][0] == '/' || av[2][0] == '%') && (av[3][0] == '0'))
    {
      my_putstr("Va t'acheter des doigts\n");
      return (0);
    }
  if (my_check(av) == 1)
    {
      my_putstr("Syntax Error\n");
      return (0);
    }
  else
      my_put_nbr(my_result(av));
      my_putstr("\n");
      return (0);
}

int main(int ac, char **av)
{
  my_doop(ac, av);
  return (0);
}

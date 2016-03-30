/*
** my_sort_params_ascii_len.c for Jour07 in /home/vitiel_s/PiscineC/Jour07/my_sort_params_ascii_len
** 
** Made by VITIELLO Sullivan
** Login   <vitiel_s@etna-alternance.net>
** 
** Started on  Mon Oct  5 18:07:12 2015 VITIELLO Sullivan
** Last update Mon Oct  5 19:44:02 2015 VITIELLO Sullivan
*/

void	my_putchar(char c);

void	my_putstr_params(int argc, char **argv)
{
  int	i;
  int	j;
  
  i = 0;
  j = 0;
  while (i < argc)
    {
      while (argv[i][j] != '\0')
	{
	  my_putchar(argv[i][j]);
	  j++;
	}
      my_putchar('\n');
      j = 0;
      i++;
    }
}

int	my_slen(char *str)
{
  int	i;
  
  i = 0;
  while (str[i])
    {
      i++;
    }
  return (i);
}


void	my_sort_params_ascii(int argc, char **av)
{
  int	i;
  int	j;
  char	*str;

  str = "                                                                    ";
  i = 0;
  j = 0;
  while (i + 1 < argc)
    {
      if ((av[i][j] >= av[i + 1][j]) && (my_slen(av[i]) == my_slen(av[i + 1])))
	{
	  while (av[i][j] == av[i + 1][j])
	    j++;
	  if (av[i][j] > av[i + 1][j])
	    {
	      str = av[i];
	      av[i] = av[i + 1];
	      av[i + 1] = str;
	      i = -1;
	    }
	  j = 0;
	}
      i++;
    }
}

void	my_sort_params_ascii_len(int argc, char **argv)
{
  int	i;
  int	j;
  char	*str;
  
  str = "                                                                    ";
  i = 0;
  j = 0;
  while (i + 1 < argc)
    {
      if (my_slen(argv[i]) > my_slen(argv[i + 1]))
	{
	  str = argv[i];
	  argv[i] = argv[i + 1];
	  argv[i + 1] = str;
	  i = -1;
	}
      i++;
    }
  my_sort_params_ascii(argc, argv);
  my_putstr_params(argc, argv);
}

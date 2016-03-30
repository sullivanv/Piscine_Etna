/*
** my_aff_up_params.c for Jour05 in /home/vitiel_s/PiscineC/Jour07/my_aff_up_params
** 
** Made by VITIELLO Sullivan
** Login   <vitiel_s@etna-alternance.net>
** 
** Started on  Mon Oct  5 09:14:51 2015 VITIELLO Sullivan
** Last update Mon Oct  5 10:20:12 2015 VITIELLO Sullivan
*/

void	my_putchar(char c);

int	main(int argc, char **argv)
{
  int	i;
  int	j;

  i = 0;
  j = 0;
  while (i < argc)
    {
      while (argv[i][j])
	{
	  if (argv[i][j] > 96 && argv[i][j] < 123)
	    argv[i][j] = argv[i][j] - 'a' + 'A';
	  my_putchar(argv[i][j]);
	  j++;
	}
      my_putchar('\n');
      j = 0;
      i++;
    }
  return (0);
}

/*
** my_strlen.c for Jour03 in /home/vitiel_s/PiscineC/Jour03/my_strlen
** 
** Made by VITIELLO Sullivan
** Login   <vitiel_s@etna-alternance.net>
** 
** Started on  Wed Sep 30 09:14:00 2015 VITIELLO Sullivan
** Last update Wed Sep 30 09:18:29 2015 VITIELLO Sullivan
*/

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      i++;
    }
  return (i);
}

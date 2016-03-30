/*
** my_strcmp.c for Jour04 in /home/vitiel_s/PiscineC/Jour04/my_strcmp
** 
** Made by VITIELLO Sullivan
** Login   <vitiel_s@etna-alternance.net>
** 
** Started on  Thu Oct  1 11:16:42 2015 VITIELLO Sullivan
** Last update Thu Oct  1 14:27:26 2015 VITIELLO Sullivan
*/

int	my_strcmp(char *s1, char *s2)
{
  int	i;
  int	r;

  r = 0;
  i = 0;
  while (s1[i] && s2[i] && s1[i] == s2[i])
    {
      i++;
    }
  r = (s1[i] - s2[i]);
  if (r > 0)
    return (1);
  if (r == 0)
    return (0);
  else
    return (-1);
}

/*
** my_strncmp.c for Jour04 in /home/vitiel_s/PiscineC/Jour04/my_strncmp
** 
** Made by VITIELLO Sullivan
** Login   <vitiel_s@etna-alternance.net>
** 
** Started on  Thu Oct  1 13:42:02 2015 VITIELLO Sullivan
** Last update Fri Oct  2 18:35:54 2015 VITIELLO Sullivan
*/

int	my_strncmp(char *s1, char *s2, int n)
{
  int	i;
  int	r;

  r = 0;
  i = 0;
  while (s1[i] == s2[i] && s1[i] && s2[i] && (i + 1) < n)
    {
      i++;
    }
  r = r + (s1[i] - s2[i]);
  if (r > 0)
    return (1);
  if (r == 0)
    return (0);
  else
    return (-1);
}

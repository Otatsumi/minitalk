/*
** my_put.c for  in /home/bauwen_j/rendu/my_git/minitalk/src
** 
** Made by bauwen_j
** Login   <bauwen_j@epitech.eu>
** 
** Started on  Mon Mar 17 15:29:54 2014 bauwen_j
** Last update Mon Mar 17 15:29:54 2014 bauwen_j
*/

#include <unistd.h>

void	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != 0)
    i++;
  write(1, str, i);
}

int	val_in_bin(int i)
{
  int	j;
  int	val;

  j = 0;
  val = 128;
  while (++j != i)
    val = val / 2;
  return (val);
}

int	*get_dec_to_bin(int l)
{
  int	octet[8];
  int	i;
  int	val;

  i = 0;
  val = 128;
  while (i < 9)
    {
      if (val <= l)
	{
	  l = l - val;
	  octet[i] = 1;
	}
      else
	octet = 0;
      val = val / 2;
      i++;
    }
  return (octet);
}

int	get_bin_to_dec(int *octet)
{
  int	val;
  int	i;
  int	letter;

  i = 7;
  val = 0;
  while (i > -1)
    {
      if (octect[i] == 1)
	val = val + val_in_bin(i + 1);
      i--;
    }
  return (val);
}

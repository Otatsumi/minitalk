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

void    my_putchar(char c)
{
  write(1, &c, 1);
}

void    my_put_nbr(int nb)
{
  if (nb < 0)
    {
      my_putchar('-');
      nb = -nb;
    }
  if (nb > 9)
      my_put_nbr(nb / 10);
  my_putchar((nb % 10) + 48);
}

void	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != 0)
    i++;
  write(1, str, i);
}

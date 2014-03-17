/*
** serveur_main.c for  in /home/bauwen_j/rendu/my_git/minitalk/serveur
** 
** Made by bauwen_j
** Login   <bauwen_j@epitech.eu>
** 
** Started on  Mon Mar 17 16:26:09 2014 bauwen_j
** Last update Mon Mar 17 16:26:09 2014 bauwen_j
*/

#include <sys/types.h>
#include <unistd.h>

void	start_server()
{
  while (42)
    {
      
    }
}

int	main()
{
  int	pid;

  pid = getpid();
  my_put_nbr(pid);
  start_server();
  return (0);
}

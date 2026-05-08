#include "libft.h"
int ft_isprint(int c){
  if((32<= c && 126>= c)){
    return (1);
  }
  return(0);
}
#include "libft.h"
int ft_isalpha(int c){
  if(('a'<= c && 'z'>= c)||('A'<= c && 'Z'>= c)){
    return (1);
  }
  return(0);
}
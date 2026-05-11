#include "libft.h"
void * ft_memchr(const void* s , int c , size_t n ){
  const unsigned char *s1;
  s1 = (const unsigned char *)  s;
  size_t i ;
  i = 0;

  while(i<n){
    if(s1[i]== (unsigned char) c){
      return((void *)&s[i]);
    }
    i++;
  }
  
  return(NULL);
}
#include "libft.h"

void *ft_memmove(void * dest, const void * src, size_t n){
  unsigned char * d;
  const unsigned char * s;

  if (dest ==NULL&& src==NULL){
    return (NULL);
  }

  d = (unsigned char *)dest;
  s = (const unsigned char *)src;


  if (d<s){
   ft_memcpy(dest,src,n);
  }
  else if(d>s){
    while(n>0){
      n--;
      d[n]=s[n];

    }
  }

  return(dest);
}
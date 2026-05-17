#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	// 1. needle が空なら haystack を返す
	if (needle[0] == '\0')
		return ((char *)haystack);
	
	i = 0;
	// 2. haystack を i 文字目から走査する
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		// 3. haystack[i] から needle が始まっているかチェック
		// ※ (i + j < len) であることが超重要！
		while (needle[j] != '\0' && haystack[i + j] == needle[j] && (i + j) < len)
		{
			j++;
		}
		// 4. needle を最後まで読みきれたら、見つかったということ
		if (needle[j] == '\0')
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}
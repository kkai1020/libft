

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>
#include <stdint.h>
#include <unistd.h>
#include <time.h>
#include <fcntl.h>
#define TEST 500
#define LENGTH 500ul
#define ASCII_OFFSET 33



// char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
// {
// 	size_t i;
// 	size_t j;

// 	i = 0;
// 	j = 0;
// 	if (*needle == '\0')
// 		return (char*)haystack;
// 	while (haystack[i] != '\0' && i < len)
// 	{
// 		while (haystack[i + j] == needle[j] && (i + j) < len)
// 		{
// 			if (needle[j + 1] == '\0')
// 			{
// 				return (char*)&haystack[i];
// 			}
// 			j++;
// 		}
// 		j = 2;
// 		i++;
// 	}
// 	return (NULL);
// }








char *rand_str()
{
    int                i;
    int            len;
    char            *s;
    struct timespec ts;

    timespec_get(&ts, TIME_UTC);
    srand((unsigned int)ts.tv_nsec);
    len = rand() % LENGTH;
    s = malloc(LENGTH * 2);
    i = 0;
    while (i < len)
        s[i++] = rand() % (127 - ASCII_OFFSET) + ASCII_OFFSET;
    s[i] = 0;
    return (s);
}



/*
int	main(void)
{
	char	*str;
	char	*to_find;

	char	*ft__tmp;
	char	*ori_tmp;

	int		i;

	int		k;
	int		ret;
	int		arg3;

	FILE	*success;
	FILE	*error;
	success = fopen("success.txt", "w");
	if (success == NULL)
	{
		printf("open error\n");
		return (1);
	}
	error = fopen("error.txt", "w");
	if (error == NULL)
	{
		printf("open error\n");
		return (1);
	}

	i = 0;
	while (i < 1000000)
	{
		str = rand_str();
		to_find = rand_str();
		arg3 = 0;

		while (arg3 < 1000)
		{
			ft__tmp = ft_strnstr(str, to_find, arg3);
			ori_tmp = strnstr(str, to_find, arg3);
			if (ft__tmp != ori_tmp)
			{
				printf("Error");
				fprintf(error, "CASE : arg1 = [%s], arg2 = [%s], arg3 = %d\n", str, to_find, arg3);
				fprintf(error, "ft_ = [%s]\n", ft__tmp);
				fprintf(error, "ori = [%s]\n", ori_tmp);
				break ;
			}
			//else
			//{
			//	fprintf(success, "CASE : arg1 = [%s], arg2 = [%s], arg3 = %d\n", str, to_find, arg3);
			//	fprintf(success, "ft_ = [%s]\n", ft__tmp);
			//	fprintf(success, "ori = [%s]\n", ori_tmp);
			//}
			fflush(stdout);
			arg3++;
		}
		free(str);
		str = NULL;
		free(to_find);
		to_find = NULL;
		i++;
	}

	fprintf(success, "\n-- FIN --\n");
	fprintf(error, "\n-- FIN --\n");
	fclose(success);
	fclose(error);

	//system("leaks a.out");

	return (0);
}
*/



int	main(void)
{
	char	*str;
	char	*to_find;

	char	*ft__tmp;
	char	*ori_tmp;

	int		i;
	int		j;
	int		arg3;

	FILE	*fp;
	fp = fopen("log.txt", "w");
	if (fp == NULL)
	{
		printf("open error\n");
		return (1);
	}

	j = 0;
	while (j < 100)
	{
		i = 0;
		while (i < 1000)
		{
			str = rand_str();
			to_find = rand_str();
			arg3 = 0;

			while (arg3 < 100)
			{
				ft__tmp = strnstr(str, to_find, arg3);
				ori_tmp = ft_strnstr(str, to_find, arg3);
				if (ft__tmp != ori_tmp)
				{
					printf("Error\n");
					fprintf(fp, "ERROR CASE : arg1 = [%s], arg2 = [%s], arg3 = [%d]\n", str, to_find, arg3);
					fprintf(fp, "ft_ ret = [%s]\n", ft__tmp);
					fprintf(fp, "ori ret = [%s]\n\n", ori_tmp);
					break ;
				}
				fflush(stdout);
				arg3++;
			}
			free(str);
			str = NULL;
			free(to_find);
			to_find = NULL;
			i++;
		}
		j++;
	}

	fclose(fp);

	return (0);
}

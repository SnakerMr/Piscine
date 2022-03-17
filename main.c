/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 16:44:22 by lomasson          #+#    #+#             */
/*   Updated: 2022/02/21 15:33:03 by lomasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>
#include <ctype.h>

void		ft_putchar(char c);
void		ft_print_alphabet(void);
void 		ft_print_reverse_alphabet(void);
void		ft_print_nubers(void);
void		ft_putnbr(int nb);
char		ft_strcpy(char *dest, char *src);
void		ft_swap(int *a, int *b);
int			ft_strcmp(char *s1, char *s2);
int			ft_strncmp(char *s1, char *s2, unsigned int n);
char		*ft_strcat(char *dest, char *src);
char		*ft_strncat(char *dest, char *src, int n);
char		ft_strncpy(char *dest, char *src, int c);
char		*ft_strupcase(char *str);
char 		*ft_strlowcase(char *str);
void		 ft_putstr(char *str);
unsigned int ft_strlcat(char *dest, char *src, unsigned int size);
char		*ft_strcapitalize(char *str);
char		*ft_strstr(char *str, char *to_find);
unsigned int ft_strlcat(char *dest, char *src, unsigned int size);
int			ft_strlen(char *str);
void 		ft_putstr(char *str);
int			ft_atoi(char *str);
int			ft_iterative_factorial(int nb);
int			ft_recursive_factorial(int nb);
int			ft_iterative_power(int nb, int power);
int			ft_recursive_power(int nb, int power);
int			ft_fibonacci(int index);
int			ft_sqrt(int nb);
int			ft_is_prime(int nb);
int			ft_find_next_prime(int nb);
char		*ft_strdup(char *src);
int			*ft_range(int min, int max);
int			ft_ultimate_range(int **range, int min, int max);
char 		*ft_strjoin(int size, char **strs, char *sep);
int			ft_isalpha(char c);

/* ************************************** */
/* 					C00                   */
/* ************************************** */

/*
int main(void)
{
	char x;

	x = 'x';
	ft_putchar(x);
}
*/

/*
int main(void)
{
	ft_print_alphabet();
}
*/

/*
int main(void)
{
	ft_print_reverse_alphabet();
}
*/

/*
int main(void)
{
	void ft_print_numbers();
}
*/

/* ************************************** */
/* 					C01                   */
/* ************************************** */
/*
void ft_swap(int *a, int *b)
{
	int a[] = "a";
	int b[] = "b";
	ft_swap(a, b)
*/




/* ************************************** */
/* 					C02                   */
/* ************************************** */
/*
int main()
{
	char dest[] = "bonjour";
	char src[] = "testte";

	printf("%s", ft_strcpy(dest, src);
}	
*/	
/*
int main()
{
	char dest[20] = "1";
	char src[10] = "abcdefghi";
	char dest2[20] = "1";
	char src2[10] = "abcdefghi";
	int n = 0;

	ft_strncpy(dest, src, n);
	printf("%s\n", dest);
	strncpy(dest2, src2, n);
	printf("%s", dest2);
}
*/
/*
int main()
{
	char str[] = "b?U1{[]f_BU15Ibui";
	char *rep = ft_strupcase(str);
	printf("%s\n", rep);
}
*/
/*
int main()
{
	char str[] = "15REBHVE15E FBIU} EF[]";
	char *rep = ft_strlowcase(str);
	printf("%s\n", rep);
}
*/
/*
int main()
{
	char str[] = "guwe ewUi 48v }G; f;e	rggw[]";
	printf("%s\n", ft_strcapitalize(str));
}
*/
/* ************************************** */
/* 					C03                   */
/* ************************************** */

/*
int main()
{
	char s1[] = "aa";
	char s2[] = "aaf";
	int	 a;
	int	 b;

	a = strcmp(s1, s2);
	b = ft_strcmp(s1, s2);
	printf("%d\n", a);
	printf("%d\n", b);
}
*/

/*
int main()
{
	char s1[] = "abaaaaa";
	char s2[] = "aaaaaa";
	int	 i = 1;
	int	 a;

	a = strncmp(s1, s2, i);
	printf("%d\n", a);
	a = ft_strncmp(s1, s2, i);
	printf("%d\n", a);

}
*/
/*
int main(void)
{
	char dest[20] = "aaa";
	char src[] = "bbb";

	printf("%s\n", ft_strcat(dest, src));
}
*/
/*
int main()
{
	char dest[20] = "b";
	char src[20] = "aa";
	char dest2[20] = "b";
	char src2[20] = "aa";
	int	n = 3;

	printf("%s\n", ft_strncat(dest, src, n));
	printf("%s\n", strncat(dest2, src2, n));
}
*/
/*
int main()
{
	char str[30] = "bveyebvbacbubuabuABC15611565";
	char to_find[4] = "ABC";
	printf("%s\n", ft_strstr(str, to_find));
	
}
*/
/*
int main()
{
	char dest[] = "abcdef";
	char src[] = "1234";
	char dest2[] = "abcdef";
	char src2[] = "1234";
	unsigned int size = 4;
	printf("%u\n", ft_strlcat(dest, src, size));	
	printf("%lu\n", strlcat(dest2, src2, size));	
}
*/
/* ************************************** */
/* 					C04                   */
/* ************************************** */
/*
int main()
{
	char	str[] = "dw";
	
	printf("%d\n", ft_strlen(str));
}
*/
/*
int main()
{
	char	str[] = "dw";

	ft_putstr(str);
}
*/
/*
int main(void)
{
	ft_putnbr();
}
*/
/*
int main(int argc, char **argv)
{
	printf("%d\n", ft_atoi(argv[1]));
	argc = 2;
}
*/
/*
int main()
{
	printf("%d\n", ft_find_next_prime(4));
}
*/
/* ************************************** */
/* 					C05                   */
/* ************************************** */
/*
int main()
{
	printf("%d", ft_iterative_factorial(15));
}
*/
/*
int	main(int argc, char **argv)
{
	if (argc > 0)
	{
		ft_putstr(argv[0]);
		ft_putchar('\n');
	}
	return (0);
}
*/
/*
int main()
{
	printf("0; %d\n", ft_recursive_factorial(0));
	printf("-1; %d\n", ft_recursive_factorial(-1));
	printf("2; %d\n", ft_recursive_factorial(2));
	printf("3; %d\n", ft_recursive_factorial(3));
	printf("4; %d\n", ft_recursive_factorial(4));
	printf("5; %d\n", ft_recursive_factorial(5));
}
*/
/*
int main()
{
	printf("-1; %d\n", ft_iterative_power(-1, 4));
	printf("-1p; %d\n", ft_iterative_power(1, -3));
	printf("0; %d\n", ft_iterative_power(0, 3));
	printf("1; %d\n", ft_iterative_power(1, 3));
	printf("2; %d\n", ft_iterative_power(2, 3));
	printf("3; %d\n", ft_iterative_power(3, 3));
	printf("4; %d\n", ft_iterative_power(4, 3));
	printf("5; %d\n", ft_iterative_power(5, 3));
}
*/
/*
int main()
{
	printf("1; %d\n", ft_recursive_power(1, 3));
	printf("2; %d\n", ft_recursive_power(2, 3));
	printf("3; %d\n", ft_recursive_power(3, 3));
	printf("4; %d\n", ft_recursive_power(4, 3));
	printf("5; %d\n", ft_recursive_power(5, 3));
	printf("0; %d\n", ft_recursive_power(-5, 5));
	printf("1; %d\n", ft_recursive_power(0, 1));
	printf("5; %d\n", ft_recursive_power(0, 0));
	printf("5; %d\n", ft_recursive_power(1, 0));
	printf("-1; %d\n", ft_recursive_power(1, -1));
}
*/
/*
int main()
{
	printf("%d\n", ft_fibonacci(0));
	printf("%d\n", ft_fibonacci(1));
	printf("%d\n", ft_fibonacci(2));
	printf("%d\n", ft_fibonacci(3));
	printf("%d\n", ft_fibonacci(4));
	printf("%d\n", ft_fibonacci(5));
	printf("%d\n", ft_fibonacci(6));
	printf("%d\n", ft_fibonacci(7));
	printf("%d\n", ft_fibonacci(8));
	printf("%d\n", ft_fibonacci(9));
	printf("%d\n", ft_fibonacci(10));
	printf("%d\n", ft_fibonacci(11));
	printf("%d\n", ft_fibonacci(12));
	printf("%d\n", ft_fibonacci(13));
	printf("%d\n", ft_fibonacci(14));
	printf("%d\n", ft_fibonacci(15));
	printf("%d\n", ft_fibonacci(16));
	printf("%d\n", ft_fibonacci(17));
}
*/
/*
int main()
{
	printf("%d\n", ft_sqrt(214700));
}
*/
/*
int main()
{
	printf("%d\n", ft_is_prime(2));
	printf("%d\n", ft_is_prime(3));
	printf("%d\n", ft_is_prime(5));
	printf("%d\n", ft_is_prime(7));
	printf("%d\n", ft_is_prime(11));
	printf("%d\n", ft_is_prime(13));
	printf("%d\n", ft_is_prime(17));
	printf("%d\n", ft_is_prime(19));
	printf("%d\n", ft_is_prime(23));
	printf("%d\n", ft_is_prime(29));
	printf("%d\n", ft_is_prime(31));
	printf("%d\n", ft_is_prime(37));
	printf("%d\n", ft_is_prime(109));
	printf("%d\n", ft_is_prime(113));
	printf("%d\n", ft_is_prime(127));
	printf("%d\n", ft_is_prime(131));
	printf("%d\n", ft_is_prime(137));
	printf("%d\n", ft_is_prime(139));
	printf("%d\n", ft_is_prime(149));
	printf("%d\n", ft_is_prime(151));
	printf("%d\n", ft_is_prime(157));
	printf("00000000\n");
	printf("%d\n", ft_is_prime(INT_MAX));
	printf("%d\n", ft_is_prime(INT_MIN));
	printf("%d\n", ft_is_prime(-4));
	printf("%d\n", ft_is_prime(6));
	printf("%d\n", ft_is_prime(10));
	printf("%d\n", ft_is_prime(111));
	printf("%d\n", ft_is_prime(133));
	printf("%d\n", ft_is_prime(200));
}
*/
/*
int main()
{
	printf("%d\n", ft_find_next_prime(2147483647));
}
*/
/* ************************************** */
/* 					C07                   */
/* ************************************** */
/*
int	main()
{
	char	src[] = "abcde";

	printf("%s\n", ft_strdup(src));
}
*/
/*
int main()
{
	int *tab = ft_range(20, 70);
	int	i;

	i = -1;
	while (tab[++i])
		printf("%d\n", tab[i]);
}
*/
/*
int	main(void)
{
	int **range;

	range = malloc(sizeof(int*));
	if(ft_ultimate_range(range, 0, 10) != 10 || (*range)[0] != 0 || (*range)[9] != 9)
		printf("FAIL 1");
	free(range);

	range = malloc(sizeof(int*));
	if(ft_ultimate_range(range, 5, 10) != 10 && (*range)[0] != -20 && (*range)[9] != -11)
		printf("FAIL 2");
	free(range);

	range = malloc(sizeof(int*));
	if(ft_ultimate_range(range, 10, 0) != 0)
		printf("FAIL 3");
	free(range);

	range = malloc(sizeof(int*));
	if(ft_ultimate_range(range, 2, 0) != 0)
		printf("FAIL 4");
	free(range);

	range = malloc(sizeof(int*));
	if(ft_ultimate_range(range, 0, 1) != 1 && (*range)[0] != 0)
		printf("FAIL 5");
	free(range);

	range = malloc(sizeof(int*));
	if(ft_ultimate_range(range, 0, 2) != 2)
		printf("FAIL 6");
	free(range);
*/
//	range = malloc(sizeof(int*));
//	if(ft_ultimate_range(range, INT_MIN, INT_MAX) != -1)
//		printf("FAIL 7");

/*
int main()
{
	int size = 3;
	char **strs;
	char sep[6] = "-^^-";

	strs = malloc(sizeof(char *) * 4);
		strs[0] = "abc";
		strs[1] = "111";
		strs[2] = "222222";
		strs[3] = "333333333";

		printf("%s\n", ft_strjoin(size, strs, sep));
}
*/

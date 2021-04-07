/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanghyle <snaghyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 21:25:47 by sanghyle          #+#    #+#             */
/*   Updated: 2021/04/07 23:33:53 by sanghyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>    // malloc, free 함수가 선언된 헤더 파일
#include <string.h>
#include <memory.h>
extern void ft_ft(int *nbr);
extern void ft_ultimate_ft(int ********* nbr);
extern void ft_swap(int *a, int *b);
extern void ft_div_mod(int a, int b, int *div, int *mod);
extern void ft_ultimate_div_mod(int *a, int *b);
extern void ft_putstr(char *str);
extern void ft_rev_int_tab(int *tab, int size);
extern void	ft_sort_int_tab(int *tab, int size);
extern int	ft_strlen(char *str);
extern char	*ft_strcpy(char *dest, char *src);
extern char *ft_strncpy(char *dest, char *src, unsigned int size);
extern int ft_str_is_alpha(char *str);
extern int ft_str_is_numeric(char *str);
extern int ft_str_is_lowercase(char *str);
extern int ft_str_is_uppercase(char *str);
extern int ft_str_is_printable(char *str);
extern char *ft_strupcase(char *str);
extern char *ft_strlowcase(char *str);
extern char *ft_strcapitalize(char *str);
extern unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);
extern void ft_putstr_non_printable(char *str);
extern void *ft_print_memory(void *addr, unsigned int size);
extern int ft_strcmp(char *s1, char *s2);
extern int ft_strncmp(char *s1, char *s2, unsigned int n);
extern char *ft_strcat(char *dest, char *src);
extern char *ft_strncat(char *dest, char *src, unsigned int nb);
extern char *ft_strstr(char *str, char *to_find);
extern unsigned int ft_strlcat(char *dest, char *src, unsigned int size);
extern int ft_atoi(char *str);
extern void ft_putnbr_base(int nbr, char *base);
extern int  ft_atoi_base(char *str, char *base);
extern int ft_iterative_factorial(int nb);
extern int ft_recursive_factorial(int nb);
extern int ft_iterative_power(int nb, int power);
extern int ft_recursive_power(int nb, int power);
extern int ft_fibonacci(int index);
extern int ft_sqrt(int nb);
extern int ft_is_prime(int nb);
extern int ft_find_next_prime(int nb);
extern int ft_ten_queens_puzzle(void);

int		main(void)
{
	//ex04
	printf("%d", ft_fibonacci(5));
	//ex03
	/*
	printf("%d", ft_recursive_power(5, 4));
	*/
	//ex02
	/*
	printf("%d", ft_iterative_power(5, 4));
	*/
	//ex01
	/*
	printf("%d", ft_recursive_factorial(5));
	*/
	//ex00
	/*
	printf("%d", ft_iterative_factorial(5));
	*/
	//c05-------------------
	//ex05(string=기수,base=밑)기수의 1의 자리수가 밑의 왼쪽으로부터 몇번째 * g_cnt^0)
	/*
printf("T7: %d\n", ft_atoi_base("     \t\v\f     +---------++-1235aaa776644", "a123567"));	
	printf("%d\n", ft_atoi_base("  1234567890", "0123456789"));
	printf("%d\n", ft_atoi_base("  +-+--accd", "abc"));
	*/
	//ex04
/*	
	ft_putnbr_base(13, "abcd");
*/
	//ex03 
//	ft_atoi();
	
	//ex05 복사될 문자열의 길이가 size-strlen(dst)-1개 이고 끝에 널문자를 삽입한다 결합되는 문자열의 총길이를 반환한다.
	/*
	char src[] = "good morning";
	char dest[] = "hello";
	unsigned int size;
//	unsigned int tot_size;
	int i;

	size = 5;
	ft_strlcat(dest, src, size);
//	printf("%d", tot_size);
	i = 0;
	while (dest[i])
	{
		printf("%c", dest[i]);
		i++;
	}
	*/
	//ex04 1) str1에서 str2와 일치하는 문자열이 있는지 확인을 하는 함수입니다.
	//     2) str1에 str2의 문자열과 일치하는 문자열이 있으면 해당 위치의 포인터(char* 타입)를 반환합니다.
	//3) 당연하게도 일치하는 문자열을 찾지 못하면 null pointer를 반환하게 됩니다. (그렇기 때문에 널체크를 꼭! 해주어야 합니다.)
	//4) 문자열을 찾아서, 문자열을 바꾸는 경우에는 원본 문자열 str1의 배열의 길이를 반드시 생각해야합니다. 배열의 범위를 넘으면, 큰일이니까요.
	/*
	char str1[] = "BlockDMask. He is a smart man";
	char str2[] = "smart";
	char* ptr = ft_strstr(str1, str2);
	printf("%s", ft_strstr("hello 42!!!"," "));
	printf("%s", strstr("hello 42!!! 42?", " "));
	if(ptr != NULL)
	{
		strncpy(ptr, "idiot", 5);
		printf("strstr example : %s\n", ptr);
	}
	*/
	//ex03 origin에 있는 문자열 n개를 문자열 dest 뒤쪽에 이어 붙이는 함수. dest 문자열 끝을 가리키는 널위치에 널문자를 없애고 origin의 문자 n번째까지 붙이는게 특징.
	/*	
	char origin[] = "BlockDMask";
	char dest[20] = "aaabbb";
	unsigned int size;

	size = 5;
	//char *s2 = malloc(sizeof(char) * 30);    // char 10개 크기만큼 동적 메모리 할당
	
	ft_strncat(dest, origin, size);
	printf("%s\n", dest);
	*/
	//ex02 1) origin에 있는 문자열을 dest 뒤쪽에 이어 붙이는 함수. dest 문자열 끝에 있는 '\0' 이것은 사라지고 그 위치에 origin이 바로 붙어버리는게 특징.
	/*
	char origin[] = "BlockDMask";
	char dest[20] = "aaabbb";
	
	ft_strcat(dest, origin);
	printf("%s\n", dest);
	*/	
	//ex01 매개변수 n에 0을 넣으면 항상 0, 음수를 넣으면 언더플로우가 되어 문자열 끝까지 비교
	/*
	char str1[] = "BlockDmask";
	char *str2 = "BlockFmask";
	int x;
	int y;

	x = ft_strncmp(str1, str2, 5); //‘Block” 까지만 검사하므로 0 반환
	y = ft_strncmp(str1, str2, 6);  // D < F 이므로 음수 반환
	
	printf("%d\n%d\n", x, y); 
	*/
	//ex00 매개변수로 들어온 두개의 문자열을 비교 하여 문자열이 완전히 같다면 0을 반환하고, 다르면 음수 혹은 양수를 반환하는 함수.
	//(1) str1 < str2 인 경우에는 음수 반환
	//(2) str1 > str2 인 경우에는 양수 반환
	//(3) str1 == str2 인 경우에는 0을 반환 합니다.
	/*
	char str1[] = "BlockDMask"; 
	char str2[] = "BlockDMask";
	int x;
	int y;
	int z;

	x = ft_strcmp(str1, str2);        // 문자열이 같으므로 0 
	y = ft_strcmp(str1, "BlockFMask"); // D < F 이므로 음수 반환
	z = ft_strcmp(str1, "BlockAMask"); // D > A 이므로 양수 반환
	printf("%d\n%d\n%d\n", x, y, z); 
	*/
	//----------------------------------C02
	//ex11 문자열을 화면에 출력하는 함수를 작성하세요. 출력할 수 없는 문자가 포함된 문자 열의 경우, 역 슬래시 뒤에 16진법 형태(소문자)로 표시되어야 한다.
	/*
	char s1[] = "Coucou\ntu vas bien";
	ft_putstr_non_printable(s1);
	*/
	//ex10 source 문자열의 개수를 반환하고 source문자열을 n의 크기-1 만큼dest 문자열에 복사하고 n의 크기의 자리에는 null 이 들어간다. 안정성이 있다.
	/*
	char *s1 = "hello";                      // 문자열 포인터
    char *s2 = malloc(sizeof(char) * 10);    // char 10개 크기만큼 동적 메모리 할당
	unsigned int n;
	unsigned int len;

	n = 3;
	ft_strlcpy(s2, s1, n);
	len = ft_strlcpy(s2 ,s1 , n);
	printf("%s\n", s2);
	printf("%u\n", len);
	free(s2);
	return (0);
	*/
	//ex09 첫번째 글자를 대문자로 바꾸고 나머지 글자는 소문자로 바꾸는 함수
	/*
	char s1[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	ft_strcapitalize(s1);
	printf("%s\n", s1);
	*/
	//ex08 대문자를 소문자로바꾸는 함수
	/*
	char s1[] = "HELLO";
	ft_strlowcase(s1);
	printf("%s\n", s1);
	*/
	//ex07 소문자를 대문자로바꾸는 함수
	/*
	char s1[] = "hello";
	ft_strupcase(s1);
	printf("%s\n", s1);
	*/
	//ex06 매개변수로 주어진 문자열에 출력 가능한 문자만 포함되어 있으면 1을, 그 밖의 다른 문자가 포함되어 있으면 0을 반환하는 함수
	/*
	char *s1 = "hello";
	char *s2 = "hellO";
	char *s3 = "\n";
	char *s4 = "95O618";
	int x;
	int y;
	int z;
	int k;

	x = ft_str_is_printable(s1);
	y = ft_str_is_printable(s2);
	z = ft_str_is_printable(s3);
	k = ft_str_is_printable(s4);
	printf("%d\n%d\n%d\n%d", x, y, z, k);
	*/
	//ex05 매개변수로 주어진 문자열에 대문자 알파벳만 포함되어 있으면 1을, 다른 문자가 포함되어 있으면 0을 반환하는 함수
	/*
	char *s1 = "hello";
	char *s2 = "hellO";
	char *s3 = "HELLO";
	char *s4 = "95O618";
	int x;
	int y;
	int z;
	int k;

	y = ft_str_is_uppercase(s2);
	z = ft_str_is_uppercase(s3);
	k = ft_str_is_uppercase(s4);
	printf("%d\n%d\n%d\n%d", x, y, z, k);
	*/
	//ex04 매개변수로 주어진 문자열에 소문자 알파벳만 포함되어 있으면 1을, 다른 문자가 포함되어 있으면 0을 반환하는 함수
	/*
	char *s1 = "hello";
	char *s2 = "hellO";
	char *s3 = "95O618";
	int x;
	int y;
	int z;

	x = ft_str_is_lowercase(s1);
	y = ft_str_is_lowercase(s2);
	z = ft_str_is_lowercase(s3);
	printf("%d\n%d\n%d", x, y, z);
	*/
		//ex03 매매개변수로 주어진 문자열에 숫자만 포함되어 있으면 1을, 다른 문자가 포함되어 있으면 0을 반환하는 함수
	/*
	char *s1 = "hello";
	char *s2 = "he1lo";
	char *s3 = "950618";
	int x;
	int y;
	int z;

	x = ft_str_is_numeric(s1);
	y = ft_str_is_numeric(s2);
	z = ft_str_is_numeric(s3);
	printf("%d\n%d\n%d", x, y, z);
	*/
	//ex02 매개변수로 주어진 문자열에 알파벳이 포함되어 있으면 1을, 다른 문자가 포함되어 있으면 0을 반환하는 함수
	 
	/*
	char *s1 = "hello";
	char *s2 = "he1lo";
	int x;
	int y;

	x = ft_str_is_alpha(s1);
	y = ft_str_is_alpha(s2);
	printf("%d\n%d", x, y);
	*/
	//ex01 src에 있는 문자열을 dest로 복사를 하는데, n 만큼만 복사하는 함수
	/*
	char *s1 = "hello";                      // 문자열 포인터
    char *s2 = malloc(sizeof(char) * 10);    // char 10개 크기만큼 동적 메모리 할당
	unsigned int n;

	n = 3;
	ft_strncpy(s2, s1, n);
	printf("%s\n", s2);
	free(s2);
	return (0);
	*/
	//ex00 strcpy란 src에 있는 문자열을 dest로 보내는 함수 
	/*
	char *s1 = "hello";                      // 문자열 포인터
    char *s2 = malloc(sizeof(char) * 10);    // char 10개 크기만큼 동적 메모리 할당
	//char s2[10];
	//char s2 = ""; //메모리에 저장된 메모리 주소는 복사할 공간도없고 읽기만 할 수 있고 쓰기가 막혀있다.
	ft_strcpy(s2, s1);
	printf("%s\n", s2);
	free(s2);
	return (0);
	*/
	//----------------------------------C01
	//ex08---------------------------------
	/*
	int abc[15] = {5, 4, 6, 3, 1, 10, 11, 12, 14, 16, 17, 9, 20, 21,90};
	int i = 0;
	int size = 15;

	ft_sort_int_tab(abc, size);
	while(i < size)
	{
	 	printf("%d", abc[i]);
		i++;
	}
	*/
	//ex07---------------------------------
	/*
	int i;
	int y;
	int abc[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};	
	i = 0;
	y = 10;
	ft_rev_int_tab(abc, y);
	while(i < 10)
	{
	printf("%d", abc[i]);
	i++;
	}
	*/
	//ex06---------------------------------
	/*	
	char *cha_len;
	int len;
	cha_len = "cheer up!";
	len = ft_strlen(cha_len);
	printf("%d", len);
	*/
	//ex05----------------------------------
	/*
	char *cha_nul;
	
	cha_nul = "cheer up!";
	ft_putstr(cha_nul);
	*/
	//ex04----------------------------------
	/*
	int x;
	int y;
	
	x = 100;
	y = 3;
	ft_ultimate_div_mod(&x, &y);
	printf("%d \n%d", x, y);
	*/
	//ex03-----------------------------------
	/*
	int x;
	int y;
	int div;
	int mod;
	
	x=100;
	y=3;
	ft_div_mod(x, y, &div, &mod);
	printf("%d \n%d", div, mod);
	*/
	//ex02-----------------------------------
	/*
	int x;
	int y;

	x = 10;
	y = 20;
	ft_swap(&x, &y);
	printf("%d \n%d", x, y);
	*/

	//ex01 작동안됨 물어볼 것-----------------
	/*
	int x;

	ft_ultimate_ft((int*********)&x);
	printf("%d", x);
	*/

	//ex00-------------------------------------
	/*	
	int x;

	ft_ft(&x);
	printf("%d", x);
	*/
	return (0);
}

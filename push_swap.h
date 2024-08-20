/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastard <abastard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 11:27:48 by abastard          #+#    #+#             */
/*   Updated: 2024/08/20 15:17:19 by abastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FT_PUSHSWAP
# define FT_PUSHSWAP
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdint.h>
# include <stdio.h>
# include <limits.h>
# include <stdbool.h>

# define HEX_UP_BASE "0123456789ABCDEF"
# define HEX_LOW_BASE "0123456789abcdef"
# define DECIMAL "0123456789"

typedef struct Node
{
    int x;
    struct Node* next;
    struct Node* prev;
} Node;


void    push_swap(char *str, ...);
int		ft_printf(char const *str, ...);
size_t	ft_strlen(const char *str);

/* format functions */
void	ft_character_pf(char c, size_t *counter);
void	ft_string_pf(char *str, size_t *counter);
void	ft_putnbr_pf(int num, size_t *counter);
void	ft_putint_pf(unsigned int num, size_t *counter);
void	ft_hex_pf(unsigned int num, size_t *counter, char *base);
void	ft_pointer_pf(void *ptr, size_t *counter);

/* auxiliary functions */
char	    *ft_changer_pf(unsigned long long n, char *base);

/* libft functions */
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
size_t	ft_strlen(const char *str);
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_atoi(const char *str);
void	*ft_memset(void *dest, int c, size_t count);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
size_t	ft_strlcpy(char *dest, const char *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
size_t	ft_strlcat(char *dest, const char *src, size_t n);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
void	*ft_calloc(size_t nmemb, size_t size);
char	*ft_strdup(const char *s);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putendl_fd(char *s, int fd);


/* algoritmic funcions */
void    insert(Node **A, int n);
void    pa(Node **A, Node **B);
void    pb(Node **A, Node **B);
void    rr(Node **A, Node **B);
void    rrr(Node **A, Node **B);
void    rrx(Node **A);
void    rx(Node **A);
void    ss(Node **A, Node **B);
void    sx(Node **A);
void    deallocate(Node **A);
void    deallocate_first(Node **A);

#endif